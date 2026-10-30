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

// Function: sub_0010B9F0
// Address: 0x10b9f0 - 0x10bb60
void sub_0010B9F0_0x10b9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B9F0_0x10b9f0");
#endif

    switch (ctx->pc) {
        case 0x10b9f0u: goto label_10b9f0;
        case 0x10b9f4u: goto label_10b9f4;
        case 0x10b9f8u: goto label_10b9f8;
        case 0x10b9fcu: goto label_10b9fc;
        case 0x10ba00u: goto label_10ba00;
        case 0x10ba04u: goto label_10ba04;
        case 0x10ba08u: goto label_10ba08;
        case 0x10ba0cu: goto label_10ba0c;
        case 0x10ba10u: goto label_10ba10;
        case 0x10ba14u: goto label_10ba14;
        case 0x10ba18u: goto label_10ba18;
        case 0x10ba1cu: goto label_10ba1c;
        case 0x10ba20u: goto label_10ba20;
        case 0x10ba24u: goto label_10ba24;
        case 0x10ba28u: goto label_10ba28;
        case 0x10ba2cu: goto label_10ba2c;
        case 0x10ba30u: goto label_10ba30;
        case 0x10ba34u: goto label_10ba34;
        case 0x10ba38u: goto label_10ba38;
        case 0x10ba3cu: goto label_10ba3c;
        case 0x10ba40u: goto label_10ba40;
        case 0x10ba44u: goto label_10ba44;
        case 0x10ba48u: goto label_10ba48;
        case 0x10ba4cu: goto label_10ba4c;
        case 0x10ba50u: goto label_10ba50;
        case 0x10ba54u: goto label_10ba54;
        case 0x10ba58u: goto label_10ba58;
        case 0x10ba5cu: goto label_10ba5c;
        case 0x10ba60u: goto label_10ba60;
        case 0x10ba64u: goto label_10ba64;
        case 0x10ba68u: goto label_10ba68;
        case 0x10ba6cu: goto label_10ba6c;
        case 0x10ba70u: goto label_10ba70;
        case 0x10ba74u: goto label_10ba74;
        case 0x10ba78u: goto label_10ba78;
        case 0x10ba7cu: goto label_10ba7c;
        case 0x10ba80u: goto label_10ba80;
        case 0x10ba84u: goto label_10ba84;
        case 0x10ba88u: goto label_10ba88;
        case 0x10ba8cu: goto label_10ba8c;
        case 0x10ba90u: goto label_10ba90;
        case 0x10ba94u: goto label_10ba94;
        case 0x10ba98u: goto label_10ba98;
        case 0x10ba9cu: goto label_10ba9c;
        case 0x10baa0u: goto label_10baa0;
        case 0x10baa4u: goto label_10baa4;
        case 0x10baa8u: goto label_10baa8;
        case 0x10baacu: goto label_10baac;
        case 0x10bab0u: goto label_10bab0;
        case 0x10bab4u: goto label_10bab4;
        case 0x10bab8u: goto label_10bab8;
        case 0x10babcu: goto label_10babc;
        case 0x10bac0u: goto label_10bac0;
        case 0x10bac4u: goto label_10bac4;
        case 0x10bac8u: goto label_10bac8;
        case 0x10baccu: goto label_10bacc;
        case 0x10bad0u: goto label_10bad0;
        case 0x10bad4u: goto label_10bad4;
        case 0x10bad8u: goto label_10bad8;
        case 0x10badcu: goto label_10badc;
        case 0x10bae0u: goto label_10bae0;
        case 0x10bae4u: goto label_10bae4;
        case 0x10bae8u: goto label_10bae8;
        case 0x10baecu: goto label_10baec;
        case 0x10baf0u: goto label_10baf0;
        case 0x10baf4u: goto label_10baf4;
        case 0x10baf8u: goto label_10baf8;
        case 0x10bafcu: goto label_10bafc;
        case 0x10bb00u: goto label_10bb00;
        case 0x10bb04u: goto label_10bb04;
        case 0x10bb08u: goto label_10bb08;
        case 0x10bb0cu: goto label_10bb0c;
        case 0x10bb10u: goto label_10bb10;
        case 0x10bb14u: goto label_10bb14;
        case 0x10bb18u: goto label_10bb18;
        case 0x10bb1cu: goto label_10bb1c;
        case 0x10bb20u: goto label_10bb20;
        case 0x10bb24u: goto label_10bb24;
        case 0x10bb28u: goto label_10bb28;
        case 0x10bb2cu: goto label_10bb2c;
        case 0x10bb30u: goto label_10bb30;
        case 0x10bb34u: goto label_10bb34;
        case 0x10bb38u: goto label_10bb38;
        case 0x10bb3cu: goto label_10bb3c;
        case 0x10bb40u: goto label_10bb40;
        case 0x10bb44u: goto label_10bb44;
        case 0x10bb48u: goto label_10bb48;
        case 0x10bb4cu: goto label_10bb4c;
        case 0x10bb50u: goto label_10bb50;
        case 0x10bb54u: goto label_10bb54;
        case 0x10bb58u: goto label_10bb58;
        case 0x10bb5cu: goto label_10bb5c;
        default: break;
    }

    ctx->pc = 0x10b9f0u;

