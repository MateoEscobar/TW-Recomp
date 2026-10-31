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

// Function: sub_0032CFF8
// Address: 0x32cff8 - 0x32d078
void sub_0032CFF8_0x32cff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032CFF8_0x32cff8");
#endif

    switch (ctx->pc) {
        case 0x32d03cu: goto label_32d03c;
        case 0x32d048u: goto label_32d048;
        default: break;
    }

    ctx->pc = 0x32cff8u;

    // 0x32cff8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32cff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32cffc: 0x3c070057  lui         $a3, 0x57
    ctx->pc = 0x32cffcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)87 << 16));
    // 0x32d000: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x32d000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x32d004: 0x24e75c48  addiu       $a3, $a3, 0x5C48
    ctx->pc = 0x32d004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23624));
    // 0x32d008: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32d008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32d00c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32d00cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d010: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x32d010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x32d014: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x32d014u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d018: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32d018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32d01c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x32d01cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d020: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x32d020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x32d024: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x32d024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x32d028: 0x8e300028  lw          $s0, 0x28($s1)
    ctx->pc = 0x32d028u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x32d02c: 0x8605001e  lh          $a1, 0x1E($s0)
    ctx->pc = 0x32d02cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x32d030: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x32d030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x32d034: 0xc0ca88a  jal         func_32A228
    ctx->pc = 0x32D034u;
    SET_GPR_U32(ctx, 31, 0x32D03Cu);
    ctx->pc = 0x32D038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D034u;
    // 0x32d038: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A228u, 0x32D034u, 0x32D03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D03Cu;
label_32d03c:
    // 0x32d03c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32d03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d040: 0xc0cb3dc  jal         func_32CF70
    ctx->pc = 0x32D040u;
    SET_GPR_U32(ctx, 31, 0x32D048u);
    ctx->pc = 0x32D044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D040u;
    // 0x32d044: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CF70u, 0x32D040u, 0x32D048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D048u;
label_32d048:
    // 0x32d048: 0x8603001e  lh          $v1, 0x1E($s0)
    ctx->pc = 0x32d048u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x32d04c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x32d04cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32d050: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x32d050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x32d054: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32d054u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32d058: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32d058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32d05c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x32d05cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32d060: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x32d060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32d064: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32d064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d068: 0xae0201ac  sw          $v0, 0x1AC($s0)
    ctx->pc = 0x32d068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 2));
    // 0x32d06c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x32d06cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32d070: 0x3e00008  jr          $ra
    ctx->pc = 0x32D070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D070u;
        // 0x32d074: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D078u;
}
