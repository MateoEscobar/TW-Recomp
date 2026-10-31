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

// Function: sub_0015BAA0
// Address: 0x15baa0 - 0x15bc70
void sub_0015BAA0_0x15baa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BAA0_0x15baa0");
#endif

    switch (ctx->pc) {
        case 0x15baa0u: goto label_15baa0;
        case 0x15baa4u: goto label_15baa4;
        case 0x15baa8u: goto label_15baa8;
        case 0x15baacu: goto label_15baac;
        case 0x15bab0u: goto label_15bab0;
        case 0x15bab4u: goto label_15bab4;
        case 0x15bab8u: goto label_15bab8;
        case 0x15babcu: goto label_15babc;
        case 0x15bac0u: goto label_15bac0;
        case 0x15bac4u: goto label_15bac4;
        case 0x15bac8u: goto label_15bac8;
        case 0x15baccu: goto label_15bacc;
        case 0x15bad0u: goto label_15bad0;
        case 0x15bad4u: goto label_15bad4;
        case 0x15bad8u: goto label_15bad8;
        case 0x15badcu: goto label_15badc;
        case 0x15bae0u: goto label_15bae0;
        case 0x15bae4u: goto label_15bae4;
        case 0x15bae8u: goto label_15bae8;
        case 0x15baecu: goto label_15baec;
        case 0x15baf0u: goto label_15baf0;
        case 0x15baf4u: goto label_15baf4;
        case 0x15baf8u: goto label_15baf8;
        case 0x15bafcu: goto label_15bafc;
        case 0x15bb00u: goto label_15bb00;
        case 0x15bb04u: goto label_15bb04;
        case 0x15bb08u: goto label_15bb08;
        case 0x15bb0cu: goto label_15bb0c;
        case 0x15bb10u: goto label_15bb10;
        case 0x15bb14u: goto label_15bb14;
        case 0x15bb18u: goto label_15bb18;
        case 0x15bb1cu: goto label_15bb1c;
        case 0x15bb20u: goto label_15bb20;
        case 0x15bb24u: goto label_15bb24;
        case 0x15bb28u: goto label_15bb28;
        case 0x15bb2cu: goto label_15bb2c;
        case 0x15bb30u: goto label_15bb30;
        case 0x15bb34u: goto label_15bb34;
        case 0x15bb38u: goto label_15bb38;
        case 0x15bb3cu: goto label_15bb3c;
        case 0x15bb40u: goto label_15bb40;
        case 0x15bb44u: goto label_15bb44;
        case 0x15bb48u: goto label_15bb48;
        case 0x15bb4cu: goto label_15bb4c;
        case 0x15bb50u: goto label_15bb50;
        case 0x15bb54u: goto label_15bb54;
        case 0x15bb58u: goto label_15bb58;
        case 0x15bb5cu: goto label_15bb5c;
        case 0x15bb60u: goto label_15bb60;
        case 0x15bb64u: goto label_15bb64;
        case 0x15bb68u: goto label_15bb68;
        case 0x15bb6cu: goto label_15bb6c;
        case 0x15bb70u: goto label_15bb70;
        case 0x15bb74u: goto label_15bb74;
        case 0x15bb78u: goto label_15bb78;
        case 0x15bb7cu: goto label_15bb7c;
        case 0x15bb80u: goto label_15bb80;
        case 0x15bb84u: goto label_15bb84;
        case 0x15bb88u: goto label_15bb88;
        case 0x15bb8cu: goto label_15bb8c;
        case 0x15bb90u: goto label_15bb90;
        case 0x15bb94u: goto label_15bb94;
        case 0x15bb98u: goto label_15bb98;
        case 0x15bb9cu: goto label_15bb9c;
        case 0x15bba0u: goto label_15bba0;
        case 0x15bba4u: goto label_15bba4;
        case 0x15bba8u: goto label_15bba8;
        case 0x15bbacu: goto label_15bbac;
        case 0x15bbb0u: goto label_15bbb0;
        case 0x15bbb4u: goto label_15bbb4;
        case 0x15bbb8u: goto label_15bbb8;
        case 0x15bbbcu: goto label_15bbbc;
        case 0x15bbc0u: goto label_15bbc0;
        case 0x15bbc4u: goto label_15bbc4;
        case 0x15bbc8u: goto label_15bbc8;
        case 0x15bbccu: goto label_15bbcc;
        case 0x15bbd0u: goto label_15bbd0;
        case 0x15bbd4u: goto label_15bbd4;
        case 0x15bbd8u: goto label_15bbd8;
        case 0x15bbdcu: goto label_15bbdc;
        case 0x15bbe0u: goto label_15bbe0;
        case 0x15bbe4u: goto label_15bbe4;
        case 0x15bbe8u: goto label_15bbe8;
        case 0x15bbecu: goto label_15bbec;
        case 0x15bbf0u: goto label_15bbf0;
        case 0x15bbf4u: goto label_15bbf4;
        case 0x15bbf8u: goto label_15bbf8;
        case 0x15bbfcu: goto label_15bbfc;
        case 0x15bc00u: goto label_15bc00;
        case 0x15bc04u: goto label_15bc04;
        case 0x15bc08u: goto label_15bc08;
        case 0x15bc0cu: goto label_15bc0c;
        case 0x15bc10u: goto label_15bc10;
        case 0x15bc14u: goto label_15bc14;
        case 0x15bc18u: goto label_15bc18;
        case 0x15bc1cu: goto label_15bc1c;
        case 0x15bc20u: goto label_15bc20;
        case 0x15bc24u: goto label_15bc24;
        case 0x15bc28u: goto label_15bc28;
        case 0x15bc2cu: goto label_15bc2c;
        case 0x15bc30u: goto label_15bc30;
        case 0x15bc34u: goto label_15bc34;
        case 0x15bc38u: goto label_15bc38;
        case 0x15bc3cu: goto label_15bc3c;
        case 0x15bc40u: goto label_15bc40;
        case 0x15bc44u: goto label_15bc44;
        case 0x15bc48u: goto label_15bc48;
        case 0x15bc4cu: goto label_15bc4c;
        case 0x15bc50u: goto label_15bc50;
        case 0x15bc54u: goto label_15bc54;
        case 0x15bc58u: goto label_15bc58;
        case 0x15bc5cu: goto label_15bc5c;
        case 0x15bc60u: goto label_15bc60;
        case 0x15bc64u: goto label_15bc64;
        case 0x15bc68u: goto label_15bc68;
        case 0x15bc6cu: goto label_15bc6c;
        default: break;
    }

    ctx->pc = 0x15baa0u;

