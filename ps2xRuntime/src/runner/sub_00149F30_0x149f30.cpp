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

// Function: sub_00149F30
// Address: 0x149f30 - 0x14a188
void sub_00149F30_0x149f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149F30_0x149f30");
#endif

    switch (ctx->pc) {
        case 0x149f30u: goto label_149f30;
        case 0x149f34u: goto label_149f34;
        case 0x149f38u: goto label_149f38;
        case 0x149f3cu: goto label_149f3c;
        case 0x149f40u: goto label_149f40;
        case 0x149f44u: goto label_149f44;
        case 0x149f48u: goto label_149f48;
        case 0x149f4cu: goto label_149f4c;
        case 0x149f50u: goto label_149f50;
        case 0x149f54u: goto label_149f54;
        case 0x149f58u: goto label_149f58;
        case 0x149f5cu: goto label_149f5c;
        case 0x149f60u: goto label_149f60;
        case 0x149f64u: goto label_149f64;
        case 0x149f68u: goto label_149f68;
        case 0x149f6cu: goto label_149f6c;
        case 0x149f70u: goto label_149f70;
        case 0x149f74u: goto label_149f74;
        case 0x149f78u: goto label_149f78;
        case 0x149f7cu: goto label_149f7c;
        case 0x149f80u: goto label_149f80;
        case 0x149f84u: goto label_149f84;
        case 0x149f88u: goto label_149f88;
        case 0x149f8cu: goto label_149f8c;
        case 0x149f90u: goto label_149f90;
        case 0x149f94u: goto label_149f94;
        case 0x149f98u: goto label_149f98;
        case 0x149f9cu: goto label_149f9c;
        case 0x149fa0u: goto label_149fa0;
        case 0x149fa4u: goto label_149fa4;
        case 0x149fa8u: goto label_149fa8;
        case 0x149facu: goto label_149fac;
        case 0x149fb0u: goto label_149fb0;
        case 0x149fb4u: goto label_149fb4;
        case 0x149fb8u: goto label_149fb8;
        case 0x149fbcu: goto label_149fbc;
        case 0x149fc0u: goto label_149fc0;
        case 0x149fc4u: goto label_149fc4;
        case 0x149fc8u: goto label_149fc8;
        case 0x149fccu: goto label_149fcc;
        case 0x149fd0u: goto label_149fd0;
        case 0x149fd4u: goto label_149fd4;
        case 0x149fd8u: goto label_149fd8;
        case 0x149fdcu: goto label_149fdc;
        case 0x149fe0u: goto label_149fe0;
        case 0x149fe4u: goto label_149fe4;
        case 0x149fe8u: goto label_149fe8;
        case 0x149fecu: goto label_149fec;
        case 0x149ff0u: goto label_149ff0;
        case 0x149ff4u: goto label_149ff4;
        case 0x149ff8u: goto label_149ff8;
        case 0x149ffcu: goto label_149ffc;
        case 0x14a000u: goto label_14a000;
        case 0x14a004u: goto label_14a004;
        case 0x14a008u: goto label_14a008;
        case 0x14a00cu: goto label_14a00c;
        case 0x14a010u: goto label_14a010;
        case 0x14a014u: goto label_14a014;
        case 0x14a018u: goto label_14a018;
        case 0x14a01cu: goto label_14a01c;
        case 0x14a020u: goto label_14a020;
        case 0x14a024u: goto label_14a024;
        case 0x14a028u: goto label_14a028;
        case 0x14a02cu: goto label_14a02c;
        case 0x14a030u: goto label_14a030;
        case 0x14a034u: goto label_14a034;
        case 0x14a038u: goto label_14a038;
        case 0x14a03cu: goto label_14a03c;
        case 0x14a040u: goto label_14a040;
        case 0x14a044u: goto label_14a044;
        case 0x14a048u: goto label_14a048;
        case 0x14a04cu: goto label_14a04c;
        case 0x14a050u: goto label_14a050;
        case 0x14a054u: goto label_14a054;
        case 0x14a058u: goto label_14a058;
        case 0x14a05cu: goto label_14a05c;
        case 0x14a060u: goto label_14a060;
        case 0x14a064u: goto label_14a064;
        case 0x14a068u: goto label_14a068;
        case 0x14a06cu: goto label_14a06c;
        case 0x14a070u: goto label_14a070;
        case 0x14a074u: goto label_14a074;
        case 0x14a078u: goto label_14a078;
        case 0x14a07cu: goto label_14a07c;
        case 0x14a080u: goto label_14a080;
        case 0x14a084u: goto label_14a084;
        case 0x14a088u: goto label_14a088;
        case 0x14a08cu: goto label_14a08c;
        case 0x14a090u: goto label_14a090;
        case 0x14a094u: goto label_14a094;
        case 0x14a098u: goto label_14a098;
        case 0x14a09cu: goto label_14a09c;
        case 0x14a0a0u: goto label_14a0a0;
        case 0x14a0a4u: goto label_14a0a4;
        case 0x14a0a8u: goto label_14a0a8;
        case 0x14a0acu: goto label_14a0ac;
        case 0x14a0b0u: goto label_14a0b0;
        case 0x14a0b4u: goto label_14a0b4;
        case 0x14a0b8u: goto label_14a0b8;
        case 0x14a0bcu: goto label_14a0bc;
        case 0x14a0c0u: goto label_14a0c0;
        case 0x14a0c4u: goto label_14a0c4;
        case 0x14a0c8u: goto label_14a0c8;
        case 0x14a0ccu: goto label_14a0cc;
        case 0x14a0d0u: goto label_14a0d0;
        case 0x14a0d4u: goto label_14a0d4;
        case 0x14a0d8u: goto label_14a0d8;
        case 0x14a0dcu: goto label_14a0dc;
        case 0x14a0e0u: goto label_14a0e0;
        case 0x14a0e4u: goto label_14a0e4;
        case 0x14a0e8u: goto label_14a0e8;
        case 0x14a0ecu: goto label_14a0ec;
        case 0x14a0f0u: goto label_14a0f0;
        case 0x14a0f4u: goto label_14a0f4;
        case 0x14a0f8u: goto label_14a0f8;
        case 0x14a0fcu: goto label_14a0fc;
        case 0x14a100u: goto label_14a100;
        case 0x14a104u: goto label_14a104;
        case 0x14a108u: goto label_14a108;
        case 0x14a10cu: goto label_14a10c;
        case 0x14a110u: goto label_14a110;
        case 0x14a114u: goto label_14a114;
        case 0x14a118u: goto label_14a118;
        case 0x14a11cu: goto label_14a11c;
        case 0x14a120u: goto label_14a120;
        case 0x14a124u: goto label_14a124;
        case 0x14a128u: goto label_14a128;
        case 0x14a12cu: goto label_14a12c;
        case 0x14a130u: goto label_14a130;
        case 0x14a134u: goto label_14a134;
        case 0x14a138u: goto label_14a138;
        case 0x14a13cu: goto label_14a13c;
        case 0x14a140u: goto label_14a140;
        case 0x14a144u: goto label_14a144;
        case 0x14a148u: goto label_14a148;
        case 0x14a14cu: goto label_14a14c;
        case 0x14a150u: goto label_14a150;
        case 0x14a154u: goto label_14a154;
        case 0x14a158u: goto label_14a158;
        case 0x14a15cu: goto label_14a15c;
        case 0x14a160u: goto label_14a160;
        case 0x14a164u: goto label_14a164;
        case 0x14a168u: goto label_14a168;
        case 0x14a16cu: goto label_14a16c;
        case 0x14a170u: goto label_14a170;
        case 0x14a174u: goto label_14a174;
        case 0x14a178u: goto label_14a178;
        case 0x14a17cu: goto label_14a17c;
        case 0x14a180u: goto label_14a180;
        case 0x14a184u: goto label_14a184;
        default: break;
    }

    ctx->pc = 0x149f30u;

