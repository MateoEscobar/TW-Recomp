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

// Function: sub_0047BCF0
// Address: 0x47bcf0 - 0x47bd88
void sub_0047BCF0_0x47bcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047BCF0_0x47bcf0");
#endif

    switch (ctx->pc) {
        case 0x47bd20u: goto label_47bd20;
        case 0x47bd3cu: goto label_47bd3c;
        case 0x47bd4cu: goto label_47bd4c;
        default: break;
    }

    ctx->pc = 0x47bcf0u;

    // 0x47bcf0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x47bcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x47bcf4: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x47bcf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x47bcf8: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x47bcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x47bcfc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x47bcfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bd00: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x47bd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x47bd04: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x47bd04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bd08: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x47bd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x47bd0c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x47bd0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bd10: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x47bd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
    // 0x47bd14: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x47BD14u;
    {
        const bool branch_taken_0x47bd14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x47BD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BD14u;
        // 0x47bd18: 0xffbf0100  sd          $ra, 0x100($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47bd14) {
            ctx->pc = 0x47BD64u;
            goto label_47bd64;
        }
    }
    ctx->pc = 0x47BD1Cu;
    // 0x47bd1c: 0x24140100  addiu       $s4, $zero, 0x100
    ctx->pc = 0x47bd1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_47bd20:
    // 0x47bd20: 0x2e220101  sltiu       $v0, $s1, 0x101
    ctx->pc = 0x47bd20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
    // 0x47bd24: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x47bd24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bd28: 0x222800b  movn        $s0, $s1, $v0
    ctx->pc = 0x47bd28u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 17));
    // 0x47bd2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x47bd2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bd30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x47bd30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bd34: 0xc10c190  jal         func_430640
    ctx->pc = 0x47BD34u;
    SET_GPR_U32(ctx, 31, 0x47BD3Cu);
    ctx->pc = 0x47BD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47BD34u;
    // 0x47bd38: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x47BD34u, 0x47BD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BD3Cu;
label_47bd3c:
    // 0x47bd3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x47bd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bd40: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x47bd40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bd44: 0xc11fbba  jal         func_47EEE8
    ctx->pc = 0x47BD44u;
    SET_GPR_U32(ctx, 31, 0x47BD4Cu);
    ctx->pc = 0x47BD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47BD44u;
    // 0x47bd48: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47EEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47EEE8u, 0x47BD44u, 0x47BD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BD4Cu;
label_47bd4c:
    // 0x47bd4c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x47BD4Cu;
    {
        const bool branch_taken_0x47bd4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47BD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BD4Cu;
        // 0x47bd50: 0x2308823  subu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47bd4c) {
            ctx->pc = 0x47BD5Cu;
            goto label_47bd5c;
        }
    }
    ctx->pc = 0x47BD54u;
    // 0x47bd54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x47BD54u;
    {
        const bool branch_taken_0x47bd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47BD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BD54u;
        // 0x47bd58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47bd54) {
            ctx->pc = 0x47BD68u;
            goto label_47bd68;
        }
    }
    ctx->pc = 0x47BD5Cu;
label_47bd5c:
    // 0x47bd5c: 0x1620fff0  bnez        $s1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x47BD5Cu;
    {
        const bool branch_taken_0x47bd5c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x47BD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BD5Cu;
        // 0x47bd60: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47bd5c) {
            ctx->pc = 0x47BD20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47bd20;
        }
    }
    ctx->pc = 0x47BD64u;
label_47bd64:
    // 0x47bd64: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x47bd64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_47bd68:
    // 0x47bd68: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x47bd68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x47bd6c: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x47bd6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x47bd70: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x47bd70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x47bd74: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x47bd74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x47bd78: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x47bd78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x47bd7c: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x47bd7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x47bd80: 0x3e00008  jr          $ra
    ctx->pc = 0x47BD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47BD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BD80u;
        // 0x47bd84: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47BD80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47BD88u;
}
