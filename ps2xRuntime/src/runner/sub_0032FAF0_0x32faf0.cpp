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

// Function: sub_0032FAF0
// Address: 0x32faf0 - 0x32fc18
void sub_0032FAF0_0x32faf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032FAF0_0x32faf0");
#endif

    switch (ctx->pc) {
        case 0x32fb28u: goto label_32fb28;
        case 0x32fb58u: goto label_32fb58;
        case 0x32fb70u: goto label_32fb70;
        case 0x32fb94u: goto label_32fb94;
        case 0x32fbc0u: goto label_32fbc0;
        case 0x32fbecu: goto label_32fbec;
        default: break;
    }

    ctx->pc = 0x32faf0u;

    // 0x32faf0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x32faf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x32faf4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x32faf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x32faf8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x32faf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x32fafc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32fafcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fb00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32fb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32fb04: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x32fb04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fb08: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x32fb08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fb0c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x32fb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x32fb10: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x32fb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x32fb14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32fb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fb18: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x32fb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x32fb1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32fb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32fb20: 0xc0cbe56  jal         func_32F958
    ctx->pc = 0x32FB20u;
    SET_GPR_U32(ctx, 31, 0x32FB28u);
    ctx->pc = 0x32FB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FB20u;
    // 0x32fb24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F958u, 0x32FB20u, 0x32FB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FB28u;
label_32fb28:
    // 0x32fb28: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x32fb28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fb2c: 0x8e640034  lw          $a0, 0x34($s3)
    ctx->pc = 0x32fb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x32fb30: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x32fb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x32fb34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32fb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x32fb38: 0x282a824  and         $s5, $s4, $v0
    ctx->pc = 0x32fb38u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x32fb3c: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x32fb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x32fb40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32fb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32fb44: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x32fb44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32fb48: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x32FB48u;
    {
        const bool branch_taken_0x32fb48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FB48u;
        // 0x32fb4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fb48) {
            ctx->pc = 0x32FB88u;
            goto label_32fb88;
        }
    }
    ctx->pc = 0x32FB50u;
    // 0x32fb50: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x32fb50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x32fb54: 0x0  nop
    ctx->pc = 0x32fb54u;
    // NOP
label_32fb58:
    // 0x32fb58: 0x54520008  bnel        $v0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x32FB58u;
    {
        const bool branch_taken_0x32fb58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x32fb58) {
            ctx->pc = 0x32FB5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32FB58u;
            // 0x32fb5c: 0x8e31000c  lw          $s1, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32FB7Cu;
            goto label_32fb7c;
        }
    }
    ctx->pc = 0x32FB60u;
    // 0x32fb60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32fb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fb64: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x32fb64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x32fb68: 0xc10c16b  jal         func_4305AC
    ctx->pc = 0x32FB68u;
    SET_GPR_U32(ctx, 31, 0x32FB70u);
    ctx->pc = 0x32FB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FB68u;
    // 0x32fb6c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4305ACu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4305ACu, 0x32FB68u, 0x32FB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FB70u;
label_32fb70:
    // 0x32fb70: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x32FB70u;
    {
        const bool branch_taken_0x32fb70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FB70u;
        // 0x32fb74: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fb70) {
            ctx->pc = 0x32FBF0u;
            goto label_32fbf0;
        }
    }
    ctx->pc = 0x32FB78u;
    // 0x32fb78: 0x8e31000c  lw          $s1, 0xC($s1)
    ctx->pc = 0x32fb78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_32fb7c:
    // 0x32fb7c: 0x5620fff6  bnel        $s1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x32FB7Cu;
    {
        const bool branch_taken_0x32fb7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x32fb7c) {
            ctx->pc = 0x32FB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32FB7Cu;
            // 0x32fb80: 0x96220008  lhu         $v0, 0x8($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32FB58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32fb58;
        }
    }
    ctx->pc = 0x32FB84u;
    // 0x32fb84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x32fb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32fb88:
    // 0x32fb88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32fb88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fb8c: 0xc0cb1d6  jal         func_32C758
    ctx->pc = 0x32FB8Cu;
    SET_GPR_U32(ctx, 31, 0x32FB94u);
    ctx->pc = 0x32FB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FB8Cu;
    // 0x32fb90: 0x26460011  addiu       $a2, $s2, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C758u, 0x32FB8Cu, 0x32FB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FB94u;
label_32fb94:
    // 0x32fb94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32fb94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fb98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32fb98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fb9c: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x32fb9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x32fba0: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x32fba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
    // 0x32fba4: 0xa620000a  sh          $zero, 0xA($s1)
    ctx->pc = 0x32fba4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x32fba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32fba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fbac: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x32fbacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x32fbb0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x32fbb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fbb4: 0xa6320008  sh          $s2, 0x8($s1)
    ctx->pc = 0x32fbb4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 18));
    // 0x32fbb8: 0xc10c190  jal         func_430640
    ctx->pc = 0x32FBB8u;
    SET_GPR_U32(ctx, 31, 0x32FBC0u);
    ctx->pc = 0x32FBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FBB8u;
    // 0x32fbbc: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x32FBB8u, 0x32FBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FBC0u;
label_32fbc0:
    // 0x32fbc0: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x32fbc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x32fbc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x32fbc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fbc8: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x32fbc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x32fbcc: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x32fbccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fbd0: 0x2485002c  addiu       $a1, $a0, 0x2C
    ctx->pc = 0x32fbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
    // 0x32fbd4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x32fbd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fbd8: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x32fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x32fbdc: 0x24420011  addiu       $v0, $v0, 0x11
    ctx->pc = 0x32fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17));
    // 0x32fbe0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x32fbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x32fbe4: 0xc0cbeb2  jal         func_32FAC8
    ctx->pc = 0x32FBE4u;
    SET_GPR_U32(ctx, 31, 0x32FBECu);
    ctx->pc = 0x32FBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FBE4u;
    // 0x32fbe8: 0xae620060  sw          $v0, 0x60($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FAC8u, 0x32FBE4u, 0x32FBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FBECu;
label_32fbec:
    // 0x32fbec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x32fbecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32fbf0:
    // 0x32fbf0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x32fbf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32fbf4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x32fbf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32fbf8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x32fbf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32fbfc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32fbfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32fc00: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x32fc00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32fc04: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x32fc04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32fc08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32fc08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32fc0c: 0x3e00008  jr          $ra
    ctx->pc = 0x32FC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FC0Cu;
        // 0x32fc10: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FC14u;
    // 0x32fc14: 0x0  nop
    ctx->pc = 0x32fc14u;
    // NOP
    ctx->pc = 0x32fc18u;
}
