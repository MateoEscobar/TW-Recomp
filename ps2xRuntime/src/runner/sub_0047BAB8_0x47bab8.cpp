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

// Function: sub_0047BAB8
// Address: 0x47bab8 - 0x47bc98
void sub_0047BAB8_0x47bab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047BAB8_0x47bab8");
#endif

    switch (ctx->pc) {
        case 0x47bb08u: goto label_47bb08;
        case 0x47bb14u: goto label_47bb14;
        case 0x47bb30u: goto label_47bb30;
        case 0x47bb3cu: goto label_47bb3c;
        case 0x47bbacu: goto label_47bbac;
        case 0x47bc00u: goto label_47bc00;
        case 0x47bc10u: goto label_47bc10;
        case 0x47bc1cu: goto label_47bc1c;
        case 0x47bc5cu: goto label_47bc5c;
        default: break;
    }

    ctx->pc = 0x47bab8u;

    // 0x47bab8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x47bab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x47babc: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x47babcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x47bac0: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x47bac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x47bac4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x47bac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47bac8: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x47bac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x47bacc: 0x27b10048  addiu       $s1, $sp, 0x48
    ctx->pc = 0x47baccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x47bad0: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x47bad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x47bad4: 0x27b20044  addiu       $s2, $sp, 0x44
    ctx->pc = 0x47bad4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x47bad8: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x47bad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x47badc: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x47badcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x47bae0: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x47bae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x47bae4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x47bae4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bae8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x47bae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x47baec: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x47baecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47baf0: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x47baf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x47baf4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x47baf4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47baf8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x47baf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x47bafc: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x47bafcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bb00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x47bb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bb04: 0x0  nop
    ctx->pc = 0x47bb04u;
    // NOP
label_47bb08:
    // 0x47bb08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x47bb08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bb0c: 0xc11fb56  jal         func_47ED58
    ctx->pc = 0x47BB0Cu;
    SET_GPR_U32(ctx, 31, 0x47BB14u);
    ctx->pc = 0x47BB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47BB0Cu;
    // 0x47bb10: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x47BB0Cu, 0x47BB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BB14u;
label_47bb14:
    // 0x47bb14: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x47bb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
    // 0x47bb18: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x47BB18u;
    {
        const bool branch_taken_0x47bb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47bb18) {
            ctx->pc = 0x47BB1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47BB18u;
            // 0x47bb1c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47BB48u;
            goto label_47bb48;
        }
    }
    ctx->pc = 0x47BB20u;
    // 0x47bb20: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x47bb20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x47bb24: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x47bb24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
    // 0x47bb28: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x47BB28u;
    SET_GPR_U32(ctx, 31, 0x47BB30u);
    ctx->pc = 0x47BB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47BB28u;
    // 0x47bb2c: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x47BB28u, 0x47BB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BB30u;
label_47bb30:
    // 0x47bb30: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x47bb30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x47bb34: 0xc11f024  jal         func_47C090
    ctx->pc = 0x47BB34u;
    SET_GPR_U32(ctx, 31, 0x47BB3Cu);
    ctx->pc = 0x47BB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47BB34u;
    // 0x47bb38: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x47BB34u, 0x47BB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BB3Cu;
label_47bb3c:
    // 0x47bb3c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x47BB3Cu;
    {
        const bool branch_taken_0x47bb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47BB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BB3Cu;
        // 0x47bb40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47bb3c) {
            ctx->pc = 0x47BBD8u;
            goto label_47bbd8;
        }
    }
    ctx->pc = 0x47BB44u;
    // 0x47bb44: 0x0  nop
    ctx->pc = 0x47bb44u;
    // NOP
label_47bb48:
    // 0x47bb48: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x47bb48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x47bb4c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x47bb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x47bb50: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x47bb50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x47bb54: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x47bb54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x47bb58: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x47bb58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x47bb5c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x47BB5Cu;
    {
        const bool branch_taken_0x47bb5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x47BB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BB5Cu;
        // 0x47bb60: 0xafa40014  sw          $a0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47bb5c) {
            ctx->pc = 0x47BB74u;
            goto label_47bb74;
        }
    }
    ctx->pc = 0x47BB64u;
    // 0x47bb64: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x47bb64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x47bb68: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x47bb68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x47bb6c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x47BB6Cu;
    {
        const bool branch_taken_0x47bb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47BB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BB6Cu;
        // 0x47bb70: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47bb6c) {
            ctx->pc = 0x47BBA4u;
            goto label_47bba4;
        }
    }
    ctx->pc = 0x47BB74u;