label_149f30:
    // 0x149f30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x149f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_149f34:
    // 0x149f34: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x149f34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_149f38:
    // 0x149f38: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x149f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_149f3c:
    // 0x149f3c: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x149f3cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_149f40:
    // 0x149f40: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x149f40u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_149f44:
    // 0x149f44: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x149f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_149f48:
    // 0x149f48: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x149f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_149f4c:
    // 0x149f4c: 0x24a5a820  addiu       $a1, $a1, -0x57E0
    ctx->pc = 0x149f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944800));
label_149f50:
    // 0x149f50: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x149f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_149f54:
    // 0x149f54: 0x2508a838  addiu       $t0, $t0, -0x57C8
    ctx->pc = 0x149f54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294944824));
label_149f58:
    // 0x149f58: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x149f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_149f5c:
    // 0x149f5c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x149f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_149f60:
    // 0x149f60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_149f64:
    // 0x149f64: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x149f64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_149f68:
    // 0x149f68: 0x8e2c27e4  lw          $t4, 0x27E4($s1)
    ctx->pc = 0x149f68u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_149f6c:
    // 0x149f6c: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x149f6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_149f70:
    // 0x149f70: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x149f70u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_149f74:
    // 0x149f74: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x149f74u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_149f78:
    // 0x149f78: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x149f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_149f7c:
    // 0x149f7c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x149f7cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_149f80:
    // 0x149f80: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x149f80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_149f84:
    // 0x149f84: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x149f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_149f88:
    // 0x149f88: 0x40f809  jalr        $v0
