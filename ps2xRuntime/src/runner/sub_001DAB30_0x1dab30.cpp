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

// Function: sub_001DAB30
// Address: 0x1dab30 - 0x1dad88
void sub_001DAB30_0x1dab30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DAB30_0x1dab30");
#endif

    switch (ctx->pc) {
        case 0x1dab58u: goto label_1dab58;
        case 0x1dab78u: goto label_1dab78;
        case 0x1dab90u: goto label_1dab90;
        case 0x1dabb0u: goto label_1dabb0;
        case 0x1dabc8u: goto label_1dabc8;
        case 0x1dabe8u: goto label_1dabe8;
        case 0x1dabf4u: goto label_1dabf4;
        case 0x1dac00u: goto label_1dac00;
        case 0x1dac18u: goto label_1dac18;
        case 0x1dac44u: goto label_1dac44;
        case 0x1dac64u: goto label_1dac64;
        case 0x1dac7cu: goto label_1dac7c;
        case 0x1daca8u: goto label_1daca8;
        case 0x1dacc8u: goto label_1dacc8;
        case 0x1dace0u: goto label_1dace0;
        case 0x1dad00u: goto label_1dad00;
        case 0x1dad18u: goto label_1dad18;
        case 0x1dad38u: goto label_1dad38;
        case 0x1dad50u: goto label_1dad50;
        case 0x1dad70u: goto label_1dad70;
        default: break;
    }

    ctx->pc = 0x1dab30u;

    // 0x1dab30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dab30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dab34: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1dab34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1dab38: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1dab38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1dab3c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1dab3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dab40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dab40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dab44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dab44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dab48: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1dab48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1dab4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dab4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dab50: 0xc10c46c  jal         func_4311B0
    ctx->pc = 0x1DAB50u;
    SET_GPR_U32(ctx, 31, 0x1DAB58u);
    ctx->pc = 0x1DAB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAB50u;
    // 0x1dab54: 0x24a56210  addiu       $a1, $a1, 0x6210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x1DAB50u, 0x1DAB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAB58u;
label_1dab58:
    // 0x1dab58: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DAB58u;
    {
        const bool branch_taken_0x1dab58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB58u;
        // 0x1dab5c: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dab58) {
            ctx->pc = 0x1DAB80u;
            goto label_1dab80;
        }
    }
    ctx->pc = 0x1DAB60u;
    // 0x1dab60: 0xa200002f  sb          $zero, 0x2F($s0)
    ctx->pc = 0x1dab60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 47), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dab64: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1dab64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1dab68: 0x24a56220  addiu       $a1, $a1, 0x6220
    ctx->pc = 0x1dab68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25120));
    // 0x1dab6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dab6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dab70: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1DAB70u;
    SET_GPR_U32(ctx, 31, 0x1DAB78u);
    ctx->pc = 0x1DAB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAB70u;
    // 0x1dab74: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1DAB70u, 0x1DAB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAB78u;
label_1dab78:
    // 0x1dab78: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1DAB78u;
    {
        const bool branch_taken_0x1dab78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB78u;
        // 0x1dab7c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dab78) {
            ctx->pc = 0x1DABECu;
            goto label_1dabec;
        }
    }
    ctx->pc = 0x1DAB80u;
label_1dab80:
    // 0x1dab80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dab80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dab84: 0x24a56250  addiu       $a1, $a1, 0x6250
    ctx->pc = 0x1dab84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25168));
    // 0x1dab88: 0xc10c46c  jal         func_4311B0
    ctx->pc = 0x1DAB88u;
    SET_GPR_U32(ctx, 31, 0x1DAB90u);
    ctx->pc = 0x1DAB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAB88u;
    // 0x1dab8c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x1DAB88u, 0x1DAB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAB90u;
label_1dab90:
    // 0x1dab90: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DAB90u;
    {
        const bool branch_taken_0x1dab90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB90u;
        // 0x1dab94: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dab90) {
            ctx->pc = 0x1DABB8u;
            goto label_1dabb8;
        }
    }
    ctx->pc = 0x1DAB98u;
    // 0x1dab98: 0xa200002f  sb          $zero, 0x2F($s0)
    ctx->pc = 0x1dab98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 47), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dab9c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1dab9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1daba0: 0x24a56260  addiu       $a1, $a1, 0x6260
    ctx->pc = 0x1daba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25184));
    // 0x1daba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1daba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daba8: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1DABA8u;
    SET_GPR_U32(ctx, 31, 0x1DABB0u);
    ctx->pc = 0x1DABACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DABA8u;
    // 0x1dabac: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1DABA8u, 0x1DABB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DABB0u;