label_15baa0:
    // 0x15baa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15baa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_15baa4:
    // 0x15baa4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15baa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15baa8:
    // 0x15baa8: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x15baa8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_15baac:
    // 0x15baac: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x15baacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_15bab0:
    // 0x15bab0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x15bab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_15bab4:
    // 0x15bab4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15bab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15bab8:
    // 0x15bab8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x15bab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_15babc:
    // 0x15babc: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x15babcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_15bac0:
    // 0x15bac0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15bac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15bac4:
    // 0x15bac4: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x15bac4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_15bac8:
    // 0x15bac8: 0x8e45b8b8  lw          $a1, -0x4748($s2)
    ctx->pc = 0x15bac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949048)));
label_15bacc:
    // 0x15bacc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x15baccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15bad0:
    // 0x15bad0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x15bad0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_15bad4:
    // 0x15bad4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x15bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_15bad8:
    // 0x15bad8: 0x40f809  jalr        $v0
label_15badc:
    if (ctx->pc == 0x15BADCu) {
        ctx->pc = 0x15BADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAD8u;
        // 0x15badc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BAE0u;
        goto label_15bae0;
    }
    ctx->pc = 0x15BAD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15BAE0u);
        ctx->pc = 0x15BADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAD8u;
        // 0x15badc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BAD8u, 0x15BAE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BAE0u;
