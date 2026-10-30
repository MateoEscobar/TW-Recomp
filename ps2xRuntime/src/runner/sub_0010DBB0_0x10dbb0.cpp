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

// Function: sub_0010DBB0
// Address: 0x10dbb0 - 0x10dd50
void sub_0010DBB0_0x10dbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010DBB0_0x10dbb0");
#endif

    switch (ctx->pc) {
        case 0x10dbb0u: goto label_10dbb0;
        case 0x10dbb4u: goto label_10dbb4;
        case 0x10dbb8u: goto label_10dbb8;
        case 0x10dbbcu: goto label_10dbbc;
        case 0x10dbc0u: goto label_10dbc0;
        case 0x10dbc4u: goto label_10dbc4;
        case 0x10dbc8u: goto label_10dbc8;
        case 0x10dbccu: goto label_10dbcc;
        case 0x10dbd0u: goto label_10dbd0;
        case 0x10dbd4u: goto label_10dbd4;
        case 0x10dbd8u: goto label_10dbd8;
        case 0x10dbdcu: goto label_10dbdc;
        case 0x10dbe0u: goto label_10dbe0;
        case 0x10dbe4u: goto label_10dbe4;
        case 0x10dbe8u: goto label_10dbe8;
        case 0x10dbecu: goto label_10dbec;
        case 0x10dbf0u: goto label_10dbf0;
        case 0x10dbf4u: goto label_10dbf4;
        case 0x10dbf8u: goto label_10dbf8;
        case 0x10dbfcu: goto label_10dbfc;
        case 0x10dc00u: goto label_10dc00;
        case 0x10dc04u: goto label_10dc04;
        case 0x10dc08u: goto label_10dc08;
        case 0x10dc0cu: goto label_10dc0c;
        case 0x10dc10u: goto label_10dc10;
        case 0x10dc14u: goto label_10dc14;
        case 0x10dc18u: goto label_10dc18;
        case 0x10dc1cu: goto label_10dc1c;
        case 0x10dc20u: goto label_10dc20;
        case 0x10dc24u: goto label_10dc24;
        case 0x10dc28u: goto label_10dc28;
        case 0x10dc2cu: goto label_10dc2c;
        case 0x10dc30u: goto label_10dc30;
        case 0x10dc34u: goto label_10dc34;
        case 0x10dc38u: goto label_10dc38;
        case 0x10dc3cu: goto label_10dc3c;
        case 0x10dc40u: goto label_10dc40;
        case 0x10dc44u: goto label_10dc44;
        case 0x10dc48u: goto label_10dc48;
        case 0x10dc4cu: goto label_10dc4c;
        case 0x10dc50u: goto label_10dc50;
        case 0x10dc54u: goto label_10dc54;
        case 0x10dc58u: goto label_10dc58;
        case 0x10dc5cu: goto label_10dc5c;
        case 0x10dc60u: goto label_10dc60;
        case 0x10dc64u: goto label_10dc64;
        case 0x10dc68u: goto label_10dc68;
        case 0x10dc6cu: goto label_10dc6c;
        case 0x10dc70u: goto label_10dc70;
        case 0x10dc74u: goto label_10dc74;
        case 0x10dc78u: goto label_10dc78;
        case 0x10dc7cu: goto label_10dc7c;
        case 0x10dc80u: goto label_10dc80;
        case 0x10dc84u: goto label_10dc84;
        case 0x10dc88u: goto label_10dc88;
        case 0x10dc8cu: goto label_10dc8c;
        case 0x10dc90u: goto label_10dc90;
        case 0x10dc94u: goto label_10dc94;
        case 0x10dc98u: goto label_10dc98;
        case 0x10dc9cu: goto label_10dc9c;
        case 0x10dca0u: goto label_10dca0;
        case 0x10dca4u: goto label_10dca4;
        case 0x10dca8u: goto label_10dca8;
        case 0x10dcacu: goto label_10dcac;
        case 0x10dcb0u: goto label_10dcb0;
        case 0x10dcb4u: goto label_10dcb4;
        case 0x10dcb8u: goto label_10dcb8;
        case 0x10dcbcu: goto label_10dcbc;
        case 0x10dcc0u: goto label_10dcc0;
        case 0x10dcc4u: goto label_10dcc4;
        case 0x10dcc8u: goto label_10dcc8;
        case 0x10dcccu: goto label_10dccc;
        case 0x10dcd0u: goto label_10dcd0;
        case 0x10dcd4u: goto label_10dcd4;
        case 0x10dcd8u: goto label_10dcd8;
        case 0x10dcdcu: goto label_10dcdc;
        case 0x10dce0u: goto label_10dce0;
        case 0x10dce4u: goto label_10dce4;
        case 0x10dce8u: goto label_10dce8;
        case 0x10dcecu: goto label_10dcec;
        case 0x10dcf0u: goto label_10dcf0;
        case 0x10dcf4u: goto label_10dcf4;
        case 0x10dcf8u: goto label_10dcf8;
        case 0x10dcfcu: goto label_10dcfc;
        case 0x10dd00u: goto label_10dd00;
        case 0x10dd04u: goto label_10dd04;
        case 0x10dd08u: goto label_10dd08;
        case 0x10dd0cu: goto label_10dd0c;
        case 0x10dd10u: goto label_10dd10;
        case 0x10dd14u: goto label_10dd14;
        case 0x10dd18u: goto label_10dd18;
        case 0x10dd1cu: goto label_10dd1c;
        case 0x10dd20u: goto label_10dd20;
        case 0x10dd24u: goto label_10dd24;
        case 0x10dd28u: goto label_10dd28;
        case 0x10dd2cu: goto label_10dd2c;
        case 0x10dd30u: goto label_10dd30;
        case 0x10dd34u: goto label_10dd34;
        case 0x10dd38u: goto label_10dd38;
        case 0x10dd3cu: goto label_10dd3c;
        case 0x10dd40u: goto label_10dd40;
        case 0x10dd44u: goto label_10dd44;
        case 0x10dd48u: goto label_10dd48;
        case 0x10dd4cu: goto label_10dd4c;
        default: break;
    }

    ctx->pc = 0x10dbb0u;

