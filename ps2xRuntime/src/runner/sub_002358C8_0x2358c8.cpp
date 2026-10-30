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

// Function: sub_002358C8
// Address: 0x2358c8 - 0x2359a0
void sub_002358C8_0x2358c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002358C8_0x2358c8");
#endif

    switch (ctx->pc) {
        case 0x2358fcu: goto label_2358fc;
        case 0x235904u: goto label_235904;
        case 0x235920u: goto label_235920;
        case 0x235938u: goto label_235938;
        case 0x235950u: goto label_235950;
        case 0x235968u: goto label_235968;
        case 0x235984u: goto label_235984;
        default: break;
    }

    ctx->pc = 0x2358c8u;

    // 0x2358c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2358c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2358cc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2358ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2358d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2358d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2358d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2358d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2358d8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2358d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2358dc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2358dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2358e0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2358e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2358e4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2358e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2358e8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2358e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2358ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2358ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2358f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2358f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2358f4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2358F4u;
    SET_GPR_U32(ctx, 31, 0x2358FCu);
    ctx->pc = 0x2358F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2358F4u;
    // 0x2358f8: 0xafa60004  sw          $a2, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2358F4u, 0x2358FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2358FCu;
label_2358fc:
    // 0x2358fc: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2358FCu;
    SET_GPR_U32(ctx, 31, 0x235904u);
    ctx->pc = 0x235900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2358FCu;
    // 0x235900: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2358FCu, 0x235904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235904u;
label_235904:
    // 0x235904: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x235904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235908: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x235908u;
    {
        const bool branch_taken_0x235908 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235908u;
        // 0x23590c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235908) {
            ctx->pc = 0x235984u;
            goto label_235984;
        }
    }
    ctx->pc = 0x235910u;
    // 0x235910: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x235910u;
    {
        const bool branch_taken_0x235910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235910u;
        // 0x235914: 0x27a40004  addiu       $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235910) {
            ctx->pc = 0x235940u;
            goto label_235940;
        }
    }
    ctx->pc = 0x235918u;
    // 0x235918: 0xc0e409a  jal         func_390268
    ctx->pc = 0x235918u;
    SET_GPR_U32(ctx, 31, 0x235920u);
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x235918u, 0x235920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235920u;
label_235920:
    // 0x235920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235924: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x235924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235928: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x235928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23592c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x23592cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235930: 0xc0992f6  jal         func_264BD8
    ctx->pc = 0x235930u;
    SET_GPR_U32(ctx, 31, 0x235938u);
    ctx->pc = 0x235934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235930u;
    // 0x235934: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264BD8u, 0x235930u, 0x235938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235938u;
label_235938:
    // 0x235938: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x235938u;
    {
        const bool branch_taken_0x235938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23593Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235938u;
        // 0x23593c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235938) {
            ctx->pc = 0x235988u;
            goto label_235988;
        }
    }
    ctx->pc = 0x235940u;
label_235940:
    // 0x235940: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x235940u;
    {
        const bool branch_taken_0x235940 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x235944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235940u;
        // 0x235944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235940) {
            ctx->pc = 0x235970u;
            goto label_235970;
        }
    }
    ctx->pc = 0x235948u;
    // 0x235948: 0xc089bfc  jal         func_226FF0
    ctx->pc = 0x235948u;
    SET_GPR_U32(ctx, 31, 0x235950u);
    ctx->pc = 0x23594Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235948u;
    // 0x23594c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x235948u, 0x235950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235950u;
label_235950:
    // 0x235950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235954: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x235954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235958: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x235958u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23595c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x23595cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235960: 0xc0992f6  jal         func_264BD8
    ctx->pc = 0x235960u;
    SET_GPR_U32(ctx, 31, 0x235968u);
    ctx->pc = 0x235964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235960u;
    // 0x235964: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264BD8u, 0x235960u, 0x235968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235968u;
label_235968:
    // 0x235968: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x235968u;
    {
        const bool branch_taken_0x235968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235968u;
        // 0x23596c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235968) {
            ctx->pc = 0x235988u;
            goto label_235988;
        }
    }
    ctx->pc = 0x235970u;
label_235970:
    // 0x235970: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x235970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235974: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x235974u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235978: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x235978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23597c: 0xc0992f6  jal         func_264BD8
    ctx->pc = 0x23597Cu;
    SET_GPR_U32(ctx, 31, 0x235984u);
    ctx->pc = 0x235980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23597Cu;
    // 0x235980: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264BD8u, 0x23597Cu, 0x235984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235984u;
label_235984:
    // 0x235984: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x235984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_235988:
    // 0x235988: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x235988u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23598c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x23598cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x235990: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x235990u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235994: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235998: 0x3e00008  jr          $ra
    ctx->pc = 0x235998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235998u;
        // 0x23599c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2359A0u;
}