label_15bae0:
    // 0x15bae0: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x15bae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_15bae4:
    // 0x15bae4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x15bae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_15bae8:
    // 0x15bae8: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x15bae8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_15baec:
    // 0x15baec: 0x8c65b9b8  lw          $a1, -0x4648($v1)
    ctx->pc = 0x15baecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949304)));
label_15baf0:
    // 0x15baf0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x15baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_15baf4:
    // 0x15baf4: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x15baf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_15baf8:
    // 0x15baf8: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x15baf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_15bafc:
    // 0x15bafc: 0x60f809  jalr        $v1
label_15bb00:
    if (ctx->pc == 0x15BB00u) {
        ctx->pc = 0x15BB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAFCu;
        // 0x15bb00: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BB04u;
        goto label_15bb04;
    }
    ctx->pc = 0x15BAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15BB04u);
        ctx->pc = 0x15BB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BAFCu;
        // 0x15bb00: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BAFCu, 0x15BB04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BB04u;
label_15bb04:
    // 0x15bb04: 0x8e2c27e4  lw          $t4, 0x27E4($s1)
    ctx->pc = 0x15bb04u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_15bb08:
    // 0x15bb08: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x15bb08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_15bb0c:
    // 0x15bb0c: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x15bb0cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_15bb10:
    // 0x15bb10: 0x24a5f1c8  addiu       $a1, $a1, -0xE38
    ctx->pc = 0x15bb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963656));
label_15bb14:
    // 0x15bb14: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x15bb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_15bb18:
    // 0x15bb18: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x15bb18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_15bb1c:
    // 0x15bb1c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x15bb1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_15bb20:
    // 0x15bb20: 0x240902a5  addiu       $t1, $zero, 0x2A5
    ctx->pc = 0x15bb20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 677));
label_15bb24:
    // 0x15bb24: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x15bb24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_15bb28:
    // 0x15bb28: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x15bb28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15bb2c:
    // 0x15bb2c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x15bb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_15bb30:
    // 0x15bb30: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x15bb30u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15bb34:
    // 0x15bb34: 0x1842021  addu        $a0, $t4, $a0
    ctx->pc = 0x15bb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
label_15bb38:
    // 0x15bb38: 0x40f809  jalr        $v0
label_15bb3c:
    if (ctx->pc == 0x15BB3Cu) {
        ctx->pc = 0x15BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB38u;
        // 0x15bb3c: 0x2508f1d0  addiu       $t0, $t0, -0xE30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963664));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BB40u;
        goto label_15bb40;
    }
    ctx->pc = 0x15BB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15BB40u);
        ctx->pc = 0x15BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB38u;
        // 0x15bb3c: 0x2508f1d0  addiu       $t0, $t0, -0xE30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963664));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BB38u, 0x15BB40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BB40u;
label_15bb40:
    // 0x15bb40: 0xc0579e4  jal         func_15E790
label_15bb44:
    if (ctx->pc == 0x15BB44u) {
        ctx->pc = 0x15BB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB40u;
        // 0x15bb44: 0xae62c738  sw          $v0, -0x38C8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294952760), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BB48u;
        goto label_15bb48;
    }
    ctx->pc = 0x15BB40u;
    SET_GPR_U32(ctx, 31, 0x15BB48u);
    ctx->pc = 0x15BB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BB40u;
    // 0x15bb44: 0xae62c738  sw          $v0, -0x38C8($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294952760), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E790u, 0x15BB40u, 0x15BB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BB48u;
label_15bb48:
    // 0x15bb48: 0x8e43b8b8  lw          $v1, -0x4748($s2)
    ctx->pc = 0x15bb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949048)));
label_15bb4c:
    // 0x15bb4c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15bb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_15bb50:
    // 0x15bb50: 0x3c050016  lui         $a1, 0x16
    ctx->pc = 0x15bb50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22 << 16));
