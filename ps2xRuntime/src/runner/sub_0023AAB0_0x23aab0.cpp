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

// Function: sub_0023AAB0
// Address: 0x23aab0 - 0x23ab80
void sub_0023AAB0_0x23aab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AAB0_0x23aab0");
#endif

    switch (ctx->pc) {
        case 0x23aab0u: goto label_23aab0;
        case 0x23aab4u: goto label_23aab4;
        case 0x23aab8u: goto label_23aab8;
        case 0x23aabcu: goto label_23aabc;
        case 0x23aac0u: goto label_23aac0;
        case 0x23aac4u: goto label_23aac4;
        case 0x23aac8u: goto label_23aac8;
        case 0x23aaccu: goto label_23aacc;
        case 0x23aad0u: goto label_23aad0;
        case 0x23aad4u: goto label_23aad4;
        case 0x23aad8u: goto label_23aad8;
        case 0x23aadcu: goto label_23aadc;
        case 0x23aae0u: goto label_23aae0;
        case 0x23aae4u: goto label_23aae4;
        case 0x23aae8u: goto label_23aae8;
        case 0x23aaecu: goto label_23aaec;
        case 0x23aaf0u: goto label_23aaf0;
        case 0x23aaf4u: goto label_23aaf4;
        case 0x23aaf8u: goto label_23aaf8;
        case 0x23aafcu: goto label_23aafc;
        case 0x23ab00u: goto label_23ab00;
        case 0x23ab04u: goto label_23ab04;
        case 0x23ab08u: goto label_23ab08;
        case 0x23ab0cu: goto label_23ab0c;
        case 0x23ab10u: goto label_23ab10;
        case 0x23ab14u: goto label_23ab14;
        case 0x23ab18u: goto label_23ab18;
        case 0x23ab1cu: goto label_23ab1c;
        case 0x23ab20u: goto label_23ab20;
        case 0x23ab24u: goto label_23ab24;
        case 0x23ab28u: goto label_23ab28;
        case 0x23ab2cu: goto label_23ab2c;
        case 0x23ab30u: goto label_23ab30;
        case 0x23ab34u: goto label_23ab34;
        case 0x23ab38u: goto label_23ab38;
        case 0x23ab3cu: goto label_23ab3c;
        case 0x23ab40u: goto label_23ab40;
        case 0x23ab44u: goto label_23ab44;
        case 0x23ab48u: goto label_23ab48;
        case 0x23ab4cu: goto label_23ab4c;
        case 0x23ab50u: goto label_23ab50;
        case 0x23ab54u: goto label_23ab54;
        case 0x23ab58u: goto label_23ab58;
        case 0x23ab5cu: goto label_23ab5c;
        case 0x23ab60u: goto label_23ab60;
        case 0x23ab64u: goto label_23ab64;
        case 0x23ab68u: goto label_23ab68;
        case 0x23ab6cu: goto label_23ab6c;
        case 0x23ab70u: goto label_23ab70;
        case 0x23ab74u: goto label_23ab74;
        case 0x23ab78u: goto label_23ab78;
        case 0x23ab7cu: goto label_23ab7c;
        default: break;
    }

    ctx->pc = 0x23aab0u;

label_23aab0:
    // 0x23aab0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x23aab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_23aab4:
    // 0x23aab4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23aab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_23aab8:
    // 0x23aab8: 0x24426710  addiu       $v0, $v0, 0x6710
    ctx->pc = 0x23aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26384));
label_23aabc:
    // 0x23aabc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x23aabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_23aac0:
    // 0x23aac0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x23aac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_23aac4:
    // 0x23aac4: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x23aac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_23aac8:
    // 0x23aac8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x23aac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_23aacc:
    // 0x23aacc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23aaccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23aad0:
    // 0x23aad0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x23aad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_23aad4:
    // 0x23aad4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23aad4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23aad8:
    // 0x23aad8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x23aad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_23aadc:
    // 0x23aadc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23aadcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23aae0:
    // 0x23aae0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x23aae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_23aae4:
    // 0x23aae4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x23aae4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23aae8:
    // 0x23aae8: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x23aae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_23aaec:
    // 0x23aaec: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x23aaecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23aaf0:
    // 0x23aaf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23aaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23aaf4:
    // 0x23aaf4: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x23aaf4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
label_23aaf8:
    // 0x23aaf8: 0xc0e409a  jal         func_390268
label_23aafc:
    if (ctx->pc == 0x23AAFCu) {
        ctx->pc = 0x23AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AAF8u;
        // 0x23aafc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AB00u;
        goto label_23ab00;
    }
    ctx->pc = 0x23AAF8u;
    SET_GPR_U32(ctx, 31, 0x23AB00u);
    ctx->pc = 0x23AAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AAF8u;
    // 0x23aafc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x23AAF8u, 0x23AB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AB00u;
