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

// Function: sub_00309EA0
// Address: 0x309ea0 - 0x30a150
void sub_00309EA0_0x309ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309EA0_0x309ea0");
#endif

    switch (ctx->pc) {
        case 0x309ea0u: goto label_309ea0;
        case 0x309ea4u: goto label_309ea4;
        case 0x309ea8u: goto label_309ea8;
        case 0x309eacu: goto label_309eac;
        case 0x309eb0u: goto label_309eb0;
        case 0x309eb4u: goto label_309eb4;
        case 0x309eb8u: goto label_309eb8;
        case 0x309ebcu: goto label_309ebc;
        case 0x309ec0u: goto label_309ec0;
        case 0x309ec4u: goto label_309ec4;
        case 0x309ec8u: goto label_309ec8;
        case 0x309eccu: goto label_309ecc;
        case 0x309ed0u: goto label_309ed0;
        case 0x309ed4u: goto label_309ed4;
        case 0x309ed8u: goto label_309ed8;
        case 0x309edcu: goto label_309edc;
        case 0x309ee0u: goto label_309ee0;
        case 0x309ee4u: goto label_309ee4;
        case 0x309ee8u: goto label_309ee8;
        case 0x309eecu: goto label_309eec;
        case 0x309ef0u: goto label_309ef0;
        case 0x309ef4u: goto label_309ef4;
        case 0x309ef8u: goto label_309ef8;
        case 0x309efcu: goto label_309efc;
        case 0x309f00u: goto label_309f00;
        case 0x309f04u: goto label_309f04;
        case 0x309f08u: goto label_309f08;
        case 0x309f0cu: goto label_309f0c;
        case 0x309f10u: goto label_309f10;
        case 0x309f14u: goto label_309f14;
        case 0x309f18u: goto label_309f18;
        case 0x309f1cu: goto label_309f1c;
        case 0x309f20u: goto label_309f20;
        case 0x309f24u: goto label_309f24;
        case 0x309f28u: goto label_309f28;
        case 0x309f2cu: goto label_309f2c;
        case 0x309f30u: goto label_309f30;
        case 0x309f34u: goto label_309f34;
        case 0x309f38u: goto label_309f38;
        case 0x309f3cu: goto label_309f3c;
        case 0x309f40u: goto label_309f40;
        case 0x309f44u: goto label_309f44;
        case 0x309f48u: goto label_309f48;
        case 0x309f4cu: goto label_309f4c;
        case 0x309f50u: goto label_309f50;
        case 0x309f54u: goto label_309f54;
        case 0x309f58u: goto label_309f58;
        case 0x309f5cu: goto label_309f5c;
        case 0x309f60u: goto label_309f60;
        case 0x309f64u: goto label_309f64;
        case 0x309f68u: goto label_309f68;
        case 0x309f6cu: goto label_309f6c;
        case 0x309f70u: goto label_309f70;
        case 0x309f74u: goto label_309f74;
        case 0x309f78u: goto label_309f78;
        case 0x309f7cu: goto label_309f7c;
        case 0x309f80u: goto label_309f80;
        case 0x309f84u: goto label_309f84;
        case 0x309f88u: goto label_309f88;
        case 0x309f8cu: goto label_309f8c;
        case 0x309f90u: goto label_309f90;
        case 0x309f94u: goto label_309f94;
        case 0x309f98u: goto label_309f98;
        case 0x309f9cu: goto label_309f9c;
        case 0x309fa0u: goto label_309fa0;
        case 0x309fa4u: goto label_309fa4;
        case 0x309fa8u: goto label_309fa8;
        case 0x309facu: goto label_309fac;
        case 0x309fb0u: goto label_309fb0;
        case 0x309fb4u: goto label_309fb4;
        case 0x309fb8u: goto label_309fb8;
        case 0x309fbcu: goto label_309fbc;
        case 0x309fc0u: goto label_309fc0;
        case 0x309fc4u: goto label_309fc4;
        case 0x309fc8u: goto label_309fc8;
        case 0x309fccu: goto label_309fcc;
        case 0x309fd0u: goto label_309fd0;
        case 0x309fd4u: goto label_309fd4;
        case 0x309fd8u: goto label_309fd8;
        case 0x309fdcu: goto label_309fdc;
        case 0x309fe0u: goto label_309fe0;
        case 0x309fe4u: goto label_309fe4;
        case 0x309fe8u: goto label_309fe8;
        case 0x309fecu: goto label_309fec;
        case 0x309ff0u: goto label_309ff0;
        case 0x309ff4u: goto label_309ff4;
        case 0x309ff8u: goto label_309ff8;
        case 0x309ffcu: goto label_309ffc;
        case 0x30a000u: goto label_30a000;
        case 0x30a004u: goto label_30a004;
        case 0x30a008u: goto label_30a008;
        case 0x30a00cu: goto label_30a00c;
        case 0x30a010u: goto label_30a010;
        case 0x30a014u: goto label_30a014;
        case 0x30a018u: goto label_30a018;
        case 0x30a01cu: goto label_30a01c;
        case 0x30a020u: goto label_30a020;
        case 0x30a024u: goto label_30a024;
        case 0x30a028u: goto label_30a028;
        case 0x30a02cu: goto label_30a02c;
        case 0x30a030u: goto label_30a030;
        case 0x30a034u: goto label_30a034;
        case 0x30a038u: goto label_30a038;
        case 0x30a03cu: goto label_30a03c;
        case 0x30a040u: goto label_30a040;
        case 0x30a044u: goto label_30a044;
        case 0x30a048u: goto label_30a048;
        case 0x30a04cu: goto label_30a04c;
        case 0x30a050u: goto label_30a050;
        case 0x30a054u: goto label_30a054;
        case 0x30a058u: goto label_30a058;
        case 0x30a05cu: goto label_30a05c;
        case 0x30a060u: goto label_30a060;
        case 0x30a064u: goto label_30a064;
        case 0x30a068u: goto label_30a068;
        case 0x30a06cu: goto label_30a06c;
        case 0x30a070u: goto label_30a070;
        case 0x30a074u: goto label_30a074;
        case 0x30a078u: goto label_30a078;
        case 0x30a07cu: goto label_30a07c;
        case 0x30a080u: goto label_30a080;
        case 0x30a084u: goto label_30a084;
        case 0x30a088u: goto label_30a088;
        case 0x30a08cu: goto label_30a08c;
        case 0x30a090u: goto label_30a090;
        case 0x30a094u: goto label_30a094;
        case 0x30a098u: goto label_30a098;
        case 0x30a09cu: goto label_30a09c;
        case 0x30a0a0u: goto label_30a0a0;
        case 0x30a0a4u: goto label_30a0a4;
        case 0x30a0a8u: goto label_30a0a8;
        case 0x30a0acu: goto label_30a0ac;
        case 0x30a0b0u: goto label_30a0b0;
        case 0x30a0b4u: goto label_30a0b4;
        case 0x30a0b8u: goto label_30a0b8;
        case 0x30a0bcu: goto label_30a0bc;
        case 0x30a0c0u: goto label_30a0c0;
        case 0x30a0c4u: goto label_30a0c4;
        case 0x30a0c8u: goto label_30a0c8;
        case 0x30a0ccu: goto label_30a0cc;
        case 0x30a0d0u: goto label_30a0d0;
        case 0x30a0d4u: goto label_30a0d4;
        case 0x30a0d8u: goto label_30a0d8;
        case 0x30a0dcu: goto label_30a0dc;
        case 0x30a0e0u: goto label_30a0e0;
        case 0x30a0e4u: goto label_30a0e4;
        case 0x30a0e8u: goto label_30a0e8;
        case 0x30a0ecu: goto label_30a0ec;
        case 0x30a0f0u: goto label_30a0f0;
        case 0x30a0f4u: goto label_30a0f4;
        case 0x30a0f8u: goto label_30a0f8;
        case 0x30a0fcu: goto label_30a0fc;
        case 0x30a100u: goto label_30a100;
        case 0x30a104u: goto label_30a104;
        case 0x30a108u: goto label_30a108;
        case 0x30a10cu: goto label_30a10c;
        case 0x30a110u: goto label_30a110;
        case 0x30a114u: goto label_30a114;
        case 0x30a118u: goto label_30a118;
        case 0x30a11cu: goto label_30a11c;
        case 0x30a120u: goto label_30a120;
        case 0x30a124u: goto label_30a124;
        case 0x30a128u: goto label_30a128;
        case 0x30a12cu: goto label_30a12c;
        case 0x30a130u: goto label_30a130;
        case 0x30a134u: goto label_30a134;
        case 0x30a138u: goto label_30a138;
        case 0x30a13cu: goto label_30a13c;
        case 0x30a140u: goto label_30a140;
        case 0x30a144u: goto label_30a144;
        case 0x30a148u: goto label_30a148;
        case 0x30a14cu: goto label_30a14c;
        default: break;
    }

    ctx->pc = 0x309ea0u;