label_47bb74:
    // 0x47bb74: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x47bb74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x47bb78: 0x61b82  srl         $v1, $a2, 14
    ctx->pc = 0x47bb78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 14));
    // 0x47bb7c: 0x3484ff00  ori         $a0, $a0, 0xFF00
    ctx->pc = 0x47bb7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65280);
    // 0x47bb80: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x47bb80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x47bb84: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x47bb84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x47bb88: 0x61402  srl         $v0, $a2, 16
    ctx->pc = 0x47bb88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x47bb8c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x47bb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x47bb90: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x47bb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x47bb94: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x47bb94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x47bb98: 0x30c4ffff  andi        $a0, $a2, 0xFFFF
    ctx->pc = 0x47bb98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x47bb9c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x47bb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x47bba0: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x47bba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
label_47bba4:
    // 0x47bba4: 0xc11ee9c  jal         func_47BA70
    ctx->pc = 0x47BBA4u;
    SET_GPR_U32(ctx, 31, 0x47BBACu);
    ctx->pc = 0x47BBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47BBA4u;
    // 0x47bba8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BA70u, 0x47BBA4u, 0x47BBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BBACu;
label_47bbac:
    // 0x47bbac: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x47BBACu;
    {
        const bool branch_taken_0x47bbac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x47BBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BBACu;
        // 0x47bbb0: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47bbac) {
            ctx->pc = 0x47BBBCu;
            goto label_47bbbc;
        }
    }
    ctx->pc = 0x47BBB4u;
    // 0x47bbb4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47bbb8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x47bbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_47bbbc:
    // 0x47bbbc: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x47BBBCu;
    {
        const bool branch_taken_0x47bbbc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x47BBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BBBCu;
        // 0x47bbc0: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47bbbc) {
            ctx->pc = 0x47BBC8u;
            goto label_47bbc8;
        }
    }
    ctx->pc = 0x47BBC4u;
    // 0x47bbc4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x47bbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_47bbc8:
    // 0x47bbc8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x47BBC8u;
    {
        const bool branch_taken_0x47bbc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x47BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BBC8u;
        // 0x47bbcc: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47bbc8) {
            ctx->pc = 0x47BBD4u;
            goto label_47bbd4;
        }
    }
    ctx->pc = 0x47BBD0u;
    // 0x47bbd0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x47bbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_47bbd4:
    // 0x47bbd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47bbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47bbd8:
    // 0x47bbd8: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x47BBD8u;
    {
        const bool branch_taken_0x47bbd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47BBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BBD8u;
        // 0x47bbdc: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47bbd8) {
            ctx->pc = 0x47BC64u;
            goto label_47bc64;
        }
    }
    ctx->pc = 0x47BBE0u;
    // 0x47bbe0: 0x1457001c  bne         $v0, $s7, . + 4 + (0x1C << 2)
    ctx->pc = 0x47BBE0u;
    {
        const bool branch_taken_0x47bbe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x47BBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BBE0u;
        // 0x47bbe4: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47bbe0) {
            ctx->pc = 0x47BC54u;
            goto label_47bc54;
        }
    }
    ctx->pc = 0x47BBE8u;
    // 0x47bbe8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x47bbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x47bbec: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x47bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x47bbf0: 0x34424fff  ori         $v0, $v0, 0x4FFF
    ctx->pc = 0x47bbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20479);
    // 0x47bbf4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x47bbf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x47bbf8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x47BBF8u;
    {
        const bool branch_taken_0x47bbf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47BBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BBF8u;
        // 0x47bbfc: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47bbf8) {
            ctx->pc = 0x47BC24u;
            goto label_47bc24;
        }
    }
    ctx->pc = 0x47BC00u;