label_149f8c:
    if (ctx->pc == 0x149F8Cu) {
        ctx->pc = 0x149F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149F88u;
        // 0x149f8c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x149F90u;
        goto label_149f90;
    }
    ctx->pc = 0x149F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x149F90u);
        ctx->pc = 0x149F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149F88u;
        // 0x149f8c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149F88u, 0x149F90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x149F90u;
label_149f90:
    // 0x149f90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x149f90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_149f94:
    // 0x149f94: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_149f98:
    if (ctx->pc == 0x149F98u) {
        ctx->pc = 0x149F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149F94u;
        // 0x149f98: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x149F9Cu;
        goto label_149f9c;
    }
    ctx->pc = 0x149F94u;
    {
        const bool branch_taken_0x149f94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x149F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149F94u;
        // 0x149f98: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149f94) {
            ctx->pc = 0x149FECu;
            goto label_149fec;
        }
    }
    ctx->pc = 0x149F9Cu;
label_149f9c:
    // 0x149f9c: 0x8e2b27e4  lw          $t3, 0x27E4($s1)
    ctx->pc = 0x149f9cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_149fa0:
    // 0x149fa0: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x149fa0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_149fa4:
    // 0x149fa4: 0x24a5a7f0  addiu       $a1, $a1, -0x5810
    ctx->pc = 0x149fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944752));
label_149fa8:
    // 0x149fa8: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x149fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_149fac:
    // 0x149fac: 0x2508a800  addiu       $t0, $t0, -0x5800
    ctx->pc = 0x149facu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294944768));
label_149fb0:
    // 0x149fb0: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x149fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_149fb4:
    // 0x149fb4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x149fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_149fb8:
    // 0x149fb8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x149fb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_149fbc:
    // 0x149fbc: 0x24090033  addiu       $t1, $zero, 0x33
    ctx->pc = 0x149fbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_149fc0:
    // 0x149fc0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x149fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_149fc4:
    // 0x149fc4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x149fc4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_149fc8:
    // 0x149fc8: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x149fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_149fcc:
    // 0x149fcc: 0x40f809  jalr        $v0