label_309ea0:
    // 0x309ea0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x309ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_309ea4:
    // 0x309ea4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x309ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_309ea8:
    // 0x309ea8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x309ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_309eac:
    // 0x309eac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x309eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_309eb0:
    // 0x309eb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x309eb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_309eb4:
    // 0x309eb4: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x309eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_309eb8:
    // 0x309eb8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x309eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_309ebc:
    // 0x309ebc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x309ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_309ec0:
    // 0x309ec0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x309ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_309ec4:
    // 0x309ec4: 0xc087502  jal         func_21D408
label_309ec8:
    if (ctx->pc == 0x309EC8u) {
        ctx->pc = 0x309EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309EC4u;
        // 0x309ec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309ECCu;
        goto label_309ecc;
    }
    ctx->pc = 0x309EC4u;
    SET_GPR_U32(ctx, 31, 0x309ECCu);
    ctx->pc = 0x309EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309EC4u;
    // 0x309ec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x309EC4u, 0x309ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309ECCu;
label_309ecc:
    // 0x309ecc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x309eccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_309ed0:
    // 0x309ed0: 0xc0a3630  jal         func_28D8C0
label_309ed4:
    if (ctx->pc == 0x309ED4u) {
        ctx->pc = 0x309ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309ED0u;
        // 0x309ed4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309ED8u;
        goto label_309ed8;
    }
    ctx->pc = 0x309ED0u;
    SET_GPR_U32(ctx, 31, 0x309ED8u);
    ctx->pc = 0x309ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309ED0u;
    // 0x309ed4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x309ED0u, 0x309ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309ED8u;