label_1dabb0:
    // 0x1dabb0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1DABB0u;
    {
        const bool branch_taken_0x1dabb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DABB0u;
        // 0x1dabb4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dabb0) {
            ctx->pc = 0x1DABECu;
            goto label_1dabec;
        }
    }
    ctx->pc = 0x1DABB8u;
label_1dabb8:
    // 0x1dabb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dabb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dabbc: 0x24a56290  addiu       $a1, $a1, 0x6290
    ctx->pc = 0x1dabbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25232));
    // 0x1dabc0: 0xc10c46c  jal         func_4311B0
    ctx->pc = 0x1DABC0u;
    SET_GPR_U32(ctx, 31, 0x1DABC8u);
    ctx->pc = 0x1DABC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DABC0u;
    // 0x1dabc4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x1DABC0u, 0x1DABC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DABC8u;
label_1dabc8:
    // 0x1dabc8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1DABC8u;
    {
        const bool branch_taken_0x1dabc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DABC8u;
        // 0x1dabcc: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dabc8) {
            ctx->pc = 0x1DAC08u;
            goto label_1dac08;
        }
    }
    ctx->pc = 0x1DABD0u;
    // 0x1dabd0: 0xa200001e  sb          $zero, 0x1E($s0)
    ctx->pc = 0x1dabd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 30), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dabd4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1dabd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1dabd8: 0x24a562a0  addiu       $a1, $a1, 0x62A0
    ctx->pc = 0x1dabd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25248));
    // 0x1dabdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dabdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dabe0: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1DABE0u;
    SET_GPR_U32(ctx, 31, 0x1DABE8u);
    ctx->pc = 0x1DABE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DABE0u;
    // 0x1dabe4: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1DABE0u, 0x1DABE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DABE8u;
label_1dabe8:
    // 0x1dabe8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1dabe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1dabec:
    // 0x1dabec: 0xc067bb8  jal         func_19EEE0
    ctx->pc = 0x1DABECu;
    SET_GPR_U32(ctx, 31, 0x1DABF4u);
    ctx->pc = 0x19EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EEE0u, 0x1DABECu, 0x1DABF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DABF4u;
label_1dabf4:
    // 0x1dabf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dabf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dabf8: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x1DABF8u;
    SET_GPR_U32(ctx, 31, 0x1DAC00u);
    ctx->pc = 0x1DABFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DABF8u;
    // 0x1dabfc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x1DABF8u, 0x1DAC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAC00u;
label_1dac00:
    // 0x1dac00: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1DAC00u;
    {
        const bool branch_taken_0x1dac00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC00u;
        // 0x1dac04: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dac00) {
            ctx->pc = 0x1DAD74u;
            goto label_1dad74;
        }
    }
    ctx->pc = 0x1DAC08u;
label_1dac08:
    // 0x1dac08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dac08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dac0c: 0x24a562c0  addiu       $a1, $a1, 0x62C0
    ctx->pc = 0x1dac0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25280));
    // 0x1dac10: 0xc10c46c  jal         func_4311B0
    ctx->pc = 0x1DAC10u;
    SET_GPR_U32(ctx, 31, 0x1DAC18u);
    ctx->pc = 0x1DAC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAC10u;
    // 0x1dac14: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x1DAC10u, 0x1DAC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAC18u;
label_1dac18:
    // 0x1dac18: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DAC18u;
    {
        const bool branch_taken_0x1dac18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dac18) {
            ctx->pc = 0x1DAC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DAC18u;
            // 0x1dac1c: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DAC34u;
            goto label_1dac34;
        }
    }
    ctx->pc = 0x1DAC20u;
    // 0x1dac20: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1dac20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1dac24: 0xa2000021  sb          $zero, 0x21($s0)
    ctx->pc = 0x1dac24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dac28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dac28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dac2c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1DAC2Cu;
    {
        const bool branch_taken_0x1dac2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC2Cu;
        // 0x1dac30: 0x24a562d0  addiu       $a1, $a1, 0x62D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dac2c) {
            ctx->pc = 0x1DACF8u;
            goto label_1dacf8;
        }
    }
    ctx->pc = 0x1DAC34u;
label_1dac34:
    // 0x1dac34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dac34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dac38: 0x24a562f8  addiu       $a1, $a1, 0x62F8
    ctx->pc = 0x1dac38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25336));
    // 0x1dac3c: 0xc10c46c  jal         func_4311B0
    ctx->pc = 0x1DAC3Cu;
    SET_GPR_U32(ctx, 31, 0x1DAC44u);
    ctx->pc = 0x1DAC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAC3Cu;
    // 0x1dac40: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x1DAC3Cu, 0x1DAC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAC44u;
