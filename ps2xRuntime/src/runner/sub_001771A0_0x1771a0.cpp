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

// Function: sub_001771A0
// Address: 0x1771a0 - 0x177210
void sub_001771A0_0x1771a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001771A0_0x1771a0");
#endif

    switch (ctx->pc) {
        case 0x1771a0u: goto label_1771a0;
        case 0x1771a4u: goto label_1771a4;
        case 0x1771a8u: goto label_1771a8;
        case 0x1771acu: goto label_1771ac;
        case 0x1771b0u: goto label_1771b0;
        case 0x1771b4u: goto label_1771b4;
        case 0x1771b8u: goto label_1771b8;
        case 0x1771bcu: goto label_1771bc;
        case 0x1771c0u: goto label_1771c0;
        case 0x1771c4u: goto label_1771c4;
        case 0x1771c8u: goto label_1771c8;
        case 0x1771ccu: goto label_1771cc;
        case 0x1771d0u: goto label_1771d0;
        case 0x1771d4u: goto label_1771d4;
        case 0x1771d8u: goto label_1771d8;
        case 0x1771dcu: goto label_1771dc;
        case 0x1771e0u: goto label_1771e0;
        case 0x1771e4u: goto label_1771e4;
        case 0x1771e8u: goto label_1771e8;
        case 0x1771ecu: goto label_1771ec;
        case 0x1771f0u: goto label_1771f0;
        case 0x1771f4u: goto label_1771f4;
        case 0x1771f8u: goto label_1771f8;
        case 0x1771fcu: goto label_1771fc;
        case 0x177200u: goto label_177200;
        case 0x177204u: goto label_177204;
        case 0x177208u: goto label_177208;
        case 0x17720cu: goto label_17720c;
        default: break;
    }

    ctx->pc = 0x1771a0u;

label_1771a0:
    // 0x1771a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1771a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1771a4:
    // 0x1771a4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1771a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1771a8:
    // 0x1771a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1771a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1771ac:
    // 0x1771ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1771acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1771b0:
    // 0x1771b0: 0xc05d484  jal         func_175210
label_1771b4:
    if (ctx->pc == 0x1771B4u) {
        ctx->pc = 0x1771B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1771B0u;
        // 0x1771b4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1771B8u;
        goto label_1771b8;
    }
    ctx->pc = 0x1771B0u;
    SET_GPR_U32(ctx, 31, 0x1771B8u);
    ctx->pc = 0x1771B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1771B0u;
    // 0x1771b4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x1771B0u, 0x1771B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1771B8u;
label_1771b8:
    // 0x1771b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1771b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1771bc:
    // 0x1771bc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1771bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1771c0:
    // 0x1771c0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1771c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_1771c4:
    // 0x1771c4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_1771c8:
    if (ctx->pc == 0x1771C8u) {
        ctx->pc = 0x1771C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1771C4u;
        // 0x1771c8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1771CCu;
        goto label_1771cc;
    }
    ctx->pc = 0x1771C4u;
    {
        const bool branch_taken_0x1771c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1771c4) {
            ctx->pc = 0x1771C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1771C4u;
            // 0x1771c8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177200u;
            goto label_177200;
        }
    }
    ctx->pc = 0x1771CCu;
label_1771cc:
    // 0x1771cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1771ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1771d0:
    // 0x1771d0: 0x84640110  lh          $a0, 0x110($v1)
    ctx->pc = 0x1771d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 272)));
label_1771d4:
    // 0x1771d4: 0x8c620114  lw          $v0, 0x114($v1)
    ctx->pc = 0x1771d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
label_1771d8:
    // 0x1771d8: 0x40f809  jalr        $v0
label_1771dc:
    if (ctx->pc == 0x1771DCu) {
        ctx->pc = 0x1771DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1771D8u;
        // 0x1771dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1771E0u;
        goto label_1771e0;
    }
    ctx->pc = 0x1771D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1771E0u);
        ctx->pc = 0x1771DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1771D8u;
        // 0x1771dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1771D8u, 0x1771E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1771E0u;
label_1771e0:
    // 0x1771e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1771e4:
    if (ctx->pc == 0x1771E4u) {
        ctx->pc = 0x1771E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1771E0u;
        // 0x1771e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1771E8u;
        goto label_1771e8;
    }
    ctx->pc = 0x1771E0u;
    {
        const bool branch_taken_0x1771e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1771E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1771E0u;
        // 0x1771e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1771e0) {
            ctx->pc = 0x1771FCu;
            goto label_1771fc;
        }
    }
    ctx->pc = 0x1771E8u;
label_1771e8:
    // 0x1771e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1771e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1771ec:
    // 0x1771ec: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1771ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_1771f0:
    // 0x1771f0: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x1771f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_1771f4:
    // 0x1771f4: 0x60f809  jalr        $v1
label_1771f8:
    if (ctx->pc == 0x1771F8u) {
        ctx->pc = 0x1771F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1771F4u;
        // 0x1771f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1771FCu;
        goto label_1771fc;
    }
    ctx->pc = 0x1771F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1771FCu);
        ctx->pc = 0x1771F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1771F4u;
        // 0x1771f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1771F4u, 0x1771FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1771FCu;
label_1771fc:
    // 0x1771fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1771fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_177200:
    // 0x177200: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_177204:
    // 0x177204: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x177204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_177208:
    // 0x177208: 0x3e00008  jr          $ra
label_17720c:
    if (ctx->pc == 0x17720Cu) {
        ctx->pc = 0x17720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177208u;
        // 0x17720c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x177210u;
        goto label_fallthrough_0x177208;
    }
    ctx->pc = 0x177208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177208u;
        // 0x17720c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x177208:
    ctx->pc = 0x177210u;
}