label_149fd0:
    if (ctx->pc == 0x149FD0u) {
        ctx->pc = 0x149FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149FCCu;
        // 0x149fd0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x149FD4u;
        goto label_149fd4;
    }
    ctx->pc = 0x149FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x149FD4u);
        ctx->pc = 0x149FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149FCCu;
        // 0x149fd0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149FCCu, 0x149FD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x149FD4u;
label_149fd4:
    // 0x149fd4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x149fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_149fd8:
    // 0x149fd8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x149fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_149fdc:
    // 0x149fdc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x149fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_149fe0:
    // 0x149fe0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x149fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_149fe4:
    // 0x149fe4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x149fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_149fe8:
    // 0x149fe8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x149fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_149fec:
    // 0x149fec: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x149fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_149ff0:
    // 0x149ff0: 0xae50bcd8  sw          $s0, -0x4328($s2)
    ctx->pc = 0x149ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294950104), GPR_U32(ctx, 16));
label_149ff4:
    // 0x149ff4: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x149ff4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_149ff8:
    // 0x149ff8: 0x2447f190  addiu       $a3, $v0, -0xE70
    ctx->pc = 0x149ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963600));
label_149ffc:
    // 0x149ffc: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x149ffcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14a000:
    // 0x14a000: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x14a000u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_14a004:
    // 0x14a004: 0x0  nop
    ctx->pc = 0x14a004u;
    // NOP
label_14a008:
    // 0x14a008: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x14a008u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_14a00c:
    // 0x14a00c: 0xace90004  sw          $t1, 0x4($a3)
    ctx->pc = 0x14a00cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 9));
label_14a010:
    // 0x14a010: 0x8d46bcd8  lw          $a2, -0x4328($t2)
    ctx->pc = 0x14a010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294950104)));
label_14a014:
    // 0x14a014: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x14a014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_14a018:
    // 0x14a018: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x14a018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_14a01c:
    // 0x14a01c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x14a01cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_14a020:
    // 0x14a020: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14a020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_14a024:
    // 0x14a024: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14a024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_14a028:
    // 0x14a028: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x14a028u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_14a02c:
    // 0x14a02c: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x14a02cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
label_14a030:
    // 0x14a030: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x14a030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_14a034:
    // 0x14a034: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x14a034u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_14a038:
    // 0x14a038: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_14a03c:
    if (ctx->pc == 0x14A03Cu) {
        ctx->pc = 0x14A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A038u;
        // 0x14a03c: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A040u;
        goto label_14a040;
    }
    ctx->pc = 0x14A038u;
    {
        const bool branch_taken_0x14a038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a038) {
            ctx->pc = 0x14A03Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A038u;
            // 0x14a03c: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A058u;
            goto label_14a058;
        }
    }
    ctx->pc = 0x14A040u;
label_14a040:
    // 0x14a040: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x14a040u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_14a044:
    // 0x14a044: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_14a048:
    if (ctx->pc == 0x14A048u) {
        ctx->pc = 0x14A048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A044u;
        // 0x14a048: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A04Cu;
        goto label_14a04c;
    }
    ctx->pc = 0x14A044u;
    {
        const bool branch_taken_0x14a044 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a044) {
            ctx->pc = 0x14A048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A044u;
            // 0x14a048: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A04Cu;
            goto label_14a04c;
        }
    }
    ctx->pc = 0x14A04Cu;
label_14a04c:
    // 0x14a04c: 0x1010  mfhi        $v0
    ctx->pc = 0x14a04cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_14a050:
    // 0x14a050: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x14a050u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
label_14a054:
    // 0x14a054: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x14a054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_14a058:
    // 0x14a058: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x14a058u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_14a05c:
    // 0x14a05c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x14a05cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_14a060:
    // 0x14a060: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14a060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14a064:
    // 0x14a064: 0x501ffe8  bgez        $t0, . + 4 + (-0x18 << 2)
