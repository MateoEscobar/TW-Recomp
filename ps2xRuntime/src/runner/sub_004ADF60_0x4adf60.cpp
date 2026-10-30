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

// Function: sub_004ADF60
// Address: 0x4adf60 - 0x4ae040
void sub_004ADF60_0x4adf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ADF60_0x4adf60");
#endif

    switch (ctx->pc) {
        case 0x4ae014u: goto label_4ae014;
        case 0x4ae028u: goto label_4ae028;
        default: break;
    }

    ctx->pc = 0x4adf60u;

    // 0x4adf60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4adf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4adf64: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4adf64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4adf68: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x4adf68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x4adf6c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4adf6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x4adf70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4adf70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adf74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4adf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4adf78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4adf78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adf7c: 0x24440460  addiu       $a0, $v0, 0x460
    ctx->pc = 0x4adf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1120));
    // 0x4adf80: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x4adf80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4adf84: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x4adf84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adf88: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x4ADF88u;
    {
        const bool branch_taken_0x4adf88 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ADF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADF88u;
        // 0x4adf8c: 0xace40028  sw          $a0, 0x28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4adf88) {
            ctx->pc = 0x4ADFBCu;
            goto label_4adfbc;
        }
    }
    ctx->pc = 0x4ADF90u;
    // 0x4adf90: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x4adf90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4adf94: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x4adf94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4adf98: 0xdc460460  ld          $a2, 0x460($v0)
    ctx->pc = 0x4adf98u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 1120)));
    // 0x4adf9c: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x4adf9cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4adfa0: 0x24e2fff8  addiu       $v0, $a3, -0x8
    ctx->pc = 0x4adfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
    // 0x4adfa4: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x4adfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4adfa8: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x4adfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
    // 0x4adfac: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x4adfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x4adfb0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4adfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4adfb4: 0xace50028  sw          $a1, 0x28($a3)
    ctx->pc = 0x4adfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 5));
    // 0x4adfb8: 0xa7a30018  sh          $v1, 0x18($sp)
    ctx->pc = 0x4adfb8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 3));
label_4adfbc:
    // 0x4adfbc: 0x3c070059  lui         $a3, 0x59
    ctx->pc = 0x4adfbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)89 << 16));
    // 0x4adfc0: 0x2524fff8  addiu       $a0, $t1, -0x8
    ctx->pc = 0x4adfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
    // 0x4adfc4: 0x24e204a0  addiu       $v0, $a3, 0x4A0
    ctx->pc = 0x4adfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1184));
    // 0x4adfc8: 0x2042023  subu        $a0, $s0, $a0
    ctx->pc = 0x4adfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x4adfcc: 0xad220028  sw          $v0, 0x28($t1)
    ctx->pc = 0x4adfccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 2));
    // 0x4adfd0: 0x32280002  andi        $t0, $s1, 0x2
    ctx->pc = 0x4adfd0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x4adfd4: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x4adfd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4adfd8: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x4adfd8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4adfdc: 0xdce504a0  ld          $a1, 0x4A0($a3)
    ctx->pc = 0x4adfdcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 1184)));
    // 0x4adfe0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4adfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4adfe4: 0xffa60008  sd          $a2, 0x8($sp)
    ctx->pc = 0x4adfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 6));
    // 0x4adfe8: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x4adfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x4adfec: 0xa7a30008  sh          $v1, 0x8($sp)
    ctx->pc = 0x4adfecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4adff0: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4ADFF0u;
    {
        const bool branch_taken_0x4adff0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ADFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADFF0u;
        // 0x4adff4: 0xad3d0028  sw          $sp, 0x28($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4adff0) {
            ctx->pc = 0x4AE014u;
            goto label_4ae014;
        }
    }
    ctx->pc = 0x4ADFF8u;
    // 0x4adff8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4adff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4adffc: 0x8d240020  lw          $a0, 0x20($t1)
    ctx->pc = 0x4adffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x4ae000: 0x24420668  addiu       $v0, $v0, 0x668
    ctx->pc = 0x4ae000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1640));
    // 0x4ae004: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AE004u;
    {
        const bool branch_taken_0x4ae004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE004u;
        // 0x4ae008: 0xad220028  sw          $v0, 0x28($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae004) {
            ctx->pc = 0x4AE014u;
            goto label_4ae014;
        }
    }
    ctx->pc = 0x4AE00Cu;
    // 0x4ae00c: 0xc136792  jal         func_4D9E48
    ctx->pc = 0x4AE00Cu;
    SET_GPR_U32(ctx, 31, 0x4AE014u);
    ctx->pc = 0x4D9E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D9E48u, 0x4AE00Cu, 0x4AE014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE014u;
label_4ae014:
    // 0x4ae014: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x4ae014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x4ae018: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AE018u;
    {
        const bool branch_taken_0x4ae018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE018u;
        // 0x4ae01c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae018) {
            ctx->pc = 0x4AE02Cu;
            goto label_4ae02c;
        }
    }
    ctx->pc = 0x4AE020u;
    // 0x4ae020: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4AE020u;
    SET_GPR_U32(ctx, 31, 0x4AE028u);
    ctx->pc = 0x4AE024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE020u;
    // 0x4ae024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4AE020u, 0x4AE028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE028u;
label_4ae028:
    // 0x4ae028: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4ae028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4ae02c:
    // 0x4ae02c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x4ae02cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ae030: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4ae030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ae034: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE034u;
        // 0x4ae038: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE03Cu;
    // 0x4ae03c: 0x0  nop
    ctx->pc = 0x4ae03cu;
    // NOP
    ctx->pc = 0x4ae040u;
}
