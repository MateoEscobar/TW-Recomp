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

// Function: sub_002C6C88
// Address: 0x2c6c88 - 0x2c6d90
void sub_002C6C88_0x2c6c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6C88_0x2c6c88");
#endif

    switch (ctx->pc) {
        case 0x2c6cccu: goto label_2c6ccc;
        case 0x2c6cd4u: goto label_2c6cd4;
        case 0x2c6ce8u: goto label_2c6ce8;
        case 0x2c6d34u: goto label_2c6d34;
        case 0x2c6d5cu: goto label_2c6d5c;
        case 0x2c6d68u: goto label_2c6d68;
        default: break;
    }

    ctx->pc = 0x2c6c88u;

    // 0x2c6c88: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2c6c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2c6c8c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2c6c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2c6c90: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2c6c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2c6c94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c6c94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6c98: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2c6c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2c6c9c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2c6c9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6ca0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2c6ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2c6ca4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2c6ca4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6ca8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2c6ca8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2c6cac: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2c6cacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6cb0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2c6cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2c6cb4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2c6cb4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2c6cb8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2c6cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2c6cbc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2c6cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2c6cc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c6cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c6cc4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2C6CC4u;
    SET_GPR_U32(ctx, 31, 0x2C6CCCu);
    ctx->pc = 0x2C6CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6CC4u;
    // 0x2c6cc8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2C6CC4u, 0x2C6CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6CCCu;
label_2c6ccc:
    // 0x2c6ccc: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2C6CCCu;
    SET_GPR_U32(ctx, 31, 0x2C6CD4u);
    ctx->pc = 0x2C6CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6CCCu;
    // 0x2c6cd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2C6CCCu, 0x2C6CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6CD4u;
label_2c6cd4:
    // 0x2c6cd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c6cd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6cd8: 0x52000024  beql        $s0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C6CD8u;
    {
        const bool branch_taken_0x2c6cd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6cd8) {
            ctx->pc = 0x2C6CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6CD8u;
            // 0x2c6cdc: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6D6Cu;
            goto label_2c6d6c;
        }
    }
    ctx->pc = 0x2C6CE0u;
    // 0x2c6ce0: 0xc087502  jal         func_21D408
    ctx->pc = 0x2C6CE0u;
    SET_GPR_U32(ctx, 31, 0x2C6CE8u);
    ctx->pc = 0x2C6CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6CE0u;
    // 0x2c6ce4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C6CE0u, 0x2C6CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6CE8u;
label_2c6ce8:
    // 0x2c6ce8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c6ce8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6cec: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x2c6cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x2c6cf0: 0x2444fe56  addiu       $a0, $v0, -0x1AA
    ctx->pc = 0x2c6cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966870));
    // 0x2c6cf4: 0x2c83000f  sltiu       $v1, $a0, 0xF
    ctx->pc = 0x2c6cf4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x2c6cf8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2C6CF8u;
    {
        const bool branch_taken_0x2c6cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6CF8u;
        // 0x2c6cfc: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6cf8) {
            ctx->pc = 0x2C6D2Cu;
            goto label_2c6d2c;
        }
    }
    ctx->pc = 0x2C6D00u;
    // 0x2c6d00: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2c6d00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c6d04: 0x24425600  addiu       $v0, $v0, 0x5600
    ctx->pc = 0x2c6d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22016));
    // 0x2c6d08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c6d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c6d0c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c6d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c6d10: 0x800008  jr          $a0
    ctx->pc = 0x2C6D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C6D18u: goto label_2c6d18;
            case 0x2C6D20u: goto label_2c6d20;
            case 0x2C6D28u: goto label_2c6d28;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6D10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C6D18u;
label_2c6d18:
    // 0x2c6d18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C6D18u;
    {
        const bool branch_taken_0x2c6d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6D18u;
        // 0x2c6d1c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6d18) {
            ctx->pc = 0x2C6D2Cu;
            goto label_2c6d2c;
        }
    }
    ctx->pc = 0x2C6D20u;
label_2c6d20:
    // 0x2c6d20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C6D20u;
    {
        const bool branch_taken_0x2c6d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6D20u;
        // 0x2c6d24: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6d20) {
            ctx->pc = 0x2C6D2Cu;
            goto label_2c6d2c;
        }
    }
    ctx->pc = 0x2C6D28u;
label_2c6d28:
    // 0x2c6d28: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2c6d28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c6d2c:
    // 0x2c6d2c: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2C6D2Cu;
    SET_GPR_U32(ctx, 31, 0x2C6D34u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C6D2Cu, 0x2C6D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6D34u;
label_2c6d34:
    // 0x2c6d34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c6d34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6d38: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C6D38u;
    {
        const bool branch_taken_0x2c6d38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6D38u;
        // 0x2c6d3c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6d38) {
            ctx->pc = 0x2C6D5Cu;
            goto label_2c6d5c;
        }
    }
    ctx->pc = 0x2C6D40u;
    // 0x2c6d40: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c6d40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c6d44: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2c6d44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6d48: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2c6d48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6d4c: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2c6d4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c6d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6d54: 0xc0b1b64  jal         func_2C6D90
    ctx->pc = 0x2C6D54u;
    SET_GPR_U32(ctx, 31, 0x2C6D5Cu);
    ctx->pc = 0x2C6D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6D54u;
    // 0x2c6d58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6D90u, 0x2C6D54u, 0x2C6D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6D5Cu;
label_2c6d5c:
    // 0x2c6d5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c6d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6d60: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2C6D60u;
    SET_GPR_U32(ctx, 31, 0x2C6D68u);
    ctx->pc = 0x2C6D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6D60u;
    // 0x2c6d64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2C6D60u, 0x2C6D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6D68u;
label_2c6d68:
    // 0x2c6d68: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2c6d68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2c6d6c:
    // 0x2c6d6c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2c6d6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c6d70: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2c6d70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c6d74: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2c6d74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c6d78: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2c6d78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c6d7c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2c6d7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c6d80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c6d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c6d84: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2c6d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c6d88: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6D88u;
        // 0x2c6d8c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6D90u;
}
