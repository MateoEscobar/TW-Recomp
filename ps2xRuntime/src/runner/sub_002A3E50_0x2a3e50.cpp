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

// Function: sub_002A3E50
// Address: 0x2a3e50 - 0x2a3f50
void sub_002A3E50_0x2a3e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3E50_0x2a3e50");
#endif

    switch (ctx->pc) {
        case 0x2a3eb4u: goto label_2a3eb4;
        case 0x2a3ebcu: goto label_2a3ebc;
        case 0x2a3eccu: goto label_2a3ecc;
        case 0x2a3edcu: goto label_2a3edc;
        case 0x2a3f14u: goto label_2a3f14;
        case 0x2a3f20u: goto label_2a3f20;
        default: break;
    }

    ctx->pc = 0x2a3e50u;

    // 0x2a3e50: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2a3e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2a3e54: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2a3e54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2a3e58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a3e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2a3e5c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2a3e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x2a3e60: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x2a3e60u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x2a3e64: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x2a3e64u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x2a3e68: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2a3e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x2a3e6c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a3e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a3e70: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2a3e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x2a3e74: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x2a3e74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3e78: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2a3e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x2a3e7c: 0x59c03  sra         $s3, $a1, 16
    ctx->pc = 0x2a3e7cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 5), 16));
    // 0x2a3e80: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2a3e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2a3e84: 0x6a403  sra         $s4, $a2, 16
    ctx->pc = 0x2a3e84u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2a3e88: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x2a3e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x2a3e8c: 0x7ac03  sra         $s5, $a3, 16
    ctx->pc = 0x2a3e8cu;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 7), 16));
    // 0x2a3e90: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x2a3e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x2a3e94: 0x8b403  sra         $s6, $t0, 16
    ctx->pc = 0x2a3e94u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 8), 16));
    // 0x2a3e98: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x2a3e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x2a3e9c: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x2a3e9cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3ea0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2a3ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x2a3ea4: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2a3ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x2a3ea8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a3ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a3eac: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2A3EACu;
    SET_GPR_U32(ctx, 31, 0x2A3EB4u);
    ctx->pc = 0x2A3EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3EACu;
    // 0x2a3eb0: 0x140f02d  daddu       $fp, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2A3EACu, 0x2A3EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3EB4u;
label_2a3eb4:
    // 0x2a3eb4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2A3EB4u;
    SET_GPR_U32(ctx, 31, 0x2A3EBCu);
    ctx->pc = 0x2A3EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3EB4u;
    // 0x2a3eb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2A3EB4u, 0x2A3EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3EBCu;
label_2a3ebc:
    // 0x2a3ebc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2A3EBCu;
    {
        const bool branch_taken_0x2a3ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3EBCu;
        // 0x2a3ec0: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3ebc) {
            ctx->pc = 0x2A3F24u;
            goto label_2a3f24;
        }
    }
    ctx->pc = 0x2A3EC4u;
    // 0x2a3ec4: 0xc087502  jal         func_21D408
    ctx->pc = 0x2A3EC4u;
    SET_GPR_U32(ctx, 31, 0x2A3ECCu);
    ctx->pc = 0x2A3EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3EC4u;
    // 0x2a3ec8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2A3EC4u, 0x2A3ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3ECCu;
label_2a3ecc:
    // 0x2a3ecc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a3eccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3ed0: 0xae00021c  sw          $zero, 0x21C($s0)
    ctx->pc = 0x2a3ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 0));
    // 0x2a3ed4: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2A3ED4u;
    SET_GPR_U32(ctx, 31, 0x2A3EDCu);
    ctx->pc = 0x2A3ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3ED4u;
    // 0x2a3ed8: 0xae000220  sw          $zero, 0x220($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2A3ED4u, 0x2A3EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3EDCu;
label_2a3edc:
    // 0x2a3edc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a3edcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3ee0: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x2A3EE0u;
    {
        const bool branch_taken_0x2a3ee0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3EE0u;
        // 0x2a3ee4: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3ee0) {
            ctx->pc = 0x2A3F14u;
            goto label_2a3f14;
        }
    }
    ctx->pc = 0x2A3EE8u;
    // 0x2a3ee8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2a3ee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3eec: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x2a3eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x2a3ef0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2a3ef0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3ef4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2a3ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2a3ef8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2a3ef8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3efc: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x2a3efcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3f00: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x2a3f00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3f04: 0x3c0582d  daddu       $t3, $fp, $zero
    ctx->pc = 0x2a3f04u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3f08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a3f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3f0c: 0xc0a8fd4  jal         func_2A3F50
    ctx->pc = 0x2A3F0Cu;
    SET_GPR_U32(ctx, 31, 0x2A3F14u);
    ctx->pc = 0x2A3F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3F0Cu;
    // 0x2a3f10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3F50u, 0x2A3F0Cu, 0x2A3F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3F14u;
label_2a3f14:
    // 0x2a3f14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3f18: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2A3F18u;
    SET_GPR_U32(ctx, 31, 0x2A3F20u);
    ctx->pc = 0x2A3F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3F18u;
    // 0x2a3f1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2A3F18u, 0x2A3F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3F20u;
label_2a3f20:
    // 0x2a3f20: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2a3f20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2a3f24:
    // 0x2a3f24: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2a3f24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a3f28: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2a3f28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a3f2c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2a3f2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a3f30: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2a3f30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a3f34: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2a3f34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a3f38: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x2a3f38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a3f3c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x2a3f3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a3f40: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x2a3f40u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a3f44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a3f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3f48: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3F48u;
        // 0x2a3f4c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3F50u;
}