label_309ed8:
    // 0x309ed8: 0xc0a3628  jal         func_28D8A0
label_309edc:
    if (ctx->pc == 0x309EDCu) {
        ctx->pc = 0x309EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309ED8u;
        // 0x309edc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309EE0u;
        goto label_309ee0;
    }
    ctx->pc = 0x309ED8u;
    SET_GPR_U32(ctx, 31, 0x309EE0u);
    ctx->pc = 0x309EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309ED8u;
    // 0x309edc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x309ED8u, 0x309EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309EE0u;
label_309ee0:
    // 0x309ee0: 0x8e0300cc  lw          $v1, 0xCC($s0)
    ctx->pc = 0x309ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_309ee4:
    // 0x309ee4: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x309ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_309ee8:
    // 0x309ee8: 0x1462002b  bne         $v1, $v0, . + 4 + (0x2B << 2)
label_309eec:
    if (ctx->pc == 0x309EECu) {
        ctx->pc = 0x309EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309EE8u;
        // 0x309eec: 0x24020077  addiu       $v0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309EF0u;
        goto label_309ef0;
    }
    ctx->pc = 0x309EE8u;
    {
        const bool branch_taken_0x309ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x309EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309EE8u;
        // 0x309eec: 0x24020077  addiu       $v0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309ee8) {
            ctx->pc = 0x309F98u;
            goto label_309f98;
        }
    }
    ctx->pc = 0x309EF0u;
label_309ef0:
    // 0x309ef0: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x309ef0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_309ef4:
    // 0x309ef4: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x309ef4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_309ef8:
    // 0x309ef8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x309ef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_309efc:
    // 0x309efc: 0x262c0050  addiu       $t4, $s1, 0x50
    ctx->pc = 0x309efcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_309f00:
    // 0x309f00: 0x262b0056  addiu       $t3, $s1, 0x56
    ctx->pc = 0x309f00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 86));
label_309f04:
    // 0x309f04: 0x262a005c  addiu       $t2, $s1, 0x5C
    ctx->pc = 0x309f04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
label_309f08:
    // 0x309f08: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x309f08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_309f0c:
    // 0x309f0c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x309f0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_309f10:
    // 0x309f10: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x309f10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_309f14:
    // 0x309f14: 0x0  nop
    ctx->pc = 0x309f14u;
    // NOP
label_309f18:
    // 0x309f18: 0x1861021  addu        $v0, $t4, $a2
    ctx->pc = 0x309f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