label_10b9f0:
    // 0x10b9f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10b9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_10b9f4:
    // 0x10b9f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x10b9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_10b9f8:
    // 0x10b9f8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x10b9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_10b9fc:
    // 0x10b9fc: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x10b9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_10ba00:
    // 0x10ba00: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x10ba00u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_10ba04:
    // 0x10ba04: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x10ba04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_10ba08:
    // 0x10ba08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10ba08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_10ba0c:
    // 0x10ba0c: 0x3c080054  lui         $t0, 0x54
    ctx->pc = 0x10ba0cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)84 << 16));
label_10ba10:
    // 0x10ba10: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x10ba10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_10ba14:
    // 0x10ba14: 0x24a56b70  addiu       $a1, $a1, 0x6B70
    ctx->pc = 0x10ba14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27504));
label_10ba18:
    // 0x10ba18: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x10ba18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_10ba1c:
    // 0x10ba1c: 0x2455a8bc  addiu       $s5, $v0, -0x5744
    ctx->pc = 0x10ba1cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944956));
label_10ba20:
    // 0x10ba20: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x10ba20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_10ba24:
    // 0x10ba24: 0x25086b90  addiu       $t0, $t0, 0x6B90
    ctx->pc = 0x10ba24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 27536));
label_10ba28:
    // 0x10ba28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ba28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10ba2c:
    // 0x10ba2c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x10ba2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_10ba30:
    // 0x10ba30: 0x8e8a27e4  lw          $t2, 0x27E4($s4)
    ctx->pc = 0x10ba30u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_10ba34:
    // 0x10ba34: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x10ba34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_10ba38:
    // 0x10ba38: 0x2409002e  addiu       $t1, $zero, 0x2E
    ctx->pc = 0x10ba38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_10ba3c:
    // 0x10ba3c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x10ba3cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10ba40:
    // 0x10ba40: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x10ba40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_10ba44:
    // 0x10ba44: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x10ba44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_10ba48:
    // 0x10ba48: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x10ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_10ba4c:
    // 0x10ba4c: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x10ba4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_10ba50:
    // 0x10ba50: 0x40f809  jalr        $v0
label_10ba54:
    if (ctx->pc == 0x10BA54u) {
        ctx->pc = 0x10BA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA50u;
        // 0x10ba54: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BA58u;
        goto label_10ba58;
    }
    ctx->pc = 0x10BA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10BA58u);
        ctx->pc = 0x10BA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA50u;
        // 0x10ba54: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BA50u, 0x10BA58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10BA58u;
label_10ba58:
    // 0x10ba58: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10ba58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10ba5c:
    // 0x10ba5c: 0x12400036  beqz        $s2, . + 4 + (0x36 << 2)
label_10ba60:
    if (ctx->pc == 0x10BA60u) {
        ctx->pc = 0x10BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA5Cu;
        // 0x10ba60: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BA64u;
        goto label_10ba64;
    }
    ctx->pc = 0x10BA5Cu;
    {
        const bool branch_taken_0x10ba5c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA5Cu;
        // 0x10ba60: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ba5c) {
            ctx->pc = 0x10BB38u;
            goto label_10bb38;
        }
    }
    ctx->pc = 0x10BA64u;
label_10ba64:
    // 0x10ba64: 0x24020104  addiu       $v0, $zero, 0x104
    ctx->pc = 0x10ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
label_10ba68:
    // 0x10ba68: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x10ba68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_10ba6c:
    // 0x10ba6c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x10ba6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_10ba70:
    // 0x10ba70: 0x3c100054  lui         $s0, 0x54
    ctx->pc = 0x10ba70u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)84 << 16));
label_10ba74:
    // 0x10ba74: 0x8e8927e4  lw          $t1, 0x27E4($s4)
    ctx->pc = 0x10ba74u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_10ba78:
    // 0x10ba78: 0x3c110054  lui         $s1, 0x54
    ctx->pc = 0x10ba78u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)84 << 16));
label_10ba7c:
    // 0x10ba7c: 0x26106b40  addiu       $s0, $s0, 0x6B40
    ctx->pc = 0x10ba7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27456));
label_10ba80:
    // 0x10ba80: 0x26316b48  addiu       $s1, $s1, 0x6B48
    ctx->pc = 0x10ba80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 27464));
label_10ba84:
    // 0x10ba84: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x10ba84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_10ba88:
    // 0x10ba88: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x10ba88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_10ba8c:
    // 0x10ba8c: 0x34c630b0  ori         $a2, $a2, 0x30B0
    ctx->pc = 0x10ba8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)12464);