label_15bb54:
    // 0x15bb54: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x15bb54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_15bb58:
    // 0x15bb58: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x15bb58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_15bb5c:
    // 0x15bb5c: 0x24845840  addiu       $a0, $a0, 0x5840
    ctx->pc = 0x15bb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22592));
label_15bb60:
    // 0x15bb60: 0xc071ade  jal         func_1C6B78
label_15bb64:
    if (ctx->pc == 0x15BB64u) {
        ctx->pc = 0x15BB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB60u;
        // 0x15bb64: 0x24a5a280  addiu       $a1, $a1, -0x5D80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BB68u;
        goto label_15bb68;
    }
    ctx->pc = 0x15BB60u;
    SET_GPR_U32(ctx, 31, 0x15BB68u);
    ctx->pc = 0x15BB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BB60u;
    // 0x15bb64: 0x24a5a280  addiu       $a1, $a1, -0x5D80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6B78u, 0x15BB60u, 0x15BB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BB68u;
label_15bb68:
    // 0x15bb68: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x15bb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_15bb6c:
    // 0x15bb6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15bb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15bb70:
    // 0x15bb70: 0x8c435d80  lw          $v1, 0x5D80($v0)
    ctx->pc = 0x15bb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23936)));
label_15bb74:
    // 0x15bb74: 0x1464001c  bne         $v1, $a0, . + 4 + (0x1C << 2)
label_15bb78:
    if (ctx->pc == 0x15BB78u) {
        ctx->pc = 0x15BB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB74u;
        // 0x15bb78: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BB7Cu;
        goto label_15bb7c;
    }
    ctx->pc = 0x15BB74u;
    {
        const bool branch_taken_0x15bb74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x15BB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BB74u;
        // 0x15bb78: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bb74) {
            ctx->pc = 0x15BBE8u;
            goto label_15bbe8;
        }
    }
    ctx->pc = 0x15BB7Cu;
label_15bb7c:
    // 0x15bb7c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15bb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15bb80:
    // 0x15bb80: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15bb80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15bb84:
    // 0x15bb84: 0x8c455024  lw          $a1, 0x5024($v0)
    ctx->pc = 0x15bb84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
label_15bb88:
    // 0x15bb88: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x15bb88u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
label_15bb8c:
    // 0x15bb8c: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x15bb8cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_15bb90:
    // 0x15bb90: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x15bb90u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_15bb94:
    // 0x15bb94: 0x8ca20128  lw          $v0, 0x128($a1)
    ctx->pc = 0x15bb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15bb98:
    // 0x15bb98: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x15bb98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_15bb9c:
    // 0x15bb9c: 0xac64c708  sw          $a0, -0x38F8($v1)
    ctx->pc = 0x15bb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952712), GPR_U32(ctx, 4));
label_15bba0:
    // 0x15bba0: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x15bba0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_15bba4:
    // 0x15bba4: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x15bba4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_15bba8:
    // 0x15bba8: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x15bba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_15bbac:
    // 0x15bbac: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15bbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_15bbb0:
    // 0x15bbb0: 0xad40c70c  sw          $zero, -0x38F4($t2)
    ctx->pc = 0x15bbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294952716), GPR_U32(ctx, 0));
label_15bbb4:
    // 0x15bbb4: 0xad00c6f4  sw          $zero, -0x390C($t0)
    ctx->pc = 0x15bbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294952692), GPR_U32(ctx, 0));
label_15bbb8:
    // 0x15bbb8: 0xad20c724  sw          $zero, -0x38DC($t1)
    ctx->pc = 0x15bbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294952740), GPR_U32(ctx, 0));
label_15bbbc:
    // 0x15bbbc: 0xacc0c730  sw          $zero, -0x38D0($a2)
    ctx->pc = 0x15bbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294952752), GPR_U32(ctx, 0));
label_15bbc0:
    // 0x15bbc0: 0x60f809  jalr        $v1