label_309f1c:
    // 0x309f1c: 0x1661821  addu        $v1, $t3, $a2
    ctx->pc = 0x309f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
label_309f20:
    // 0x309f20: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x309f20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_309f24:
    // 0x309f24: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x309f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
label_309f28:
    // 0x309f28: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x309f28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_309f2c:
    // 0x309f2c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x309f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_309f30:
    // 0x309f30: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x309f30u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
label_309f34:
    // 0x309f34: 0x2cc30003  sltiu       $v1, $a2, 0x3
    ctx->pc = 0x309f34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_309f38:
    // 0x309f38: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x309f38u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_309f3c:
    // 0x309f3c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x309f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_309f40:
    // 0x309f40: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x309f40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_309f44:
    // 0x309f44: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x309f44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_309f48:
    // 0x309f48: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x309f48u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_309f4c:
    // 0x309f4c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_309f50:
    if (ctx->pc == 0x309F50u) {
        ctx->pc = 0x309F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F4Cu;
        // 0x309f50: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309F54u;
        goto label_309f54;
    }
    ctx->pc = 0x309F4Cu;
    {
        const bool branch_taken_0x309f4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x309F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F4Cu;
        // 0x309f50: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309f4c) {
            ctx->pc = 0x309F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309f18;
        }
    }
    ctx->pc = 0x309F54u;
label_309f54:
    // 0x309f54: 0xc0a4e54  jal         func_293950
label_309f58:
    if (ctx->pc == 0x309F58u) {
        ctx->pc = 0x309F5Cu;
        goto label_309f5c;
    }
    ctx->pc = 0x309F54u;
    SET_GPR_U32(ctx, 31, 0x309F5Cu);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x309F54u, 0x309F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309F5Cu;
label_309f5c:
    // 0x309f5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x309f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_309f60:
    // 0x309f60: 0x1200004d  beqz        $s0, . + 4 + (0x4D << 2)
label_309f64:
    if (ctx->pc == 0x309F64u) {
        ctx->pc = 0x309F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F60u;
        // 0x309f64: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309F68u;
        goto label_309f68;
    }
    ctx->pc = 0x309F60u;
    {
        const bool branch_taken_0x309f60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x309F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F60u;
        // 0x309f64: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309f60) {
            ctx->pc = 0x30A098u;
            goto label_30a098;
        }
    }
    ctx->pc = 0x309F68u;
label_309f68:
    // 0x309f68: 0x92230068  lbu         $v1, 0x68($s1)
    ctx->pc = 0x309f68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 104)));
label_309f6c:
    // 0x309f6c: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x309f6cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_309f70:
    // 0x309f70: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x309f70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_309f74:
    // 0x309f74: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x309f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_309f78:
    // 0x309f78: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x309f78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_309f7c:
    // 0x309f7c: 0x90660061  lbu         $a2, 0x61($v1)
    ctx->pc = 0x309f7cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 97)));
label_309f80:
    // 0x309f80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x309f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_309f84:
    // 0x309f84: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x309f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_309f88:
    // 0x309f88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x309f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_309f8c:
    // 0x309f8c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x309f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_309f90:
    // 0x309f90: 0x1000003f  b           . + 4 + (0x3F << 2)
label_309f94:
    if (ctx->pc == 0x309F94u) {
        ctx->pc = 0x309F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F90u;
        // 0x309f94: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309F98u;
        goto label_309f98;
    }
    ctx->pc = 0x309F90u;
    {
        const bool branch_taken_0x309f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F90u;
        // 0x309f94: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309f90) {
            ctx->pc = 0x30A090u;
            goto label_30a090;
        }
    }
    ctx->pc = 0x309F98u;
label_309f98:
    // 0x309f98: 0x14620044  bne         $v1, $v0, . + 4 + (0x44 << 2)
label_309f9c:
    if (ctx->pc == 0x309F9Cu) {
        ctx->pc = 0x309F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F98u;
        // 0x309f9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309FA0u;
        goto label_309fa0;
    }
    ctx->pc = 0x309F98u;
    {
        const bool branch_taken_0x309f98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x309F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F98u;
        // 0x309f9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309f98) {
            ctx->pc = 0x30A0ACu;
            goto label_30a0ac;
        }
    }
    ctx->pc = 0x309FA0u;
label_309fa0:
    // 0x309fa0: 0x92230068  lbu         $v1, 0x68($s1)
    ctx->pc = 0x309fa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 104)));