label_14a068:
    if (ctx->pc == 0x14A068u) {
        ctx->pc = 0x14A068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A064u;
        // 0x14a068: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A06Cu;
        goto label_14a06c;
    }
    ctx->pc = 0x14A064u;
    {
        const bool branch_taken_0x14a064 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x14A068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A064u;
        // 0x14a068: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a064) {
            ctx->pc = 0x14A008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14a008;
        }
    }
    ctx->pc = 0x14A06Cu;
label_14a06c:
    // 0x14a06c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14a06cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14a070:
    // 0x14a070: 0xc1113a8  jal         func_444EA0
label_14a074:
    if (ctx->pc == 0x14A074u) {
        ctx->pc = 0x14A074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A070u;
        // 0x14a074: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A078u;
        goto label_14a078;
    }
    ctx->pc = 0x14A070u;
    SET_GPR_U32(ctx, 31, 0x14A078u);
    ctx->pc = 0x14A074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A070u;
    // 0x14a074: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444EA0u, 0x14A070u, 0x14A078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A078u;
label_14a078:
    // 0x14a078: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14a078u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14a07c:
    // 0x14a07c: 0x12400038  beqz        $s2, . + 4 + (0x38 << 2)
label_14a080:
    if (ctx->pc == 0x14A080u) {
        ctx->pc = 0x14A080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A07Cu;
        // 0x14a080: 0x2a020006  slti        $v0, $s0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A084u;
        goto label_14a084;
    }
    ctx->pc = 0x14A07Cu;
    {
        const bool branch_taken_0x14a07c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A07Cu;
        // 0x14a080: 0x2a020006  slti        $v0, $s0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a07c) {
            ctx->pc = 0x14A160u;
            goto label_14a160;
        }
    }
    ctx->pc = 0x14A084u;
label_14a084:
    // 0x14a084: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_14a088:
    if (ctx->pc == 0x14A088u) {
        ctx->pc = 0x14A088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A084u;
        // 0x14a088: 0x3c110055  lui         $s1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A08Cu;
        goto label_14a08c;
    }
    ctx->pc = 0x14A084u;
    {
        const bool branch_taken_0x14a084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A084u;
        // 0x14a088: 0x3c110055  lui         $s1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a084) {
            ctx->pc = 0x14A070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14a070;
        }
    }
    ctx->pc = 0x14A08Cu;
label_14a08c:
    // 0x14a08c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x14a08cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_14a090:
    // 0x14a090: 0x8e0269ec  lw          $v0, 0x69EC($s0)
    ctx->pc = 0x14a090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27116)));
label_14a094:
    // 0x14a094: 0x2634a870  addiu       $s4, $s1, -0x5790
    ctx->pc = 0x14a094u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944880));
label_14a098:
    // 0x14a098: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14a098u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_14a09c:
    // 0x14a09c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x14a09cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_14a0a0:
    // 0x14a0a0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14a0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_14a0a4:
    // 0x14a0a4: 0x24c6a878  addiu       $a2, $a2, -0x5788
    ctx->pc = 0x14a0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944888));
label_14a0a8:
    // 0x14a0a8: 0xc10c6b0  jal         func_431AC0
label_14a0ac:
    if (ctx->pc == 0x14A0ACu) {
        ctx->pc = 0x14A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A0A8u;
        // 0x14a0ac: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A0B0u;
        goto label_14a0b0;
    }
    ctx->pc = 0x14A0A8u;
    SET_GPR_U32(ctx, 31, 0x14A0B0u);
    ctx->pc = 0x14A0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A0A8u;
    // 0x14a0ac: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431AC0u, 0x14A0A8u, 0x14A0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A0B0u;
label_14a0b0:
    // 0x14a0b0: 0x8e0369ec  lw          $v1, 0x69EC($s0)
    ctx->pc = 0x14a0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27116)));
label_14a0b4:
    // 0x14a0b4: 0xc10c57e  jal         func_4315F8