label_1dac44:
    // 0x1dac44: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DAC44u;
    {
        const bool branch_taken_0x1dac44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC44u;
        // 0x1dac48: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dac44) {
            ctx->pc = 0x1DAC6Cu;
            goto label_1dac6c;
        }
    }
    ctx->pc = 0x1DAC4Cu;
    // 0x1dac4c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1dac4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1dac50: 0xa200001f  sb          $zero, 0x1F($s0)
    ctx->pc = 0x1dac50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dac54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dac54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dac58: 0x24a56308  addiu       $a1, $a1, 0x6308
    ctx->pc = 0x1dac58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25352));
    // 0x1dac5c: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1DAC5Cu;
    SET_GPR_U32(ctx, 31, 0x1DAC64u);
    ctx->pc = 0x1DAC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAC5Cu;
    // 0x1dac60: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1DAC5Cu, 0x1DAC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAC64u;
label_1dac64:
    // 0x1dac64: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1DAC64u;
    {
        const bool branch_taken_0x1dac64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC64u;
        // 0x1dac68: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dac64) {
            ctx->pc = 0x1DAD74u;
            goto label_1dad74;
        }
    }
    ctx->pc = 0x1DAC6Cu;
label_1dac6c:
    // 0x1dac6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dac6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dac70: 0x24a56328  addiu       $a1, $a1, 0x6328
    ctx->pc = 0x1dac70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25384));
    // 0x1dac74: 0xc10c46c  jal         func_4311B0
    ctx->pc = 0x1DAC74u;
    SET_GPR_U32(ctx, 31, 0x1DAC7Cu);
    ctx->pc = 0x1DAC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAC74u;
    // 0x1dac78: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x1DAC74u, 0x1DAC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAC7Cu;
label_1dac7c:
    // 0x1dac7c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DAC7Cu;
    {
        const bool branch_taken_0x1dac7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dac7c) {
            ctx->pc = 0x1DAC80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DAC7Cu;
            // 0x1dac80: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DAC98u;
            goto label_1dac98;
        }
    }
    ctx->pc = 0x1DAC84u;
    // 0x1dac84: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1dac84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1dac88: 0xa2000020  sb          $zero, 0x20($s0)
    ctx->pc = 0x1dac88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dac8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dac8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dac90: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1DAC90u;
    {
        const bool branch_taken_0x1dac90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC90u;
        // 0x1dac94: 0x24a56338  addiu       $a1, $a1, 0x6338 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dac90) {
            ctx->pc = 0x1DACC0u;
            goto label_1dacc0;
        }
    }
    ctx->pc = 0x1DAC98u;
label_1dac98:
    // 0x1dac98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dac98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dac9c: 0x24a56360  addiu       $a1, $a1, 0x6360
    ctx->pc = 0x1dac9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25440));
    // 0x1daca0: 0xc10c46c  jal         func_4311B0
    ctx->pc = 0x1DACA0u;
    SET_GPR_U32(ctx, 31, 0x1DACA8u);
    ctx->pc = 0x1DACA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DACA0u;
    // 0x1daca4: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x1DACA0u, 0x1DACA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DACA8u;
label_1daca8:
    // 0x1daca8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DACA8u;
    {
        const bool branch_taken_0x1daca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DACA8u;
        // 0x1dacac: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daca8) {
            ctx->pc = 0x1DACD0u;
            goto label_1dacd0;
        }
    }
    ctx->pc = 0x1DACB0u;
    // 0x1dacb0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1dacb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1dacb4: 0xa2000020  sb          $zero, 0x20($s0)
    ctx->pc = 0x1dacb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dacb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dacb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dacbc: 0x24a56370  addiu       $a1, $a1, 0x6370
    ctx->pc = 0x1dacbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25456));
label_1dacc0:
    // 0x1dacc0: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1DACC0u;
    SET_GPR_U32(ctx, 31, 0x1DACC8u);
    ctx->pc = 0x1DACC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DACC0u;
    // 0x1dacc4: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1DACC0u, 0x1DACC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DACC8u;
label_1dacc8:
    // 0x1dacc8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1DACC8u;
    {
        const bool branch_taken_0x1dacc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DACC8u;
        // 0x1daccc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dacc8) {
            ctx->pc = 0x1DAD74u;
            goto label_1dad74;
        }
    }
    ctx->pc = 0x1DACD0u;
label_1dacd0:
    // 0x1dacd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dacd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dacd4: 0x24a56398  addiu       $a1, $a1, 0x6398
    ctx->pc = 0x1dacd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25496));
    // 0x1dacd8: 0xc10c46c  jal         func_4311B0
    ctx->pc = 0x1DACD8u;
    SET_GPR_U32(ctx, 31, 0x1DACE0u);
    ctx->pc = 0x1DACDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DACD8u;
    // 0x1dacdc: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x1DACD8u, 0x1DACE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DACE0u;
