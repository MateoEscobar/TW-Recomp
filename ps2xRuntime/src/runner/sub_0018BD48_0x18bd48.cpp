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

// Function: sub_0018BD48
// Address: 0x18bd48 - 0x18bdd0
void sub_0018BD48_0x18bd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018BD48_0x18bd48");
#endif

    switch (ctx->pc) {
        case 0x18bd8cu: goto label_18bd8c;
        case 0x18bdb0u: goto label_18bdb0;
        default: break;
    }

    ctx->pc = 0x18bd48u;

    // 0x18bd48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18bd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18bd4c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18bd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x18bd50: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x18bd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x18bd54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18bd54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bd58: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18bd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x18bd5c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x18bd5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bd60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18bd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18bd64: 0x138100  sll         $s0, $s3, 4
    ctx->pc = 0x18bd64u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x18bd68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18bd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18bd6c: 0x26220154  addiu       $v0, $s1, 0x154
    ctx->pc = 0x18bd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 340));
    // 0x18bd70: 0x509021  addu        $s2, $v0, $s0
    ctx->pc = 0x18bd70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18bd74: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x18bd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18bd78: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18BD78u;
    {
        const bool branch_taken_0x18bd78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BD78u;
        // 0x18bd7c: 0x24060127  addiu       $a2, $zero, 0x127 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bd78) {
            ctx->pc = 0x18BD90u;
            goto label_18bd90;
        }
    }
    ctx->pc = 0x18BD80u;
    // 0x18bd80: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x18bd80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x18bd84: 0xc138daa  jal         func_4E36A8
    ctx->pc = 0x18BD84u;
    SET_GPR_U32(ctx, 31, 0x18BD8Cu);
    ctx->pc = 0x18BD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BD84u;
    // 0x18bd88: 0x24a52ef0  addiu       $a1, $a1, 0x2EF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E36A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E36A8u, 0x18BD84u, 0x18BD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BD8Cu;
label_18bd8c:
    // 0x18bd8c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x18bd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_18bd90:
    // 0x18bd90: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x18bd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x18bd94: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18bd94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bd98: 0xac40015c  sw          $zero, 0x15C($v0)
    ctx->pc = 0x18bd98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 348), GPR_U32(ctx, 0));
    // 0x18bd9c: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x18BD9Cu;
    {
        const bool branch_taken_0x18bd9c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BD9Cu;
        // 0x18bda0: 0xac600160  sw          $zero, 0x160($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bd9c) {
            ctx->pc = 0x18BDB0u;
            goto label_18bdb0;
        }
    }
    ctx->pc = 0x18BDA4u;
    // 0x18bda4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x18bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x18bda8: 0xc060d8a  jal         func_183628
    ctx->pc = 0x18BDA8u;
    SET_GPR_U32(ctx, 31, 0x18BDB0u);
    ctx->pc = 0x18BDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BDA8u;
    // 0x18bdac: 0x8c4471a8  lw          $a0, 0x71A8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29096)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183628u, 0x18BDA8u, 0x18BDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18BDB0u;
label_18bdb0:
    // 0x18bdb0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x18bdb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18bdb4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18bdb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18bdb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18bdb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18bdbc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x18bdbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18bdc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18bdc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18bdc4: 0x3e00008  jr          $ra
    ctx->pc = 0x18BDC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BDC4u;
        // 0x18bdc8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BDC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BDCCu;
    // 0x18bdcc: 0x0  nop
    ctx->pc = 0x18bdccu;
    // NOP
    ctx->pc = 0x18bdd0u;
}