label_309fa4:
    // 0x309fa4: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_309fa8:
    if (ctx->pc == 0x309FA8u) {
        ctx->pc = 0x309FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309FA4u;
        // 0x309fa8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309FACu;
        goto label_309fac;
    }
    ctx->pc = 0x309FA4u;
    {
        const bool branch_taken_0x309fa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x309FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309FA4u;
        // 0x309fa8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309fa4) {
            ctx->pc = 0x309FECu;
            goto label_309fec;
        }
    }
    ctx->pc = 0x309FACu;
label_309fac:
    // 0x309fac: 0xc0a4e54  jal         func_293950
label_309fb0:
    if (ctx->pc == 0x309FB0u) {
        ctx->pc = 0x309FB4u;
        goto label_309fb4;
    }
    ctx->pc = 0x309FACu;
    SET_GPR_U32(ctx, 31, 0x309FB4u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x309FACu, 0x309FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309FB4u;
label_309fb4:
    // 0x309fb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x309fb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_309fb8:
    // 0x309fb8: 0x12000037  beqz        $s0, . + 4 + (0x37 << 2)
label_309fbc:
    if (ctx->pc == 0x309FBCu) {
        ctx->pc = 0x309FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309FB8u;
        // 0x309fbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309FC0u;
        goto label_309fc0;
    }
    ctx->pc = 0x309FB8u;
    {
        const bool branch_taken_0x309fb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x309FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309FB8u;
        // 0x309fbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309fb8) {
            ctx->pc = 0x30A098u;
            goto label_30a098;
        }
    }
    ctx->pc = 0x309FC0u;
label_309fc0:
    // 0x309fc0: 0x92220068  lbu         $v0, 0x68($s1)
    ctx->pc = 0x309fc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 104)));
label_309fc4:
    // 0x309fc4: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x309fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_309fc8:
    // 0x309fc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x309fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_309fcc:
    // 0x309fcc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x309fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_309fd0:
    // 0x309fd0: 0x92280054  lbu         $t0, 0x54($s1)
    ctx->pc = 0x309fd0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
label_309fd4:
    // 0x309fd4: 0x90470064  lbu         $a3, 0x64($v0)
    ctx->pc = 0x309fd4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
label_309fd8:
    // 0x309fd8: 0x262a0030  addiu       $t2, $s1, 0x30
    ctx->pc = 0x309fd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_309fdc:
    // 0x309fdc: 0xc0bb42a  jal         func_2ED0A8
label_309fe0:
    if (ctx->pc == 0x309FE0u) {
        ctx->pc = 0x309FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309FDCu;
        // 0x309fe0: 0x9229005a  lbu         $t1, 0x5A($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309FE4u;
        goto label_309fe4;
    }
    ctx->pc = 0x309FDCu;
    SET_GPR_U32(ctx, 31, 0x309FE4u);
    ctx->pc = 0x309FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309FDCu;
    // 0x309fe0: 0x9229005a  lbu         $t1, 0x5A($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED0A8u, 0x309FDCu, 0x309FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309FE4u;
label_309fe4:
    // 0x309fe4: 0x1000002d  b           . + 4 + (0x2D << 2)
label_309fe8:
    if (ctx->pc == 0x309FE8u) {
        ctx->pc = 0x309FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309FE4u;
        // 0x309fe8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309FECu;
        goto label_309fec;
    }
    ctx->pc = 0x309FE4u;
    {
        const bool branch_taken_0x309fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309FE4u;
        // 0x309fe8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309fe4) {
            ctx->pc = 0x30A09Cu;
            goto label_30a09c;
        }
    }
    ctx->pc = 0x309FECu;
label_309fec:
    // 0x309fec: 0x5462003c  bnel        $v1, $v0, . + 4 + (0x3C << 2)
label_309ff0:
    if (ctx->pc == 0x309FF0u) {
        ctx->pc = 0x309FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309FECu;
        // 0x309ff0: 0x8242002c  lb          $v0, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309FF4u;
        goto label_309ff4;
    }
    ctx->pc = 0x309FECu;
    {
        const bool branch_taken_0x309fec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x309fec) {
            ctx->pc = 0x309FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309FECu;
            // 0x309ff0: 0x8242002c  lb          $v0, 0x2C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A0E0u;
            goto label_30a0e0;
        }
    }
    ctx->pc = 0x309FF4u;
