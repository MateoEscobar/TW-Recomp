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

// Function: sub_003D6480
// Address: 0x3d6480 - 0x3d64d8
void sub_003D6480_0x3d6480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D6480_0x3d6480");
#endif

    switch (ctx->pc) {
        case 0x3d6480u: goto label_3d6480;
        case 0x3d6484u: goto label_3d6484;
        case 0x3d6488u: goto label_3d6488;
        case 0x3d648cu: goto label_3d648c;
        case 0x3d6490u: goto label_3d6490;
        case 0x3d6494u: goto label_3d6494;
        case 0x3d6498u: goto label_3d6498;
        case 0x3d649cu: goto label_3d649c;
        case 0x3d64a0u: goto label_3d64a0;
        case 0x3d64a4u: goto label_3d64a4;
        case 0x3d64a8u: goto label_3d64a8;
        case 0x3d64acu: goto label_3d64ac;
        case 0x3d64b0u: goto label_3d64b0;
        case 0x3d64b4u: goto label_3d64b4;
        case 0x3d64b8u: goto label_3d64b8;
        case 0x3d64bcu: goto label_3d64bc;
        case 0x3d64c0u: goto label_3d64c0;
        case 0x3d64c4u: goto label_3d64c4;
        case 0x3d64c8u: goto label_3d64c8;
        case 0x3d64ccu: goto label_3d64cc;
        case 0x3d64d0u: goto label_3d64d0;
        case 0x3d64d4u: goto label_3d64d4;
        default: break;
    }

    ctx->pc = 0x3d6480u;

label_3d6480:
    // 0x3d6480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d6480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3d6484:
    // 0x3d6484: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3d6484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3d6488:
    // 0x3d6488: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d6488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3d648c:
    // 0x3d648c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d648cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d6490:
    // 0x3d6490: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d6490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d6494:
    // 0x3d6494: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d6494u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d6498:
    // 0x3d6498: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d6498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d649c:
    // 0x3d649c: 0x40f809  jalr        $v0
label_3d64a0:
    if (ctx->pc == 0x3D64A0u) {
        ctx->pc = 0x3D64A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D649Cu;
        // 0x3d64a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D64A4u;
        goto label_3d64a4;
    }
    ctx->pc = 0x3D649Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D64A4u);
        ctx->pc = 0x3D64A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D649Cu;
        // 0x3d64a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D649Cu, 0x3D64A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D64A4u;
label_3d64a4:
    // 0x3d64a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d64a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d64a8:
    // 0x3d64a8: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x3d64a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_3d64ac:
    // 0x3d64ac: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3d64acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3d64b0:
    // 0x3d64b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3d64b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3d64b4:
    // 0x3d64b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3d64b8:
    if (ctx->pc == 0x3D64B8u) {
        ctx->pc = 0x3D64B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D64B4u;
        // 0x3d64b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D64BCu;
        goto label_3d64bc;
    }
    ctx->pc = 0x3D64B4u;
    {
        const bool branch_taken_0x3d64b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D64B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D64B4u;
        // 0x3d64b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d64b4) {
            ctx->pc = 0x3D64C8u;
            goto label_3d64c8;
        }
    }
    ctx->pc = 0x3D64BCu;
label_3d64bc:
    // 0x3d64bc: 0xc0e93de  jal         func_3A4F78
label_3d64c0:
    if (ctx->pc == 0x3D64C0u) {
        ctx->pc = 0x3D64C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D64BCu;
        // 0x3d64c0: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D64C4u;
        goto label_3d64c4;
    }
    ctx->pc = 0x3D64BCu;
    SET_GPR_U32(ctx, 31, 0x3D64C4u);
    ctx->pc = 0x3D64C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D64BCu;
    // 0x3d64c0: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4F78u, 0x3D64BCu, 0x3D64C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D64C4u;
label_3d64c4:
    // 0x3d64c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d64c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d64c8:
    // 0x3d64c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3d64c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d64cc:
    // 0x3d64cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d64ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d64d0:
    // 0x3d64d0: 0x3e00008  jr          $ra
label_3d64d4:
    if (ctx->pc == 0x3D64D4u) {
        ctx->pc = 0x3D64D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D64D0u;
        // 0x3d64d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D64D8u;
        goto label_fallthrough_0x3d64d0;
    }
    ctx->pc = 0x3D64D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D64D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D64D0u;
        // 0x3d64d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D64D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d64d0:
    ctx->pc = 0x3D64D8u;
}