label_23ab00:
    // 0x23ab00: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_23ab04:
    if (ctx->pc == 0x23AB04u) {
        ctx->pc = 0x23AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB00u;
        // 0x23ab04: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AB08u;
        goto label_23ab08;
    }
    ctx->pc = 0x23AB00u;
    {
        const bool branch_taken_0x23ab00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB00u;
        // 0x23ab04: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ab00) {
            ctx->pc = 0x23AB44u;
            goto label_23ab44;
        }
    }
    ctx->pc = 0x23AB08u;
label_23ab08:
    // 0x23ab08: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x23ab08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23ab0c:
    // 0x23ab0c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_23ab10:
    if (ctx->pc == 0x23AB10u) {
        ctx->pc = 0x23AB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB0Cu;
        // 0x23ab10: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AB14u;
        goto label_23ab14;
    }
    ctx->pc = 0x23AB0Cu;
    {
        const bool branch_taken_0x23ab0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ab0c) {
            ctx->pc = 0x23AB10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AB0Cu;
            // 0x23ab10: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AB48u;
            goto label_23ab48;
        }
    }
    ctx->pc = 0x23AB14u;
label_23ab14:
    // 0x23ab14: 0xae14fffc  sw          $s4, -0x4($s0)
    ctx->pc = 0x23ab14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967292), GPR_U32(ctx, 20));
label_23ab18:
    // 0x23ab18: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23ab18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23ab1c:
    // 0x23ab1c: 0xae150000  sw          $s5, 0x0($s0)
    ctx->pc = 0x23ab1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 21));
label_23ab20:
    // 0x23ab20: 0x8ec62b04  lw          $a2, 0x2B04($s6)
    ctx->pc = 0x23ab20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11012)));
label_23ab24:
    // 0x23ab24: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x23ab24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_23ab28:
    // 0x23ab28: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x23ab28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_23ab2c:
    // 0x23ab2c: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x23ab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_23ab30:
    // 0x23ab30: 0x40f809  jalr        $v0
label_23ab34:
    if (ctx->pc == 0x23AB34u) {
        ctx->pc = 0x23AB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB30u;
        // 0x23ab34: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AB38u;
        goto label_23ab38;
    }
    ctx->pc = 0x23AB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23AB38u);
        ctx->pc = 0x23AB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB30u;
        // 0x23ab34: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AB30u, 0x23AB38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23AB38u;
label_23ab38:
    // 0x23ab38: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x23ab38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_23ab3c:
    // 0x23ab3c: 0x10000006  b           . + 4 + (0x6 << 2)
label_23ab40:
    if (ctx->pc == 0x23AB40u) {
        ctx->pc = 0x23AB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB3Cu;
        // 0x23ab40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AB44u;
        goto label_23ab44;
    }
    ctx->pc = 0x23AB3Cu;
    {
        const bool branch_taken_0x23ab3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB3Cu;
        // 0x23ab40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ab3c) {
            ctx->pc = 0x23AB58u;
            goto label_23ab58;
        }
    }
    ctx->pc = 0x23AB44u;
label_23ab44:
    // 0x23ab44: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x23ab44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_23ab48:
    // 0x23ab48: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x23ab48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_23ab4c:
    // 0x23ab4c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_23ab50:
    if (ctx->pc == 0x23AB50u) {
        ctx->pc = 0x23AB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB4Cu;
        // 0x23ab50: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AB54u;
        goto label_23ab54;
    }
    ctx->pc = 0x23AB4Cu;
    {
        const bool branch_taken_0x23ab4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB4Cu;
        // 0x23ab50: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ab4c) {
            ctx->pc = 0x23AAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23aaf8;
        }
    }
    ctx->pc = 0x23AB54u;
label_23ab54:
    // 0x23ab54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23ab54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23ab58:
    // 0x23ab58: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x23ab58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_23ab5c:
    // 0x23ab5c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x23ab5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_23ab60:
    // 0x23ab60: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x23ab60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_23ab64:
    // 0x23ab64: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x23ab64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23ab68:
    // 0x23ab68: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x23ab68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23ab6c:
    // 0x23ab6c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x23ab6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23ab70:
    // 0x23ab70: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x23ab70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23ab74:
    // 0x23ab74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23ab74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23ab78:
    // 0x23ab78: 0x3e00008  jr          $ra
label_23ab7c:
    if (ctx->pc == 0x23AB7Cu) {
        ctx->pc = 0x23AB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB78u;
        // 0x23ab7c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AB80u;
        goto label_fallthrough_0x23ab78;
    }
    ctx->pc = 0x23AB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB78u;
        // 0x23ab7c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AB78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23ab78:
    ctx->pc = 0x23AB80u;
}
