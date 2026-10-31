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

// Function: sub_002BAF20
// Address: 0x2baf20 - 0x2bb010
void sub_002BAF20_0x2baf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BAF20_0x2baf20");
#endif

    switch (ctx->pc) {
        case 0x2baf4cu: goto label_2baf4c;
        case 0x2baf70u: goto label_2baf70;
        case 0x2baf90u: goto label_2baf90;
        case 0x2bafb0u: goto label_2bafb0;
        case 0x2bafc8u: goto label_2bafc8;
        case 0x2bafe4u: goto label_2bafe4;
        case 0x2baff0u: goto label_2baff0;
        default: break;
    }

    ctx->pc = 0x2baf20u;

    // 0x2baf20: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2baf20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2baf24: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2baf24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2baf28: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2baf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2baf2c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2baf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2baf30: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2baf30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baf34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2baf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2baf38: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2baf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2baf3c: 0x24500164  addiu       $s0, $v0, 0x164
    ctx->pc = 0x2baf3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 356));
    // 0x2baf40: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2baf40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2baf44: 0xc137832  jal         func_4DE0C8
    ctx->pc = 0x2BAF44u;
    SET_GPR_U32(ctx, 31, 0x2BAF4Cu);
    ctx->pc = 0x2BAF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAF44u;
    // 0x2baf48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x2BAF44u, 0x2BAF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAF4Cu;
label_2baf4c:
    // 0x2baf4c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2BAF4Cu;
    {
        const bool branch_taken_0x2baf4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BAF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF4Cu;
        // 0x2baf50: 0x3a0102d  daddu       $v0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baf4c) {
            ctx->pc = 0x2BAF78u;
            goto label_2baf78;
        }
    }
    ctx->pc = 0x2BAF54u;
    // 0x2baf54: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x2baf54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x2baf58: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2baf58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x2baf5c: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2baf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
    // 0x2baf60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2baf60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baf64: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2baf64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2baf68: 0xc13b748  jal         func_4EDD20
    ctx->pc = 0x2BAF68u;
    SET_GPR_U32(ctx, 31, 0x2BAF70u);
    ctx->pc = 0x2BAF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAF68u;
    // 0x2baf6c: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDD20u, 0x2BAF68u, 0x2BAF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAF70u;
label_2baf70:
    // 0x2baf70: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2BAF70u;
    {
        const bool branch_taken_0x2baf70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF70u;
        // 0x2baf74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baf70) {
            ctx->pc = 0x2BAFE8u;
            goto label_2bafe8;
        }
    }
    ctx->pc = 0x2BAF78u;
label_2baf78:
    // 0x2baf78: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2baf78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2baf7c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2baf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2baf80: 0x26300090  addiu       $s0, $s1, 0x90
    ctx->pc = 0x2baf80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x2baf84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2baf84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2baf88: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2baf88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2baf8c: 0x0  nop
    ctx->pc = 0x2baf8cu;
    // NOP
label_2baf90:
    // 0x2baf90: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2baf90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2baf94: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2baf94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2baf98: 0x0  nop
    ctx->pc = 0x2baf98u;
    // NOP
    // 0x2baf9c: 0x0  nop
    ctx->pc = 0x2baf9cu;
    // NOP
    // 0x2bafa0: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2BAFA0u;
    {
        const bool branch_taken_0x2bafa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2BAFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAFA0u;
        // 0x2bafa4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bafa0) {
            ctx->pc = 0x2BAF90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2baf90;
        }
    }
    ctx->pc = 0x2BAFA8u;
    // 0x2bafa8: 0xc0a2fc0  jal         func_28BF00
    ctx->pc = 0x2BAFA8u;
    SET_GPR_U32(ctx, 31, 0x2BAFB0u);
    ctx->pc = 0x2BAFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAFA8u;
    // 0x2bafac: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x2BAFA8u, 0x2BAFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAFB0u;
label_2bafb0:
    // 0x2bafb0: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x2bafb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x2bafb4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bafb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bafb8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2bafb8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2bafbc: 0x24c6c0d8  addiu       $a2, $a2, -0x3F28
    ctx->pc = 0x2bafbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951128));
    // 0x2bafc0: 0xc0a71fa  jal         func_29C7E8
    ctx->pc = 0x2BAFC0u;
    SET_GPR_U32(ctx, 31, 0x2BAFC8u);
    ctx->pc = 0x2BAFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAFC0u;
    // 0x2bafc4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C7E8u, 0x2BAFC0u, 0x2BAFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAFC8u;
label_2bafc8:
    // 0x2bafc8: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x2bafc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2bafcc: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2bafccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x2bafd0: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2bafd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
    // 0x2bafd4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bafd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bafd8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2bafd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2bafdc: 0xc13b748  jal         func_4EDD20
    ctx->pc = 0x2BAFDCu;
    SET_GPR_U32(ctx, 31, 0x2BAFE4u);
    ctx->pc = 0x2BAFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAFDCu;
    // 0x2bafe0: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDD20u, 0x2BAFDCu, 0x2BAFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAFE4u;
label_2bafe4:
    // 0x2bafe4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bafe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2bafe8:
    // 0x2bafe8: 0xc137826  jal         func_4DE098
    ctx->pc = 0x2BAFE8u;
    SET_GPR_U32(ctx, 31, 0x2BAFF0u);
    ctx->pc = 0x2BAFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAFE8u;
    // 0x2bafec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x2BAFE8u, 0x2BAFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAFF0u;
label_2baff0:
    // 0x2baff0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2baff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2baff4: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x2baff4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x2baff8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2baff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2baffc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2baffcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bb000: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2bb000u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bb004: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2bb004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bb008: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB008u;
        // 0x2bb00c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB010u;
}