label_10ba90:
    // 0x10ba90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10ba90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10ba94:
    // 0x10ba94: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x10ba94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_10ba98:
    // 0x10ba98: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x10ba98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_10ba9c:
    // 0x10ba9c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x10ba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_10baa0:
    // 0x10baa0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x10baa0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10baa4:
    // 0x10baa4: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x10baa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_10baa8:
    // 0x10baa8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x10baa8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10baac:
    // 0x10baac: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x10baacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_10bab0:
    // 0x10bab0: 0x40f809  jalr        $v0
label_10bab4:
    if (ctx->pc == 0x10BAB4u) {
        ctx->pc = 0x10BAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BAB0u;
        // 0x10bab4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BAB8u;
        goto label_10bab8;
    }
    ctx->pc = 0x10BAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10BAB8u);
        ctx->pc = 0x10BAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BAB0u;
        // 0x10bab4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BAB0u, 0x10BAB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10BAB8u;
label_10bab8:
    // 0x10bab8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x10bab8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_10babc:
    // 0x10babc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10babcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10bac0:
    // 0x10bac0: 0x8e8c27e4  lw          $t4, 0x27E4($s4)
    ctx->pc = 0x10bac0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_10bac4:
    // 0x10bac4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x10bac4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10bac8:
    // 0x10bac8: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x10bac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_10bacc:
    // 0x10bacc: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x10baccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_10bad0:
    // 0x10bad0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x10bad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_10bad4:
    // 0x10bad4: 0x24090021  addiu       $t1, $zero, 0x21
    ctx->pc = 0x10bad4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_10bad8:
    // 0x10bad8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x10bad8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_10badc:
    // 0x10badc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x10badcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10bae0:
    // 0x10bae0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x10bae0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_10bae4:
    // 0x10bae4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x10bae4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10bae8:
    // 0x10bae8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x10bae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_10baec:
    // 0x10baec: 0x40f809  jalr        $v0
label_10baf0:
    if (ctx->pc == 0x10BAF0u) {
        ctx->pc = 0x10BAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BAECu;
        // 0x10baf0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BAF4u;
        goto label_10baf4;
    }
    ctx->pc = 0x10BAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10BAF4u);
        ctx->pc = 0x10BAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BAECu;
        // 0x10baf0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BAECu, 0x10BAF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10BAF4u;
label_10baf4:
    // 0x10baf4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x10baf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_10baf8:
    // 0x10baf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10baf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10bafc:
    // 0x10bafc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_10bb00:
    if (ctx->pc == 0x10BB00u) {
        ctx->pc = 0x10BB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BAFCu;
        // 0x10bb00: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BB04u;
        goto label_10bb04;
    }
    ctx->pc = 0x10BAFCu;
    {
        const bool branch_taken_0x10bafc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BAFCu;
        // 0x10bb00: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bafc) {
            ctx->pc = 0x10BB34u;
            goto label_10bb34;
        }
    }
    ctx->pc = 0x10BB04u;
label_10bb04:
    // 0x10bb04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10bb04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10bb08:
    // 0x10bb08: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x10bb08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_10bb0c:
    // 0x10bb0c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x10bb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_10bb10:
    // 0x10bb10: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x10bb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_10bb14:
    // 0x10bb14: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x10bb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_10bb18:
    // 0x10bb18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10bb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10bb1c:
    // 0x10bb1c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x10bb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_10bb20:
    // 0x10bb20: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x10bb20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_10bb24:
    // 0x10bb24: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x10bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_10bb28:
    // 0x10bb28: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x10bb28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10bb2c:
    // 0x10bb2c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_10bb30:
    if (ctx->pc == 0x10BB30u) {
        ctx->pc = 0x10BB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB2Cu;
        // 0x10bb30: 0x24c6012c  addiu       $a2, $a2, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 300));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BB34u;
        goto label_10bb34;
    }
    ctx->pc = 0x10BB2Cu;
    {
        const bool branch_taken_0x10bb2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB2Cu;
        // 0x10bb30: 0x24c6012c  addiu       $a2, $a2, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb2c) {
            ctx->pc = 0x10BB08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10bb08;
        }
    }
    ctx->pc = 0x10BB34u;
label_10bb34:
    // 0x10bb34: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x10bb34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10bb38:
    // 0x10bb38: 0xaeb20000  sw          $s2, 0x0($s5)
    ctx->pc = 0x10bb38u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 18));
label_10bb3c:
    // 0x10bb3c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x10bb3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_10bb40:
    // 0x10bb40: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x10bb40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_10bb44:
    // 0x10bb44: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x10bb44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_10bb48:
    // 0x10bb48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10bb48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10bb4c:
    // 0x10bb4c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x10bb4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10bb50:
    // 0x10bb50: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x10bb50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10bb54:
    // 0x10bb54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10bb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10bb58:
    // 0x10bb58: 0x3e00008  jr          $ra
label_10bb5c:
    if (ctx->pc == 0x10BB5Cu) {
        ctx->pc = 0x10BB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB58u;
        // 0x10bb5c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10BB60u;
        goto label_fallthrough_0x10bb58;
    }
    ctx->pc = 0x10BB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB58u;
        // 0x10bb5c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10bb58:
    ctx->pc = 0x10BB60u;
}