label_309ff4:
    // 0x309ff4: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x309ff4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_309ff8:
    // 0x309ff8: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x309ff8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_309ffc:
    // 0x309ffc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x309ffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a000:
    // 0x30a000: 0x262c0053  addiu       $t4, $s1, 0x53
    ctx->pc = 0x30a000u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 17), 83));
label_30a004:
    // 0x30a004: 0x262b0059  addiu       $t3, $s1, 0x59
    ctx->pc = 0x30a004u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 89));
label_30a008:
    // 0x30a008: 0x262a005f  addiu       $t2, $s1, 0x5F
    ctx->pc = 0x30a008u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 95));
label_30a00c:
    // 0x30a00c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x30a00cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30a010:
    // 0x30a010: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x30a010u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_30a014:
    // 0x30a014: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x30a014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_30a018:
    // 0x30a018: 0x1861021  addu        $v0, $t4, $a2
    ctx->pc = 0x30a018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
label_30a01c:
    // 0x30a01c: 0x1661821  addu        $v1, $t3, $a2
    ctx->pc = 0x30a01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
label_30a020:
    // 0x30a020: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x30a020u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_30a024:
    // 0x30a024: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x30a024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
label_30a028:
    // 0x30a028: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x30a028u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_30a02c:
    // 0x30a02c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x30a02cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_30a030:
    // 0x30a030: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x30a030u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
label_30a034:
    // 0x30a034: 0x2cc30003  sltiu       $v1, $a2, 0x3
    ctx->pc = 0x30a034u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_30a038:
    // 0x30a038: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x30a038u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_30a03c:
    // 0x30a03c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x30a03cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_30a040:
    // 0x30a040: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x30a040u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_30a044:
    // 0x30a044: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x30a044u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_30a048:
    // 0x30a048: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x30a048u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_30a04c:
    // 0x30a04c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_30a050:
    if (ctx->pc == 0x30A050u) {
        ctx->pc = 0x30A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A04Cu;
        // 0x30a050: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A054u;
        goto label_30a054;
    }
    ctx->pc = 0x30A04Cu;
    {
        const bool branch_taken_0x30a04c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A04Cu;
        // 0x30a050: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a04c) {
            ctx->pc = 0x30A018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a018;
        }
    }
    ctx->pc = 0x30A054u;
label_30a054:
    // 0x30a054: 0xc0a4e54  jal         func_293950
label_30a058:
    if (ctx->pc == 0x30A058u) {
        ctx->pc = 0x30A05Cu;
        goto label_30a05c;
    }
    ctx->pc = 0x30A054u;
    SET_GPR_U32(ctx, 31, 0x30A05Cu);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x30A054u, 0x30A05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A05Cu;
label_30a05c:
    // 0x30a05c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30a05cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a060:
    // 0x30a060: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_30a064:
    if (ctx->pc == 0x30A064u) {
        ctx->pc = 0x30A064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A060u;
        // 0x30a064: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A068u;
        goto label_30a068;
    }
    ctx->pc = 0x30A060u;
    {
        const bool branch_taken_0x30a060 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A060u;
        // 0x30a064: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a060) {
            ctx->pc = 0x30A098u;
            goto label_30a098;
        }
    }
    ctx->pc = 0x30A068u;
label_30a068:
    // 0x30a068: 0x92220068  lbu         $v0, 0x68($s1)
    ctx->pc = 0x30a068u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 104)));
label_30a06c:
    // 0x30a06c: 0x8e2a0024  lw          $t2, 0x24($s1)
    ctx->pc = 0x30a06cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_30a070:
    // 0x30a070: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x30a070u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30a074:
    // 0x30a074: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x30a074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_30a078:
    // 0x30a078: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x30a078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_30a07c:
    // 0x30a07c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30a07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30a080:
    // 0x30a080: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x30a080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30a084:
    // 0x30a084: 0x90460064  lbu         $a2, 0x64($v0)
    ctx->pc = 0x30a084u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
label_30a088:
    // 0x30a088: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x30a088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_30a08c:
    // 0x30a08c: 0x262b0030  addiu       $t3, $s1, 0x30
    ctx->pc = 0x30a08cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_30a090:
    // 0x30a090: 0xc0ba0a2  jal         func_2E8288