label_14a0b8:
    if (ctx->pc == 0x14A0B8u) {
        ctx->pc = 0x14A0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A0B4u;
        // 0x14a0b8: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A0BCu;
        goto label_14a0bc;
    }
    ctx->pc = 0x14A0B4u;
    SET_GPR_U32(ctx, 31, 0x14A0BCu);
    ctx->pc = 0x14A0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A0B4u;
    // 0x14a0b8: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x14A0B4u, 0x14A0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A0BCu;
label_14a0bc:
    // 0x14a0bc: 0x2402ff88  addiu       $v0, $zero, -0x78
    ctx->pc = 0x14a0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967176));
label_14a0c0:
    // 0x14a0c0: 0x1242000e  beq         $s2, $v0, . + 4 + (0xE << 2)
label_14a0c4:
    if (ctx->pc == 0x14A0C4u) {
        ctx->pc = 0x14A0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A0C0u;
        // 0x14a0c4: 0x2a42ff89  slti        $v0, $s2, -0x77 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4294967177) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A0C8u;
        goto label_14a0c8;
    }
    ctx->pc = 0x14A0C0u;
    {
        const bool branch_taken_0x14a0c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A0C0u;
        // 0x14a0c4: 0x2a42ff89  slti        $v0, $s2, -0x77 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4294967177) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a0c0) {
            ctx->pc = 0x14A0FCu;
            goto label_14a0fc;
        }
    }
    ctx->pc = 0x14A0C8u;
label_14a0c8:
    // 0x14a0c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_14a0cc:
    if (ctx->pc == 0x14A0CCu) {
        ctx->pc = 0x14A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A0C8u;
        // 0x14a0cc: 0x2402ff87  addiu       $v0, $zero, -0x79 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967175));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A0D0u;
        goto label_14a0d0;
    }
    ctx->pc = 0x14A0C8u;
    {
        const bool branch_taken_0x14a0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A0C8u;
        // 0x14a0cc: 0x2402ff87  addiu       $v0, $zero, -0x79 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967175));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a0c8) {
            ctx->pc = 0x14A0E0u;
            goto label_14a0e0;
        }
    }
    ctx->pc = 0x14A0D0u;
label_14a0d0:
    // 0x14a0d0: 0x1242000f  beq         $s2, $v0, . + 4 + (0xF << 2)
label_14a0d4:
    if (ctx->pc == 0x14A0D4u) {
        ctx->pc = 0x14A0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A0D0u;
        // 0x14a0d4: 0x8e6269ec  lw          $v0, 0x69EC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 27116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A0D8u;
        goto label_14a0d8;
    }
    ctx->pc = 0x14A0D0u;
    {
        const bool branch_taken_0x14a0d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A0D0u;
        // 0x14a0d4: 0x8e6269ec  lw          $v0, 0x69EC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 27116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a0d0) {
            ctx->pc = 0x14A110u;
            goto label_14a110;
        }
    }
    ctx->pc = 0x14A0D8u;
label_14a0d8:
    // 0x14a0d8: 0x10000018  b           . + 4 + (0x18 << 2)
label_14a0dc:
    if (ctx->pc == 0x14A0DCu) {
        ctx->pc = 0x14A0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A0D8u;
        // 0x14a0dc: 0x3c060055  lui         $a2, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A0E0u;
        goto label_14a0e0;
    }
    ctx->pc = 0x14A0D8u;
    {
        const bool branch_taken_0x14a0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A0D8u;
        // 0x14a0dc: 0x3c060055  lui         $a2, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a0d8) {
            ctx->pc = 0x14A13Cu;
            goto label_14a13c;
        }
    }
    ctx->pc = 0x14A0E0u;
label_14a0e0:
    // 0x14a0e0: 0x2402ff9b  addiu       $v0, $zero, -0x65
    ctx->pc = 0x14a0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967195));