label_10dbb0:
    // 0x10dbb0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x10dbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_10dbb4:
    // 0x10dbb4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x10dbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_10dbb8:
    // 0x10dbb8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x10dbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_10dbbc:
    // 0x10dbbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10dbbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10dbc0:
    // 0x10dbc0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x10dbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_10dbc4:
    // 0x10dbc4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x10dbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_10dbc8:
    // 0x10dbc8: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x10dbc8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_10dbcc:
    // 0x10dbcc: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x10dbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_10dbd0:
    // 0x10dbd0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x10dbd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10dbd4:
    // 0x10dbd4: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x10dbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_10dbd8:
    // 0x10dbd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10dbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10dbdc:
    // 0x10dbdc: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x10dbdcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_10dbe0:
    // 0x10dbe0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x10dbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_10dbe4:
    // 0x10dbe4: 0x8e130010  lw          $s3, 0x10($s0)
    ctx->pc = 0x10dbe4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_10dbe8:
    // 0x10dbe8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x10dbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_10dbec:
    // 0x10dbec: 0x82850008  lb          $a1, 0x8($s4)
    ctx->pc = 0x10dbecu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 8)));
label_10dbf0:
    // 0x10dbf0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10dbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_10dbf4:
    // 0x10dbf4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x10dbf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_10dbf8:
    // 0x10dbf8: 0xc046dd4  jal         func_11B750
label_10dbfc:
    if (ctx->pc == 0x10DBFCu) {
        ctx->pc = 0x10DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBF8u;
        // 0x10dbfc: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DC00u;
        goto label_10dc00;
    }
    ctx->pc = 0x10DBF8u;
    SET_GPR_U32(ctx, 31, 0x10DC00u);
    ctx->pc = 0x10DBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DBF8u;
    // 0x10dbfc: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B750u, 0x10DBF8u, 0x10DC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DC00u;
label_10dc00:
    // 0x10dc00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10dc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10dc04:
    // 0x10dc04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10dc04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10dc08:
    // 0x10dc08: 0xa2830011  sb          $v1, 0x11($s4)
    ctx->pc = 0x10dc08u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 17), (uint8_t)GPR_U32(ctx, 3));
label_10dc0c:
    // 0x10dc0c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x10dc0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10dc10:
    // 0x10dc10: 0x82850008  lb          $a1, 0x8($s4)
    ctx->pc = 0x10dc10u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 8)));
label_10dc14:
    // 0x10dc14: 0x8e51bce4  lw          $s1, -0x431C($s2)
    ctx->pc = 0x10dc14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950116)));
label_10dc18:
    // 0x10dc18: 0x8e96000c  lw          $s6, 0xC($s4)
    ctx->pc = 0x10dc18u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_10dc1c:
    // 0x10dc1c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x10dc1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_10dc20:
    // 0x10dc20: 0x86020138  lh          $v0, 0x138($s0)
    ctx->pc = 0x10dc20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 312)));
