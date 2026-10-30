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

// Function: sub_002A1AA8
// Address: 0x2a1aa8 - 0x2a1b50
void sub_002A1AA8_0x2a1aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1AA8_0x2a1aa8");
#endif

    switch (ctx->pc) {
        case 0x2a1ae4u: goto label_2a1ae4;
        case 0x2a1aecu: goto label_2a1aec;
        case 0x2a1af4u: goto label_2a1af4;
        case 0x2a1b1cu: goto label_2a1b1c;
        case 0x2a1b28u: goto label_2a1b28;
        default: break;
    }

    ctx->pc = 0x2a1aa8u;

    // 0x2a1aa8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2a1aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2a1aac: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2a1aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2a1ab0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2a1ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2a1ab4: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x2a1ab4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2a1ab8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2a1ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2a1abc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2a1abcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1ac0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2a1ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2a1ac4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2a1ac4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1ac8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2a1ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2a1acc: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2a1accu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1ad0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2a1ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2a1ad4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2a1ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2a1ad8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a1ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a1adc: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2A1ADCu;
    SET_GPR_U32(ctx, 31, 0x2A1AE4u);
    ctx->pc = 0x2A1AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1ADCu;
    // 0x2a1ae0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A1ADCu, 0x2A1AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1AE4u;
label_2a1ae4:
    // 0x2a1ae4: 0xc087502  jal         func_21D408
    ctx->pc = 0x2A1AE4u;
    SET_GPR_U32(ctx, 31, 0x2A1AECu);
    ctx->pc = 0x2A1AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1AE4u;
    // 0x2a1ae8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2A1AE4u, 0x2A1AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1AECu;
label_2a1aec:
    // 0x2a1aec: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2A1AECu;
    SET_GPR_U32(ctx, 31, 0x2A1AF4u);
    ctx->pc = 0x2A1AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1AECu;
    // 0x2a1af0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2A1AECu, 0x2A1AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1AF4u;
label_2a1af4:
    // 0x2a1af4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a1af4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1af8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A1AF8u;
    {
        const bool branch_taken_0x2a1af8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1AF8u;
        // 0x2a1afc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1af8) {
            ctx->pc = 0x2A1B1Cu;
            goto label_2a1b1c;
        }
    }
    ctx->pc = 0x2A1B00u;
    // 0x2a1b00: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2a1b00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1b04: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2a1b04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1b08: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2a1b08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1b10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a1b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1b14: 0xc0a86d4  jal         func_2A1B50
    ctx->pc = 0x2A1B14u;
    SET_GPR_U32(ctx, 31, 0x2A1B1Cu);
    ctx->pc = 0x2A1B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1B14u;
    // 0x2a1b18: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1B50u, 0x2A1B14u, 0x2A1B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1B1Cu;
label_2a1b1c:
    // 0x2a1b1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a1b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1b20: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2A1B20u;
    SET_GPR_U32(ctx, 31, 0x2A1B28u);
    ctx->pc = 0x2A1B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1B20u;
    // 0x2a1b24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2A1B20u, 0x2A1B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1B28u;
label_2a1b28:
    // 0x2a1b28: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2a1b28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a1b2c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2a1b2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a1b30: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2a1b30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a1b34: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2a1b34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a1b38: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2a1b38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a1b3c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2a1b3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a1b40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a1b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1b44: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1B44u;
        // 0x2a1b48: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1B4Cu;
    // 0x2a1b4c: 0x0  nop
    ctx->pc = 0x2a1b4cu;
    // NOP
    ctx->pc = 0x2a1b50u;
}