label_14a0e4:
    // 0x14a0e4: 0x16420014  bne         $s2, $v0, . + 4 + (0x14 << 2)
label_14a0e8:
    if (ctx->pc == 0x14A0E8u) {
        ctx->pc = 0x14A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A0E4u;
        // 0x14a0e8: 0x8e6269ec  lw          $v0, 0x69EC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 27116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A0ECu;
        goto label_14a0ec;
    }
    ctx->pc = 0x14A0E4u;
    {
        const bool branch_taken_0x14a0e4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x14A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A0E4u;
        // 0x14a0e8: 0x8e6269ec  lw          $v0, 0x69EC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 27116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a0e4) {
            ctx->pc = 0x14A138u;
            goto label_14a138;
        }
    }
    ctx->pc = 0x14A0ECu;
label_14a0ec:
    // 0x14a0ec: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14a0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_14a0f0:
    // 0x14a0f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x14a0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_14a0f4:
    // 0x14a0f4: 0x10000009  b           . + 4 + (0x9 << 2)
label_14a0f8:
    if (ctx->pc == 0x14A0F8u) {
        ctx->pc = 0x14A0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A0F4u;
        // 0x14a0f8: 0x24c6a8b0  addiu       $a2, $a2, -0x5750 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A0FCu;
        goto label_14a0fc;
    }
    ctx->pc = 0x14A0F4u;
    {
        const bool branch_taken_0x14a0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A0F4u;
        // 0x14a0f8: 0x24c6a8b0  addiu       $a2, $a2, -0x5750 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a0f4) {
            ctx->pc = 0x14A11Cu;
            goto label_14a11c;
        }
    }
    ctx->pc = 0x14A0FCu;
label_14a0fc:
    // 0x14a0fc: 0x8e6269ec  lw          $v0, 0x69EC($s3)
    ctx->pc = 0x14a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 27116)));
label_14a100:
    // 0x14a100: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14a100u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_14a104:
    // 0x14a104: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x14a104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_14a108:
    // 0x14a108: 0x10000004  b           . + 4 + (0x4 << 2)
label_14a10c:
    if (ctx->pc == 0x14A10Cu) {
        ctx->pc = 0x14A10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A108u;
        // 0x14a10c: 0x24c6a8e0  addiu       $a2, $a2, -0x5720 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A110u;
        goto label_14a110;
    }
    ctx->pc = 0x14A108u;
    {
        const bool branch_taken_0x14a108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A108u;
        // 0x14a10c: 0x24c6a8e0  addiu       $a2, $a2, -0x5720 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294944992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a108) {
            ctx->pc = 0x14A11Cu;
            goto label_14a11c;
        }
    }
    ctx->pc = 0x14A110u;
label_14a110:
    // 0x14a110: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14a110u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_14a114:
    // 0x14a114: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x14a114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_14a118:
    // 0x14a118: 0x24c6a918  addiu       $a2, $a2, -0x56E8
    ctx->pc = 0x14a118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945048));
label_14a11c:
    // 0x14a11c: 0xc10c6b0  jal         func_431AC0
label_14a120:
    if (ctx->pc == 0x14A120u) {
        ctx->pc = 0x14A120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A11Cu;
        // 0x14a120: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A124u;
        goto label_14a124;
    }
    ctx->pc = 0x14A11Cu;
    SET_GPR_U32(ctx, 31, 0x14A124u);
    ctx->pc = 0x14A120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A11Cu;
    // 0x14a120: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431AC0u, 0x14A11Cu, 0x14A124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A124u;
label_14a124:
    // 0x14a124: 0x8e6369ec  lw          $v1, 0x69EC($s3)
    ctx->pc = 0x14a124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 27116)));
label_14a128:
    // 0x14a128: 0xc10c57e  jal         func_4315F8