label_10dc24:
    // 0x10dc24: 0x26100138  addiu       $s0, $s0, 0x138
    ctx->pc = 0x10dc24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 312));
label_10dc28:
    // 0x10dc28: 0xc046dd4  jal         func_11B750
label_10dc2c:
    if (ctx->pc == 0x10DC2Cu) {
        ctx->pc = 0x10DC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC28u;
        // 0x10dc2c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DC30u;
        goto label_10dc30;
    }
    ctx->pc = 0x10DC28u;
    SET_GPR_U32(ctx, 31, 0x10DC30u);
    ctx->pc = 0x10DC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DC28u;
    // 0x10dc2c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B750u, 0x10DC28u, 0x10DC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DC30u;
label_10dc30:
    // 0x10dc30: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x10dc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10dc34:
    // 0x10dc34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10dc34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10dc38:
    // 0x10dc38: 0x60f809  jalr        $v1
label_10dc3c:
    if (ctx->pc == 0x10DC3Cu) {
        ctx->pc = 0x10DC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC38u;
        // 0x10dc3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DC40u;
        goto label_10dc40;
    }
    ctx->pc = 0x10DC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10DC40u);
        ctx->pc = 0x10DC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC38u;
        // 0x10dc3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DC38u, 0x10DC40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10DC40u;
label_10dc40:
    // 0x10dc40: 0x8e48bce4  lw          $t0, -0x431C($s2)
    ctx->pc = 0x10dc40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950116)));
label_10dc44:
    // 0x10dc44: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x10dc44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_10dc48:
    // 0x10dc48: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x10dc48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10dc4c:
    // 0x10dc4c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10dc4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10dc50:
    // 0x10dc50: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x10dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_10dc54:
    // 0x10dc54: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x10dc54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_10dc58:
    // 0x10dc58: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x10dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_10dc5c:
    // 0x10dc5c: 0x60f809  jalr        $v1
label_10dc60:
    if (ctx->pc == 0x10DC60u) {
        ctx->pc = 0x10DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC5Cu;
        // 0x10dc60: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DC64u;
        goto label_10dc64;
    }
    ctx->pc = 0x10DC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10DC64u);
        ctx->pc = 0x10DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC5Cu;
        // 0x10dc60: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DC5Cu, 0x10DC64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10DC64u;
label_10dc64:
    // 0x10dc64: 0x8e46bce4  lw          $a2, -0x431C($s2)
    ctx->pc = 0x10dc64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950116)));
label_10dc68:
    // 0x10dc68: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x10dc68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10dc6c:
    // 0x10dc6c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10dc6cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_10dc70:
    // 0x10dc70: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x10dc70u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_10dc74:
    // 0x10dc74: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x10dc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_10dc78:
    // 0x10dc78: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x10dc78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_10dc7c:
    // 0x10dc7c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x10dc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_10dc80:
    // 0x10dc80: 0x60f809  jalr        $v1
label_10dc84:
    if (ctx->pc == 0x10DC84u) {
        ctx->pc = 0x10DC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC80u;
        // 0x10dc84: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DC88u;
        goto label_10dc88;
    }
    ctx->pc = 0x10DC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10DC88u);
        ctx->pc = 0x10DC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC80u;
        // 0x10dc84: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DC80u, 0x10DC88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10DC88u;
label_10dc88:
    // 0x10dc88: 0x8e46bce4  lw          $a2, -0x431C($s2)
    ctx->pc = 0x10dc88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950116)));
label_10dc8c:
    // 0x10dc8c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10dc8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_10dc90:
    // 0x10dc90: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x10dc90u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_10dc94:
    // 0x10dc94: 0x26a50001  addiu       $a1, $s5, 0x1
    ctx->pc = 0x10dc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_10dc98:
    // 0x10dc98: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x10dc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_10dc9c:
    // 0x10dc9c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x10dc9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_10dca0:
    // 0x10dca0: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x10dca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_10dca4:
    // 0x10dca4: 0x60f809  jalr        $v1
label_10dca8:
    if (ctx->pc == 0x10DCA8u) {
        ctx->pc = 0x10DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DCA4u;
        // 0x10dca8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DCACu;
        goto label_10dcac;
    }
    ctx->pc = 0x10DCA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10DCACu);
        ctx->pc = 0x10DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DCA4u;
        // 0x10dca8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DCA4u, 0x10DCACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10DCACu;
label_10dcac:
    // 0x10dcac: 0xe6940024  swc1        $f20, 0x24($s4)
    ctx->pc = 0x10dcacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_10dcb0:
    // 0x10dcb0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10dcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10dcb4:
    // 0x10dcb4: 0x8e46bce4  lw          $a2, -0x431C($s2)
    ctx->pc = 0x10dcb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950116)));