label_1dace0:
    // 0x1dace0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DACE0u;
    {
        const bool branch_taken_0x1dace0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DACE0u;
        // 0x1dace4: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dace0) {
            ctx->pc = 0x1DAD08u;
            goto label_1dad08;
        }
    }
    ctx->pc = 0x1DACE8u;
    // 0x1dace8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1dace8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1dacec: 0xa2000021  sb          $zero, 0x21($s0)
    ctx->pc = 0x1dacecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dacf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dacf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dacf4: 0x24a563a8  addiu       $a1, $a1, 0x63A8
    ctx->pc = 0x1dacf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25512));
label_1dacf8:
    // 0x1dacf8: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1DACF8u;
    SET_GPR_U32(ctx, 31, 0x1DAD00u);
    ctx->pc = 0x1DACFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DACF8u;
    // 0x1dacfc: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1DACF8u, 0x1DAD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAD00u;
label_1dad00:
    // 0x1dad00: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1DAD00u;
    {
        const bool branch_taken_0x1dad00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD00u;
        // 0x1dad04: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dad00) {
            ctx->pc = 0x1DAD74u;
            goto label_1dad74;
        }
    }
    ctx->pc = 0x1DAD08u;
label_1dad08:
    // 0x1dad08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dad08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dad0c: 0x24a563d0  addiu       $a1, $a1, 0x63D0
    ctx->pc = 0x1dad0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25552));
    // 0x1dad10: 0xc10c46c  jal         func_4311B0
    ctx->pc = 0x1DAD10u;
    SET_GPR_U32(ctx, 31, 0x1DAD18u);
    ctx->pc = 0x1DAD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAD10u;
    // 0x1dad14: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x1DAD10u, 0x1DAD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAD18u;
label_1dad18:
    // 0x1dad18: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DAD18u;
    {
        const bool branch_taken_0x1dad18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD18u;
        // 0x1dad1c: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dad18) {
            ctx->pc = 0x1DAD40u;
            goto label_1dad40;
        }
    }
    ctx->pc = 0x1DAD20u;
    // 0x1dad20: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1dad20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1dad24: 0xa2000023  sb          $zero, 0x23($s0)
    ctx->pc = 0x1dad24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 35), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dad28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dad28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dad2c: 0x24a563e0  addiu       $a1, $a1, 0x63E0
    ctx->pc = 0x1dad2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25568));
    // 0x1dad30: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1DAD30u;
    SET_GPR_U32(ctx, 31, 0x1DAD38u);
    ctx->pc = 0x1DAD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAD30u;
    // 0x1dad34: 0x24060023  addiu       $a2, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1DAD30u, 0x1DAD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAD38u;
label_1dad38:
    // 0x1dad38: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1DAD38u;
    {
        const bool branch_taken_0x1dad38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD38u;
        // 0x1dad3c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dad38) {
            ctx->pc = 0x1DAD74u;
            goto label_1dad74;
        }
    }
    ctx->pc = 0x1DAD40u;
label_1dad40:
    // 0x1dad40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dad40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dad44: 0x24a56408  addiu       $a1, $a1, 0x6408
    ctx->pc = 0x1dad44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25608));
    // 0x1dad48: 0xc10c46c  jal         func_4311B0
    ctx->pc = 0x1DAD48u;
    SET_GPR_U32(ctx, 31, 0x1DAD50u);
    ctx->pc = 0x1DAD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAD48u;
    // 0x1dad4c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x1DAD48u, 0x1DAD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAD50u;
label_1dad50:
    // 0x1dad50: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DAD50u;
    {
        const bool branch_taken_0x1dad50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dad50) {
            ctx->pc = 0x1DAD54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DAD50u;
            // 0x1dad54: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DAD74u;
            goto label_1dad74;
        }
    }
    ctx->pc = 0x1DAD58u;
    // 0x1dad58: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1dad58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1dad5c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1dad5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dad60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dad60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dad64: 0x24a56410  addiu       $a1, $a1, 0x6410
    ctx->pc = 0x1dad64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25616));
    // 0x1dad68: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1DAD68u;
    SET_GPR_U32(ctx, 31, 0x1DAD70u);
    ctx->pc = 0x1DAD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAD68u;
    // 0x1dad6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1DAD68u, 0x1DAD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAD70u;
label_1dad70:
    // 0x1dad70: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1dad70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dad74:
    // 0x1dad74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dad74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dad78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dad78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dad7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAD7Cu;
        // 0x1dad80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAD7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAD84u;
    // 0x1dad84: 0x0  nop
    ctx->pc = 0x1dad84u;
    // NOP
    ctx->pc = 0x1dad88u;
}
