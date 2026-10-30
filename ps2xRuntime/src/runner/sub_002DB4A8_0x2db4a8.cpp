#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB4A8
// Address: 0x2db4a8 - 0x2db508
void sub_002DB4A8_0x2db4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB4A8_0x2db4a8");
#endif

    switch (ctx->pc) {
        case 0x2db4a8u: goto label_2db4a8;
        case 0x2db4acu: goto label_2db4ac;
        case 0x2db4b0u: goto label_2db4b0;
        case 0x2db4b4u: goto label_2db4b4;
        case 0x2db4b8u: goto label_2db4b8;
        case 0x2db4bcu: goto label_2db4bc;
        case 0x2db4c0u: goto label_2db4c0;
        case 0x2db4c4u: goto label_2db4c4;
        case 0x2db4c8u: goto label_2db4c8;
        case 0x2db4ccu: goto label_2db4cc;
        case 0x2db4d0u: goto label_2db4d0;
        case 0x2db4d4u: goto label_2db4d4;
        case 0x2db4d8u: goto label_2db4d8;
        case 0x2db4dcu: goto label_2db4dc;
        case 0x2db4e0u: goto label_2db4e0;
        case 0x2db4e4u: goto label_2db4e4;
        case 0x2db4e8u: goto label_2db4e8;
        case 0x2db4ecu: goto label_2db4ec;
        case 0x2db4f0u: goto label_2db4f0;
        case 0x2db4f4u: goto label_2db4f4;
        case 0x2db4f8u: goto label_2db4f8;
        case 0x2db4fcu: goto label_2db4fc;
        case 0x2db500u: goto label_2db500;
        case 0x2db504u: goto label_2db504;
        default: break;
    }

    ctx->pc = 0x2db4a8u;

label_2db4a8:
    // 0x2db4a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2db4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2db4ac:
    // 0x2db4ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2db4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2db4b0:
    // 0x2db4b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2db4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2db4b4:
    // 0x2db4b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2db4b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2db4b8:
    // 0x2db4b8: 0xc10587a  jal         func_4161E8
label_2db4bc:
    if (ctx->pc == 0x2DB4BCu) {
        ctx->pc = 0x2DB4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB4B8u;
        // 0x2db4bc: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB4C0u;
        goto label_2db4c0;
    }
    ctx->pc = 0x2DB4B8u;
    SET_GPR_U32(ctx, 31, 0x2DB4C0u);
    ctx->pc = 0x2DB4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB4B8u;
    // 0x2db4bc: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2DB4B8u, 0x2DB4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB4C0u;
label_2db4c0:
    // 0x2db4c0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2db4c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2db4c4:
    // 0x2db4c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2db4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2db4c8:
    // 0x2db4c8: 0xc60c0028  lwc1        $f12, 0x28($s0)
    ctx->pc = 0x2db4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2db4cc:
    // 0x2db4cc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2db4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2db4d0:
    // 0x2db4d0: 0xc60d0030  lwc1        $f13, 0x30($s0)
    ctx->pc = 0x2db4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2db4d4:
    // 0x2db4d4: 0xc0cddb0  jal         func_3376C0
label_2db4d8:
    if (ctx->pc == 0x2DB4D8u) {
        ctx->pc = 0x2DB4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB4D4u;
        // 0x2db4d8: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB4DCu;
        goto label_2db4dc;
    }
    ctx->pc = 0x2DB4D4u;
    SET_GPR_U32(ctx, 31, 0x2DB4DCu);
    ctx->pc = 0x2DB4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB4D4u;
    // 0x2db4d8: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3376C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3376C0u, 0x2DB4D4u, 0x2DB4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB4DCu;
label_2db4dc:
    // 0x2db4dc: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2db4dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2db4e0:
    // 0x2db4e0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2db4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2db4e4:
    // 0x2db4e4: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x2db4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_2db4e8:
    // 0x2db4e8: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2db4e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2db4ec:
    // 0x2db4ec: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2db4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2db4f0:
    // 0x2db4f0: 0x40f809  jalr        $v0
label_2db4f4:
    if (ctx->pc == 0x2DB4F4u) {
        ctx->pc = 0x2DB4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB4F0u;
        // 0x2db4f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB4F8u;
        goto label_2db4f8;
    }
    ctx->pc = 0x2DB4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DB4F8u);
        ctx->pc = 0x2DB4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB4F0u;
        // 0x2db4f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB4F0u, 0x2DB4F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DB4F8u;
label_2db4f8:
    // 0x2db4f8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2db4f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2db4fc:
    // 0x2db4fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2db4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2db500:
    // 0x2db500: 0x3e00008  jr          $ra
label_2db504:
    if (ctx->pc == 0x2DB504u) {
        ctx->pc = 0x2DB504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB500u;
        // 0x2db504: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DB508u;
        goto label_fallthrough_0x2db500;
    }
    ctx->pc = 0x2DB500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB500u;
        // 0x2db504: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2db500:
    ctx->pc = 0x2DB508u;
}
