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

// Function: sub_002DF1A8
// Address: 0x2df1a8 - 0x2df250
void sub_002DF1A8_0x2df1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF1A8_0x2df1a8");
#endif

    switch (ctx->pc) {
        case 0x2df1d0u: goto label_2df1d0;
        case 0x2df1d8u: goto label_2df1d8;
        case 0x2df1ecu: goto label_2df1ec;
        case 0x2df1f4u: goto label_2df1f4;
        case 0x2df204u: goto label_2df204;
        case 0x2df20cu: goto label_2df20c;
        case 0x2df228u: goto label_2df228;
        case 0x2df234u: goto label_2df234;
        default: break;
    }

    ctx->pc = 0x2df1a8u;

    // 0x2df1a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2df1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2df1ac: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2df1acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2df1b0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2df1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2df1b4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2df1b4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2df1b8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2df1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2df1bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2df1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df1c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2df1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2df1c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2df1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2df1c8: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2DF1C8u;
    SET_GPR_U32(ctx, 31, 0x2DF1D0u);
    ctx->pc = 0x2DF1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF1C8u;
    // 0x2df1cc: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2DF1C8u, 0x2DF1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF1D0u;
label_2df1d0:
    // 0x2df1d0: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2DF1D0u;
    SET_GPR_U32(ctx, 31, 0x2DF1D8u);
    ctx->pc = 0x2DF1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF1D0u;
    // 0x2df1d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2DF1D0u, 0x2DF1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF1D8u;
label_2df1d8:
    // 0x2df1d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2df1d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df1dc: 0x52000016  beql        $s0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2DF1DCu;
    {
        const bool branch_taken_0x2df1dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df1dc) {
            ctx->pc = 0x2DF1E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF1DCu;
            // 0x2df1e0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF238u;
            goto label_2df238;
        }
    }
    ctx->pc = 0x2DF1E4u;
    // 0x2df1e4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2DF1E4u;
    SET_GPR_U32(ctx, 31, 0x2DF1ECu);
    ctx->pc = 0x2DF1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF1E4u;
    // 0x2df1e8: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2DF1E4u, 0x2DF1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF1ECu;
label_2df1ec:
    // 0x2df1ec: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2DF1ECu;
    SET_GPR_U32(ctx, 31, 0x2DF1F4u);
    ctx->pc = 0x2DF1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF1ECu;
    // 0x2df1f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2DF1ECu, 0x2DF1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF1F4u;
label_2df1f4:
    // 0x2df1f4: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2DF1F4u;
    {
        const bool branch_taken_0x2df1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df1f4) {
            ctx->pc = 0x2DF1F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF1F4u;
            // 0x2df1f8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF238u;
            goto label_2df238;
        }
    }
    ctx->pc = 0x2DF1FCu;
    // 0x2df1fc: 0xc087502  jal         func_21D408
    ctx->pc = 0x2DF1FCu;
    SET_GPR_U32(ctx, 31, 0x2DF204u);
    ctx->pc = 0x2DF200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF1FCu;
    // 0x2df200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2DF1FCu, 0x2DF204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF204u;
label_2df204:
    // 0x2df204: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2DF204u;
    SET_GPR_U32(ctx, 31, 0x2DF20Cu);
    ctx->pc = 0x2DF208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF204u;
    // 0x2df208: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2DF204u, 0x2DF20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF20Cu;
label_2df20c:
    // 0x2df20c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2df20cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df210: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DF210u;
    {
        const bool branch_taken_0x2df210 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF210u;
        // 0x2df214: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df210) {
            ctx->pc = 0x2DF228u;
            goto label_2df228;
        }
    }
    ctx->pc = 0x2DF218u;
    // 0x2df218: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2df218u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2df21c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2df21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df220: 0xc0b7c94  jal         func_2DF250
    ctx->pc = 0x2DF220u;
    SET_GPR_U32(ctx, 31, 0x2DF228u);
    ctx->pc = 0x2DF224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF220u;
    // 0x2df224: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF250u, 0x2DF220u, 0x2DF228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF228u;
label_2df228:
    // 0x2df228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2df228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df22c: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2DF22Cu;
    SET_GPR_U32(ctx, 31, 0x2DF234u);
    ctx->pc = 0x2DF230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF22Cu;
    // 0x2df230: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2DF22Cu, 0x2DF234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF234u;
label_2df234:
    // 0x2df234: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2df234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2df238:
    // 0x2df238: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2df238u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df23c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2df23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df240: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2df240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2df244: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF244u;
        // 0x2df248: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF24Cu;
    // 0x2df24c: 0x0  nop
    ctx->pc = 0x2df24cu;
    // NOP
    ctx->pc = 0x2df250u;
}