label_15bbc4:
    if (ctx->pc == 0x15BBC4u) {
        ctx->pc = 0x15BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBC0u;
        // 0x15bbc4: 0xace0c728  sw          $zero, -0x38D8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294952744), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BBC8u;
        goto label_15bbc8;
    }
    ctx->pc = 0x15BBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15BBC8u);
        ctx->pc = 0x15BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBC0u;
        // 0x15bbc4: 0xace0c728  sw          $zero, -0x38D8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294952744), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BBC0u, 0x15BBC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BBC8u;
label_15bbc8:
    // 0x15bbc8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15bbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15bbcc:
    // 0x15bbcc: 0x8c43c6fc  lw          $v1, -0x3904($v0)
    ctx->pc = 0x15bbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952700)));
label_15bbd0:
    // 0x15bbd0: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_15bbd4:
    if (ctx->pc == 0x15BBD4u) {
        ctx->pc = 0x15BBD8u;
        goto label_15bbd8;
    }
    ctx->pc = 0x15BBD0u;
    {
        const bool branch_taken_0x15bbd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bbd0) {
            ctx->pc = 0x15BC34u;
            goto label_15bc34;
        }
    }
    ctx->pc = 0x15BBD8u;
label_15bbd8:
    // 0x15bbd8: 0xc0568dc  jal         func_15A370
label_15bbdc:
    if (ctx->pc == 0x15BBDCu) {
        ctx->pc = 0x15BBE0u;
        goto label_15bbe0;
    }
    ctx->pc = 0x15BBD8u;
    SET_GPR_U32(ctx, 31, 0x15BBE0u);
    ctx->pc = 0x15A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A370u, 0x15BBD8u, 0x15BBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BBE0u;
label_15bbe0:
    // 0x15bbe0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_15bbe4:
    if (ctx->pc == 0x15BBE4u) {
        ctx->pc = 0x15BBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBE0u;
        // 0x15bbe4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BBE8u;
        goto label_15bbe8;
    }
    ctx->pc = 0x15BBE0u;
    {
        const bool branch_taken_0x15bbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBE0u;
        // 0x15bbe4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bbe0) {
            ctx->pc = 0x15BC58u;
            goto label_15bc58;
        }
    }
    ctx->pc = 0x15BBE8u;
label_15bbe8:
    // 0x15bbe8: 0x8c43c700  lw          $v1, -0x3900($v0)
    ctx->pc = 0x15bbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952704)));
label_15bbec:
    // 0x15bbec: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_15bbf0:
    if (ctx->pc == 0x15BBF0u) {
        ctx->pc = 0x15BBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBECu;
        // 0x15bbf0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BBF4u;
        goto label_15bbf4;
    }
    ctx->pc = 0x15BBECu;
    {
        const bool branch_taken_0x15bbec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBECu;
        // 0x15bbf0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bbec) {
            ctx->pc = 0x15BC44u;
            goto label_15bc44;
        }
    }
    ctx->pc = 0x15BBF4u;
label_15bbf4:
    // 0x15bbf4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15bbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15bbf8:
    // 0x15bbf8: 0x8c455024  lw          $a1, 0x5024($v0)
    ctx->pc = 0x15bbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
label_15bbfc:
    // 0x15bbfc: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x15bbfcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
label_15bc00:
    // 0x15bc00: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x15bc00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_15bc04:
    // 0x15bc04: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x15bc04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
label_15bc08:
    // 0x15bc08: 0x8ca20128  lw          $v0, 0x128($a1)
    ctx->pc = 0x15bc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15bc0c:
    // 0x15bc0c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x15bc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_15bc10:
    // 0x15bc10: 0xac64c708  sw          $a0, -0x38F8($v1)
    ctx->pc = 0x15bc10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952712), GPR_U32(ctx, 4));
label_15bc14:
    // 0x15bc14: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x15bc14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_15bc18:
    // 0x15bc18: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x15bc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_15bc1c:
    // 0x15bc1c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15bc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_15bc20:
    // 0x15bc20: 0xad20c70c  sw          $zero, -0x38F4($t1)
    ctx->pc = 0x15bc20u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294952716), GPR_U32(ctx, 0));