label_10dcb8:
    // 0x10dcb8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x10dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_10dcbc:
    // 0x10dcbc: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x10dcbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_10dcc0:
    // 0x10dcc0: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x10dcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_10dcc4:
    // 0x10dcc4: 0x60f809  jalr        $v1
label_10dcc8:
    if (ctx->pc == 0x10DCC8u) {
        ctx->pc = 0x10DCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DCC4u;
        // 0x10dcc8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DCCCu;
        goto label_10dccc;
    }
    ctx->pc = 0x10DCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10DCCCu);
        ctx->pc = 0x10DCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DCC4u;
        // 0x10dcc8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DCC4u, 0x10DCCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10DCCCu;
label_10dccc:
    // 0x10dccc: 0x8e46bce4  lw          $a2, -0x431C($s2)
    ctx->pc = 0x10dcccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950116)));
label_10dcd0:
    // 0x10dcd0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10dcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10dcd4:
    // 0x10dcd4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x10dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_10dcd8:
    // 0x10dcd8: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x10dcd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_10dcdc:
    // 0x10dcdc: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x10dcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_10dce0:
    // 0x10dce0: 0x60f809  jalr        $v1
label_10dce4:
    if (ctx->pc == 0x10DCE4u) {
        ctx->pc = 0x10DCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DCE0u;
        // 0x10dce4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DCE8u;
        goto label_10dce8;
    }
    ctx->pc = 0x10DCE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10DCE8u);
        ctx->pc = 0x10DCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DCE0u;
        // 0x10dce4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DCE0u, 0x10DCE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10DCE8u;
label_10dce8:
    // 0x10dce8: 0x8e46bce4  lw          $a2, -0x431C($s2)
    ctx->pc = 0x10dce8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950116)));
label_10dcec:
    // 0x10dcec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x10dcecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_10dcf0:
    // 0x10dcf0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x10dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_10dcf4:
    // 0x10dcf4: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x10dcf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_10dcf8:
    // 0x10dcf8: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x10dcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_10dcfc:
    // 0x10dcfc: 0x60f809  jalr        $v1
label_10dd00:
    if (ctx->pc == 0x10DD00u) {
        ctx->pc = 0x10DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DCFCu;
        // 0x10dd00: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DD04u;
        goto label_10dd04;
    }
    ctx->pc = 0x10DCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10DD04u);
        ctx->pc = 0x10DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DCFCu;
        // 0x10dd00: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DCFCu, 0x10DD04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10DD04u;
label_10dd04:
    // 0x10dd04: 0x8e46bce4  lw          $a2, -0x431C($s2)
    ctx->pc = 0x10dd04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950116)));
label_10dd08:
    // 0x10dd08: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x10dd08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_10dd0c:
    // 0x10dd0c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x10dd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_10dd10:
    // 0x10dd10: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x10dd10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_10dd14:
    // 0x10dd14: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x10dd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_10dd18:
    // 0x10dd18: 0x60f809  jalr        $v1
label_10dd1c:
    if (ctx->pc == 0x10DD1Cu) {
        ctx->pc = 0x10DD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD18u;
        // 0x10dd1c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DD20u;
        goto label_10dd20;
    }
    ctx->pc = 0x10DD18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10DD20u);
        ctx->pc = 0x10DD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD18u;
        // 0x10dd1c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DD18u, 0x10DD20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10DD20u;
label_10dd20:
    // 0x10dd20: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x10dd20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_10dd24:
    // 0x10dd24: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x10dd24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_10dd28:
    // 0x10dd28: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x10dd28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_10dd2c:
    // 0x10dd2c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x10dd2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_10dd30:
    // 0x10dd30: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x10dd30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10dd34:
    // 0x10dd34: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x10dd34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10dd38:
    // 0x10dd38: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x10dd38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10dd3c:
    // 0x10dd3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10dd3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10dd40:
    // 0x10dd40: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x10dd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_10dd44:
    // 0x10dd44: 0x3e00008  jr          $ra
label_10dd48:
    if (ctx->pc == 0x10DD48u) {
        ctx->pc = 0x10DD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD44u;
        // 0x10dd48: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DD4Cu;
        goto label_10dd4c;
    }
    ctx->pc = 0x10DD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD44u;
        // 0x10dd48: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DD44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DD4Cu;
label_10dd4c:
    // 0x10dd4c: 0x0  nop
    ctx->pc = 0x10dd4cu;
    // NOP
    ctx->pc = 0x10dd50u;
}