label_30a094:
    if (ctx->pc == 0x30A094u) {
        ctx->pc = 0x30A098u;
        goto label_30a098;
    }
    ctx->pc = 0x30A090u;
    SET_GPR_U32(ctx, 31, 0x30A098u);
    ctx->pc = 0x2E8288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8288u, 0x30A090u, 0x30A098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A098u;
label_30a098:
    // 0x30a098: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30a098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30a09c:
    // 0x30a09c: 0xc0a35d6  jal         func_28D758
label_30a0a0:
    if (ctx->pc == 0x30A0A0u) {
        ctx->pc = 0x30A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A09Cu;
        // 0x30a0a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A0A4u;
        goto label_30a0a4;
    }
    ctx->pc = 0x30A09Cu;
    SET_GPR_U32(ctx, 31, 0x30A0A4u);
    ctx->pc = 0x30A0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A09Cu;
    // 0x30a0a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x30A09Cu, 0x30A0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A0A4u;
label_30a0a4:
    // 0x30a0a4: 0x1000000e  b           . + 4 + (0xE << 2)
label_30a0a8:
    if (ctx->pc == 0x30A0A8u) {
        ctx->pc = 0x30A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A0A4u;
        // 0x30a0a8: 0x8242002c  lb          $v0, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A0ACu;
        goto label_30a0ac;
    }
    ctx->pc = 0x30A0A4u;
    {
        const bool branch_taken_0x30a0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A0A4u;
        // 0x30a0a8: 0x8242002c  lb          $v0, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a0a4) {
            ctx->pc = 0x30A0E0u;
            goto label_30a0e0;
        }
    }
    ctx->pc = 0x30A0ACu;
label_30a0ac:
    // 0x30a0ac: 0xc0a4e54  jal         func_293950
label_30a0b0:
    if (ctx->pc == 0x30A0B0u) {
        ctx->pc = 0x30A0B4u;
        goto label_30a0b4;
    }
    ctx->pc = 0x30A0ACu;
    SET_GPR_U32(ctx, 31, 0x30A0B4u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x30A0ACu, 0x30A0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A0B4u;
label_30a0b4:
    // 0x30a0b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30a0b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a0b8:
    // 0x30a0b8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_30a0bc:
    if (ctx->pc == 0x30A0BCu) {
        ctx->pc = 0x30A0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A0B8u;
        // 0x30a0bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A0C0u;
        goto label_30a0c0;
    }
    ctx->pc = 0x30A0B8u;
    {
        const bool branch_taken_0x30a0b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A0B8u;
        // 0x30a0bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a0b8) {
            ctx->pc = 0x30A0D0u;
            goto label_30a0d0;
        }
    }
    ctx->pc = 0x30A0C0u;
label_30a0c0:
    // 0x30a0c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x30a0c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30a0c4:
    // 0x30a0c4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30a0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30a0c8:
    // 0x30a0c8: 0xc0bbbb8  jal         func_2EEEE0
label_30a0cc:
    if (ctx->pc == 0x30A0CCu) {
        ctx->pc = 0x30A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A0C8u;
        // 0x30a0cc: 0x26270040  addiu       $a3, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A0D0u;
        goto label_30a0d0;
    }
    ctx->pc = 0x30A0C8u;
    SET_GPR_U32(ctx, 31, 0x30A0D0u);
    ctx->pc = 0x30A0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A0C8u;
    // 0x30a0cc: 0x26270040  addiu       $a3, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EEEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EEEE0u, 0x30A0C8u, 0x30A0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A0D0u;
label_30a0d0:
    // 0x30a0d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30a0d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30a0d4:
    // 0x30a0d4: 0xc0a35d6  jal         func_28D758
label_30a0d8:
    if (ctx->pc == 0x30A0D8u) {
        ctx->pc = 0x30A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A0D4u;
        // 0x30a0d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A0DCu;
        goto label_30a0dc;
    }
    ctx->pc = 0x30A0D4u;
    SET_GPR_U32(ctx, 31, 0x30A0DCu);
    ctx->pc = 0x30A0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A0D4u;
    // 0x30a0d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x30A0D4u, 0x30A0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A0DCu;
label_30a0dc:
    // 0x30a0dc: 0x8242002c  lb          $v0, 0x2C($s2)
    ctx->pc = 0x30a0dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