label_15bc24:
    // 0x15bc24: 0xace0c6f4  sw          $zero, -0x390C($a3)
    ctx->pc = 0x15bc24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294952692), GPR_U32(ctx, 0));
label_15bc28:
    // 0x15bc28: 0xad00c724  sw          $zero, -0x38DC($t0)
    ctx->pc = 0x15bc28u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294952740), GPR_U32(ctx, 0));
label_15bc2c:
    // 0x15bc2c: 0x60f809  jalr        $v1
label_15bc30:
    if (ctx->pc == 0x15BC30u) {
        ctx->pc = 0x15BC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC2Cu;
        // 0x15bc30: 0xacc0c730  sw          $zero, -0x38D0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294952752), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BC34u;
        goto label_15bc34;
    }
    ctx->pc = 0x15BC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15BC34u);
        ctx->pc = 0x15BC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC2Cu;
        // 0x15bc30: 0xacc0c730  sw          $zero, -0x38D0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294952752), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BC2Cu, 0x15BC34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BC34u;
label_15bc34:
    // 0x15bc34: 0xc0568ca  jal         func_15A328
label_15bc38:
    if (ctx->pc == 0x15BC38u) {
        ctx->pc = 0x15BC3Cu;
        goto label_15bc3c;
    }
    ctx->pc = 0x15BC34u;
    SET_GPR_U32(ctx, 31, 0x15BC3Cu);
    ctx->pc = 0x15A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A328u, 0x15BC34u, 0x15BC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BC3Cu;
label_15bc3c:
    // 0x15bc3c: 0x10000006  b           . + 4 + (0x6 << 2)
label_15bc40:
    if (ctx->pc == 0x15BC40u) {
        ctx->pc = 0x15BC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC3Cu;
        // 0x15bc40: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BC44u;
        goto label_15bc44;
    }
    ctx->pc = 0x15BC3Cu;
    {
        const bool branch_taken_0x15bc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC3Cu;
        // 0x15bc40: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bc3c) {
            ctx->pc = 0x15BC58u;
            goto label_15bc58;
        }
    }
    ctx->pc = 0x15BC44u;
label_15bc44:
    // 0x15bc44: 0xc108766  jal         func_421D98
label_15bc48:
    if (ctx->pc == 0x15BC48u) {
        ctx->pc = 0x15BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC44u;
        // 0x15bc48: 0x8c445024  lw          $a0, 0x5024($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BC4Cu;
        goto label_15bc4c;
    }
    ctx->pc = 0x15BC44u;
    SET_GPR_U32(ctx, 31, 0x15BC4Cu);
    ctx->pc = 0x15BC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BC44u;
    // 0x15bc48: 0x8c445024  lw          $a0, 0x5024($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x421D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x421D98u, 0x15BC44u, 0x15BC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BC4Cu;
label_15bc4c:
    // 0x15bc4c: 0xc0568ac  jal         func_15A2B0
label_15bc50:
    if (ctx->pc == 0x15BC50u) {
        ctx->pc = 0x15BC54u;
        goto label_15bc54;
    }
    ctx->pc = 0x15BC4Cu;
    SET_GPR_U32(ctx, 31, 0x15BC54u);
    ctx->pc = 0x15A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A2B0u, 0x15BC4Cu, 0x15BC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BC54u;
label_15bc54:
    // 0x15bc54: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x15bc54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15bc58:
    // 0x15bc58: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x15bc58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15bc5c:
    // 0x15bc5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15bc5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15bc60:
    // 0x15bc60: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x15bc60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15bc64:
    // 0x15bc64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15bc64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15bc68:
    // 0x15bc68: 0x3e00008  jr          $ra
label_15bc6c:
    if (ctx->pc == 0x15BC6Cu) {
        ctx->pc = 0x15BC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC68u;
        // 0x15bc6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BC70u;
        goto label_fallthrough_0x15bc68;
    }
    ctx->pc = 0x15BC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC68u;
        // 0x15bc6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BC68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15bc68:
    ctx->pc = 0x15BC70u;
}
