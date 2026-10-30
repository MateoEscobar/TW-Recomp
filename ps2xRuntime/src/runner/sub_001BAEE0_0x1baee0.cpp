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

// Function: sub_001BAEE0
// Address: 0x1baee0 - 0x1bafd0
void sub_001BAEE0_0x1baee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BAEE0_0x1baee0");
#endif

    switch (ctx->pc) {
        case 0x1baf20u: goto label_1baf20;
        case 0x1baf4cu: goto label_1baf4c;
        case 0x1baf60u: goto label_1baf60;
        case 0x1baf70u: goto label_1baf70;
        case 0x1baf80u: goto label_1baf80;
        case 0x1baf8cu: goto label_1baf8c;
        case 0x1baf9cu: goto label_1baf9c;
        case 0x1bafacu: goto label_1bafac;
        default: break;
    }

    ctx->pc = 0x1baee0u;

    // 0x1baee0: 0x27bdfda0  addiu       $sp, $sp, -0x260
    ctx->pc = 0x1baee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966688));
    // 0x1baee4: 0x7fb00250  sq          $s0, 0x250($sp)
    ctx->pc = 0x1baee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 16));
    // 0x1baee8: 0x7fb10240  sq          $s1, 0x240($sp)
    ctx->pc = 0x1baee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 17));
    // 0x1baeec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1baeecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baef0: 0x7fb20230  sq          $s2, 0x230($sp)
    ctx->pc = 0x1baef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 18));
    // 0x1baef4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1baef4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baef8: 0x7fb30220  sq          $s3, 0x220($sp)
    ctx->pc = 0x1baef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 19));
    // 0x1baefc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1baefcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf00: 0x7fb40210  sq          $s4, 0x210($sp)
    ctx->pc = 0x1baf00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 20));
    // 0x1baf04: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1baf04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf08: 0xffbf0200  sd          $ra, 0x200($sp)
    ctx->pc = 0x1baf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 31));
    // 0x1baf0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1baf0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf10: 0x8e2201a4  lw          $v0, 0x1A4($s1)
    ctx->pc = 0x1baf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
    // 0x1baf14: 0x262900a  movz        $s2, $s3, $v0
    ctx->pc = 0x1baf14u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 19));
    // 0x1baf18: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1BAF18u;
    {
        const bool branch_taken_0x1baf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAF18u;
        // 0x1baf1c: 0x3c140055  lui         $s4, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf18) {
            ctx->pc = 0x1BAF44u;
            goto label_1baf44;
        }
    }
    ctx->pc = 0x1BAF20u;
label_1baf20:
    // 0x1baf20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1baf20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1baf24: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BAF24u;
    {
        const bool branch_taken_0x1baf24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1BAF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAF24u;
        // 0x1baf28: 0x24840005  addiu       $a0, $a0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf24) {
            ctx->pc = 0x1BAF34u;
            goto label_1baf34;
        }
    }
    ctx->pc = 0x1BAF2Cu;
    // 0x1baf2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BAF2Cu;
    {
        const bool branch_taken_0x1baf2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAF2Cu;
        // 0x1baf30: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf2c) {
            ctx->pc = 0x1BAF44u;
            goto label_1baf44;
        }
    }
    ctx->pc = 0x1BAF34u;
label_1baf34:
    // 0x1baf34: 0x8e2301a8  lw          $v1, 0x1A8($s1)
    ctx->pc = 0x1baf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
    // 0x1baf38: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x1baf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1baf3c: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1BAF3Cu;
    {
        const bool branch_taken_0x1baf3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1baf3c) {
            ctx->pc = 0x1BAF40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BAF3Cu;
            // 0x1baf40: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BAF44u;
            goto label_1baf44;
        }
    }
    ctx->pc = 0x1BAF44u;
label_1baf44:
    // 0x1baf44: 0xc10d74c  jal         func_435D30
    ctx->pc = 0x1BAF44u;
    SET_GPR_U32(ctx, 31, 0x1BAF4Cu);
    ctx->pc = 0x1BAF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAF44u;
    // 0x1baf48: 0x26854af8  addiu       $a1, $s4, 0x4AF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 19192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x1BAF44u, 0x1BAF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAF4Cu;
label_1baf4c:
    // 0x1baf4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1baf4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf50: 0x5480fff3  bnel        $a0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x1BAF50u;
    {
        const bool branch_taken_0x1baf50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1baf50) {
            ctx->pc = 0x1BAF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BAF50u;
            // 0x1baf54: 0x8e2201a4  lw          $v0, 0x1A4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BAF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1baf20;
        }
    }
    ctx->pc = 0x1BAF58u;
    // 0x1baf58: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1BAF58u;
    SET_GPR_U32(ctx, 31, 0x1BAF60u);
    ctx->pc = 0x1BAF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAF58u;
    // 0x1baf5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1BAF58u, 0x1BAF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAF60u;
label_1baf60:
    // 0x1baf60: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x1baf60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1baf64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1baf64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf68: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1BAF68u;
    SET_GPR_U32(ctx, 31, 0x1BAF70u);
    ctx->pc = 0x1BAF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAF68u;
    // 0x1baf6c: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1BAF68u, 0x1BAF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAF70u;
label_1baf70:
    // 0x1baf70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1baf70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1baf74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf78: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1BAF78u;
    SET_GPR_U32(ctx, 31, 0x1BAF80u);
    ctx->pc = 0x1BAF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAF78u;
    // 0x1baf7c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1BAF78u, 0x1BAF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAF80u;
label_1baf80:
    // 0x1baf80: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x1baf80u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1baf84: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1BAF84u;
    SET_GPR_U32(ctx, 31, 0x1BAF8Cu);
    ctx->pc = 0x1BAF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAF84u;
    // 0x1baf88: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1BAF84u, 0x1BAF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAF8Cu;
label_1baf8c:
    // 0x1baf8c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1baf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1baf90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1baf90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf94: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1BAF94u;
    SET_GPR_U32(ctx, 31, 0x1BAF9Cu);
    ctx->pc = 0x1BAF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAF94u;
    // 0x1baf98: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1BAF94u, 0x1BAF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAF9Cu;
label_1baf9c:
    // 0x1baf9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1baf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bafa0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1bafa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bafa4: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1BAFA4u;
    SET_GPR_U32(ctx, 31, 0x1BAFACu);
    ctx->pc = 0x1BAFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAFA4u;
    // 0x1bafa8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1BAFA4u, 0x1BAFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAFACu;
label_1bafac:
    // 0x1bafac: 0x7bb00250  lq          $s0, 0x250($sp)
    ctx->pc = 0x1bafacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1bafb0: 0x7bb10240  lq          $s1, 0x240($sp)
    ctx->pc = 0x1bafb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1bafb4: 0x7bb20230  lq          $s2, 0x230($sp)
    ctx->pc = 0x1bafb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1bafb8: 0x7bb30220  lq          $s3, 0x220($sp)
    ctx->pc = 0x1bafb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1bafbc: 0x7bb40210  lq          $s4, 0x210($sp)
    ctx->pc = 0x1bafbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1bafc0: 0xdfbf0200  ld          $ra, 0x200($sp)
    ctx->pc = 0x1bafc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1bafc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BAFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BAFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAFC4u;
        // 0x1bafc8: 0x27bd0260  addiu       $sp, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BAFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BAFCCu;
    // 0x1bafcc: 0x0  nop
    ctx->pc = 0x1bafccu;
    // NOP
    ctx->pc = 0x1bafd0u;
}