label_14a12c:
    if (ctx->pc == 0x14A12Cu) {
        ctx->pc = 0x14A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A128u;
        // 0x14a12c: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A130u;
        goto label_14a130;
    }
    ctx->pc = 0x14A128u;
    SET_GPR_U32(ctx, 31, 0x14A130u);
    ctx->pc = 0x14A12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A128u;
    // 0x14a12c: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x14A128u, 0x14A130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A130u;
label_14a130:
    // 0x14a130: 0x1000000c  b           . + 4 + (0xC << 2)
label_14a134:
    if (ctx->pc == 0x14A134u) {
        ctx->pc = 0x14A134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A130u;
        // 0x14a134: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A138u;
        goto label_14a138;
    }
    ctx->pc = 0x14A130u;
    {
        const bool branch_taken_0x14a130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A130u;
        // 0x14a134: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a130) {
            ctx->pc = 0x14A164u;
            goto label_14a164;
        }
    }
    ctx->pc = 0x14A138u;
label_14a138:
    // 0x14a138: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14a138u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_14a13c:
    // 0x14a13c: 0x2625a870  addiu       $a1, $s1, -0x5790
    ctx->pc = 0x14a13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944880));
label_14a140:
    // 0x14a140: 0x24c6a950  addiu       $a2, $a2, -0x56B0
    ctx->pc = 0x14a140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945104));
label_14a144:
    // 0x14a144: 0xc10c6b0  jal         func_431AC0
label_14a148:
    if (ctx->pc == 0x14A148u) {
        ctx->pc = 0x14A148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A144u;
        // 0x14a148: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A14Cu;
        goto label_14a14c;
    }
    ctx->pc = 0x14A144u;
    SET_GPR_U32(ctx, 31, 0x14A14Cu);
    ctx->pc = 0x14A148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A144u;
    // 0x14a148: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431AC0u, 0x14A144u, 0x14A14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A14Cu;
label_14a14c:
    // 0x14a14c: 0x8e6369ec  lw          $v1, 0x69EC($s3)
    ctx->pc = 0x14a14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 27116)));
label_14a150:
    // 0x14a150: 0xc10c57e  jal         func_4315F8
label_14a154:
    if (ctx->pc == 0x14A154u) {
        ctx->pc = 0x14A154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A150u;
        // 0x14a154: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A158u;
        goto label_14a158;
    }
    ctx->pc = 0x14A150u;
    SET_GPR_U32(ctx, 31, 0x14A158u);
    ctx->pc = 0x14A154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A150u;
    // 0x14a154: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x14A150u, 0x14A158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A158u;
label_14a158:
    // 0x14a158: 0x10000002  b           . + 4 + (0x2 << 2)
label_14a15c:
    if (ctx->pc == 0x14A15Cu) {
        ctx->pc = 0x14A15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A158u;
        // 0x14a15c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A160u;
        goto label_14a160;
    }
    ctx->pc = 0x14A158u;
    {
        const bool branch_taken_0x14a158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A158u;
        // 0x14a15c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a158) {
            ctx->pc = 0x14A164u;
            goto label_14a164;
        }
    }
    ctx->pc = 0x14A160u;
label_14a160:
    // 0x14a160: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14a160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14a164:
    // 0x14a164: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x14a164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_14a168:
    // 0x14a168: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x14a168u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_14a16c:
    // 0x14a16c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14a16cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14a170:
    // 0x14a170: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x14a170u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14a174:
    // 0x14a174: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x14a174u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14a178:
    // 0x14a178: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14a178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14a17c:
    // 0x14a17c: 0x3e00008  jr          $ra
label_14a180:
    if (ctx->pc == 0x14A180u) {
        ctx->pc = 0x14A180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A17Cu;
        // 0x14a180: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A184u;
        goto label_14a184;
    }
    ctx->pc = 0x14A17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A17Cu;
        // 0x14a180: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A184u;
label_14a184:
    // 0x14a184: 0x0  nop
    ctx->pc = 0x14a184u;
    // NOP
    ctx->pc = 0x14a188u;
}