label_47bc00:
    // 0x47bc00: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x47bc00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x47bc04: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x47bc04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x47bc08: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x47BC08u;
    SET_GPR_U32(ctx, 31, 0x47BC10u);
    ctx->pc = 0x47BC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47BC08u;
    // 0x47bc0c: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x47BC08u, 0x47BC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BC10u;
label_47bc10:
    // 0x47bc10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x47bc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bc14: 0xc11f024  jal         func_47C090
    ctx->pc = 0x47BC14u;
    SET_GPR_U32(ctx, 31, 0x47BC1Cu);
    ctx->pc = 0x47BC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47BC14u;
    // 0x47bc18: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x47BC14u, 0x47BC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BC1Cu;
label_47bc1c:
    // 0x47bc1c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x47BC1Cu;
    {
        const bool branch_taken_0x47bc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47BC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BC1Cu;
        // 0x47bc20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47bc1c) {
            ctx->pc = 0x47BC68u;
            goto label_47bc68;
        }
    }
    ctx->pc = 0x47BC24u;
label_47bc24:
    // 0x47bc24: 0x34427002  ori         $v0, $v0, 0x7002
    ctx->pc = 0x47bc24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28674);
    // 0x47bc28: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x47bc28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x47bc2c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x47BC2Cu;
    {
        const bool branch_taken_0x47bc2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47bc2c) {
            ctx->pc = 0x47BC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47bc00;
        }
    }
    ctx->pc = 0x47BC34u;
    // 0x47bc34: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x47BC34u;
    {
        const bool branch_taken_0x47bc34 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x47BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BC34u;
        // 0x47bc38: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47bc34) {
            ctx->pc = 0x47BC40u;
            goto label_47bc40;
        }
    }
    ctx->pc = 0x47BC3Cu;
    // 0x47bc3c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x47bc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_47bc40:
    // 0x47bc40: 0x12c00002  beqz        $s6, . + 4 + (0x2 << 2)
    ctx->pc = 0x47BC40u;
    {
        const bool branch_taken_0x47bc40 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x47BC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BC40u;
        // 0x47bc44: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47bc40) {
            ctx->pc = 0x47BC4Cu;
            goto label_47bc4c;
        }
    }
    ctx->pc = 0x47BC48u;
    // 0x47bc48: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x47bc48u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_47bc4c:
    // 0x47bc4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x47BC4Cu;
    {
        const bool branch_taken_0x47bc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47BC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BC4Cu;
        // 0x47bc50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47bc4c) {
            ctx->pc = 0x47BC68u;
            goto label_47bc68;
        }
    }
    ctx->pc = 0x47BC54u;
label_47bc54:
    // 0x47bc54: 0xc11fc30  jal         func_47F0C0
    ctx->pc = 0x47BC54u;
    SET_GPR_U32(ctx, 31, 0x47BC5Cu);
    ctx->pc = 0x47BC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47BC54u;
    // 0x47bc58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F0C0u, 0x47BC54u, 0x47BC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BC5Cu;
label_47bc5c:
    // 0x47bc5c: 0x5440ffaa  bnel        $v0, $zero, . + 4 + (-0x56 << 2)
    ctx->pc = 0x47BC5Cu;
    {
        const bool branch_taken_0x47bc5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47bc5c) {
            ctx->pc = 0x47BC60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47BC5Cu;
            // 0x47bc60: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47BB08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47bb08;
        }
    }
    ctx->pc = 0x47BC64u;
label_47bc64:
    // 0x47bc64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x47bc64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47bc68:
    // 0x47bc68: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x47bc68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x47bc6c: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x47bc6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x47bc70: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x47bc70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x47bc74: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x47bc74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x47bc78: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x47bc78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x47bc7c: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x47bc7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x47bc80: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x47bc80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x47bc84: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x47bc84u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x47bc88: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x47bc88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x47bc8c: 0x3e00008  jr          $ra
    ctx->pc = 0x47BC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BC8Cu;
        // 0x47bc90: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47BC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47BC94u;
    // 0x47bc94: 0x0  nop
    ctx->pc = 0x47bc94u;
    // NOP
    ctx->pc = 0x47bc98u;
}