label_30a0e0:
    // 0x30a0e0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_30a0e4:
    if (ctx->pc == 0x30A0E4u) {
        ctx->pc = 0x30A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A0E0u;
        // 0x30a0e4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A0E8u;
        goto label_30a0e8;
    }
    ctx->pc = 0x30A0E0u;
    {
        const bool branch_taken_0x30a0e0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x30A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A0E0u;
        // 0x30a0e4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a0e0) {
            ctx->pc = 0x30A0F4u;
            goto label_30a0f4;
        }
    }
    ctx->pc = 0x30A0E8u;
label_30a0e8:
    // 0x30a0e8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x30a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_30a0ec:
    // 0x30a0ec: 0x10000002  b           . + 4 + (0x2 << 2)
label_30a0f0:
    if (ctx->pc == 0x30A0F0u) {
        ctx->pc = 0x30A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A0ECu;
        // 0x30a0f0: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A0F4u;
        goto label_30a0f4;
    }
    ctx->pc = 0x30A0ECu;
    {
        const bool branch_taken_0x30a0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A0ECu;
        // 0x30a0f0: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a0ec) {
            ctx->pc = 0x30A0F8u;
            goto label_30a0f8;
        }
    }
    ctx->pc = 0x30A0F4u;
label_30a0f4:
    // 0x30a0f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30a0f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a0f8:
    // 0x30a0f8: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
label_30a0fc:
    if (ctx->pc == 0x30A0FCu) {
        ctx->pc = 0x30A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A0F8u;
        // 0x30a0fc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A100u;
        goto label_30a100;
    }
    ctx->pc = 0x30A0F8u;
    {
        const bool branch_taken_0x30a0f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a0f8) {
            ctx->pc = 0x30A0FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A0F8u;
            // 0x30a0fc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A130u;
            goto label_30a130;
        }
    }
    ctx->pc = 0x30A100u;
label_30a100:
    // 0x30a100: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x30a100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_30a104:
    // 0x30a104: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x30a104u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_30a108:
    // 0x30a108: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x30a108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_30a10c:
    // 0x30a10c: 0x40f809  jalr        $v0
label_30a110:
    if (ctx->pc == 0x30A110u) {
        ctx->pc = 0x30A110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A10Cu;
        // 0x30a110: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A114u;
        goto label_30a114;
    }
    ctx->pc = 0x30A10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x30A114u);
        ctx->pc = 0x30A110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A10Cu;
        // 0x30a110: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A10Cu, 0x30A114u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30A114u;
label_30a114:
    // 0x30a114: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x30a114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_30a118:
    // 0x30a118: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_30a11c:
    if (ctx->pc == 0x30A11Cu) {
        ctx->pc = 0x30A11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A118u;
        // 0x30a11c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A120u;
        goto label_30a120;
    }
    ctx->pc = 0x30A118u;
    {
        const bool branch_taken_0x30a118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x30a118) {
            ctx->pc = 0x30A11Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A118u;
            // 0x30a11c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A130u;
            goto label_30a130;
        }
    }
    ctx->pc = 0x30A120u;
label_30a120:
    // 0x30a120: 0x92250068  lbu         $a1, 0x68($s1)
    ctx->pc = 0x30a120u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 104)));
label_30a124:
    // 0x30a124: 0xc0ba210  jal         func_2E8840
label_30a128:
    if (ctx->pc == 0x30A128u) {
        ctx->pc = 0x30A128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A124u;
        // 0x30a128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A12Cu;
        goto label_30a12c;
    }
    ctx->pc = 0x30A124u;
    SET_GPR_U32(ctx, 31, 0x30A12Cu);
    ctx->pc = 0x30A128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A124u;
    // 0x30a128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8840u, 0x30A124u, 0x30A12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A12Cu;
label_30a12c:
    // 0x30a12c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x30a12cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_30a130:
    // 0x30a130: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x30a130u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_30a134:
    // 0x30a134: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x30a134u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_30a138:
    // 0x30a138: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x30a138u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_30a13c:
    // 0x30a13c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x30a13cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_30a140:
    // 0x30a140: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x30a140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_30a144:
    // 0x30a144: 0x3e00008  jr          $ra
label_30a148:
    if (ctx->pc == 0x30A148u) {
        ctx->pc = 0x30A148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A144u;
        // 0x30a148: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A14Cu;
        goto label_30a14c;
    }
    ctx->pc = 0x30A144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A144u;
        // 0x30a148: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A14Cu;
label_30a14c:
    // 0x30a14c: 0x0  nop
    ctx->pc = 0x30a14cu;
    // NOP
    ctx->pc = 0x30a150u;
}
