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

// Function: sub_00484EE0
// Address: 0x484ee0 - 0x4851e0
void sub_00484EE0_0x484ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00484EE0_0x484ee0");
#endif

    switch (ctx->pc) {
        case 0x484ee0u: goto label_484ee0;
        case 0x484ee4u: goto label_484ee4;
        case 0x484ee8u: goto label_484ee8;
        case 0x484eecu: goto label_484eec;
        case 0x484ef0u: goto label_484ef0;
        case 0x484ef4u: goto label_484ef4;
        case 0x484ef8u: goto label_484ef8;
        case 0x484efcu: goto label_484efc;
        case 0x484f00u: goto label_484f00;
        case 0x484f04u: goto label_484f04;
        case 0x484f08u: goto label_484f08;
        case 0x484f0cu: goto label_484f0c;
        case 0x484f10u: goto label_484f10;
        case 0x484f14u: goto label_484f14;
        case 0x484f18u: goto label_484f18;
        case 0x484f1cu: goto label_484f1c;
        case 0x484f20u: goto label_484f20;
        case 0x484f24u: goto label_484f24;
        case 0x484f28u: goto label_484f28;
        case 0x484f2cu: goto label_484f2c;
        case 0x484f30u: goto label_484f30;
        case 0x484f34u: goto label_484f34;
        case 0x484f38u: goto label_484f38;
        case 0x484f3cu: goto label_484f3c;
        case 0x484f40u: goto label_484f40;
        case 0x484f44u: goto label_484f44;
        case 0x484f48u: goto label_484f48;
        case 0x484f4cu: goto label_484f4c;
        case 0x484f50u: goto label_484f50;
        case 0x484f54u: goto label_484f54;
        case 0x484f58u: goto label_484f58;
        case 0x484f5cu: goto label_484f5c;
        case 0x484f60u: goto label_484f60;
        case 0x484f64u: goto label_484f64;
        case 0x484f68u: goto label_484f68;
        case 0x484f6cu: goto label_484f6c;
        case 0x484f70u: goto label_484f70;
        case 0x484f74u: goto label_484f74;
        case 0x484f78u: goto label_484f78;
        case 0x484f7cu: goto label_484f7c;
        case 0x484f80u: goto label_484f80;
        case 0x484f84u: goto label_484f84;
        case 0x484f88u: goto label_484f88;
        case 0x484f8cu: goto label_484f8c;
        case 0x484f90u: goto label_484f90;
        case 0x484f94u: goto label_484f94;
        case 0x484f98u: goto label_484f98;
        case 0x484f9cu: goto label_484f9c;
        case 0x484fa0u: goto label_484fa0;
        case 0x484fa4u: goto label_484fa4;
        case 0x484fa8u: goto label_484fa8;
        case 0x484facu: goto label_484fac;
        case 0x484fb0u: goto label_484fb0;
        case 0x484fb4u: goto label_484fb4;
        case 0x484fb8u: goto label_484fb8;
        case 0x484fbcu: goto label_484fbc;
        case 0x484fc0u: goto label_484fc0;
        case 0x484fc4u: goto label_484fc4;
        case 0x484fc8u: goto label_484fc8;
        case 0x484fccu: goto label_484fcc;
        case 0x484fd0u: goto label_484fd0;
        case 0x484fd4u: goto label_484fd4;
        case 0x484fd8u: goto label_484fd8;
        case 0x484fdcu: goto label_484fdc;
        case 0x484fe0u: goto label_484fe0;
        case 0x484fe4u: goto label_484fe4;
        case 0x484fe8u: goto label_484fe8;
        case 0x484fecu: goto label_484fec;
        case 0x484ff0u: goto label_484ff0;
        case 0x484ff4u: goto label_484ff4;
        case 0x484ff8u: goto label_484ff8;
        case 0x484ffcu: goto label_484ffc;
        case 0x485000u: goto label_485000;
        case 0x485004u: goto label_485004;
        case 0x485008u: goto label_485008;
        case 0x48500cu: goto label_48500c;
        case 0x485010u: goto label_485010;
        case 0x485014u: goto label_485014;
        case 0x485018u: goto label_485018;
        case 0x48501cu: goto label_48501c;
        case 0x485020u: goto label_485020;
        case 0x485024u: goto label_485024;
        case 0x485028u: goto label_485028;
        case 0x48502cu: goto label_48502c;
        case 0x485030u: goto label_485030;
        case 0x485034u: goto label_485034;
        case 0x485038u: goto label_485038;
        case 0x48503cu: goto label_48503c;
        case 0x485040u: goto label_485040;
        case 0x485044u: goto label_485044;
        case 0x485048u: goto label_485048;
        case 0x48504cu: goto label_48504c;
        case 0x485050u: goto label_485050;
        case 0x485054u: goto label_485054;
        case 0x485058u: goto label_485058;
        case 0x48505cu: goto label_48505c;
        case 0x485060u: goto label_485060;
        case 0x485064u: goto label_485064;
        case 0x485068u: goto label_485068;
        case 0x48506cu: goto label_48506c;
        case 0x485070u: goto label_485070;
        case 0x485074u: goto label_485074;
        case 0x485078u: goto label_485078;
        case 0x48507cu: goto label_48507c;
        case 0x485080u: goto label_485080;
        case 0x485084u: goto label_485084;
        case 0x485088u: goto label_485088;
        case 0x48508cu: goto label_48508c;
        case 0x485090u: goto label_485090;
        case 0x485094u: goto label_485094;
        case 0x485098u: goto label_485098;
        case 0x48509cu: goto label_48509c;
        case 0x4850a0u: goto label_4850a0;
        case 0x4850a4u: goto label_4850a4;
        case 0x4850a8u: goto label_4850a8;
        case 0x4850acu: goto label_4850ac;
        case 0x4850b0u: goto label_4850b0;
        case 0x4850b4u: goto label_4850b4;
        case 0x4850b8u: goto label_4850b8;
        case 0x4850bcu: goto label_4850bc;
        case 0x4850c0u: goto label_4850c0;
        case 0x4850c4u: goto label_4850c4;
        case 0x4850c8u: goto label_4850c8;
        case 0x4850ccu: goto label_4850cc;
        case 0x4850d0u: goto label_4850d0;
        case 0x4850d4u: goto label_4850d4;
        case 0x4850d8u: goto label_4850d8;
        case 0x4850dcu: goto label_4850dc;
        case 0x4850e0u: goto label_4850e0;
        case 0x4850e4u: goto label_4850e4;
        case 0x4850e8u: goto label_4850e8;
        case 0x4850ecu: goto label_4850ec;
        case 0x4850f0u: goto label_4850f0;
        case 0x4850f4u: goto label_4850f4;
        case 0x4850f8u: goto label_4850f8;
        case 0x4850fcu: goto label_4850fc;
        case 0x485100u: goto label_485100;
        case 0x485104u: goto label_485104;
        case 0x485108u: goto label_485108;
        case 0x48510cu: goto label_48510c;
        case 0x485110u: goto label_485110;
        case 0x485114u: goto label_485114;
        case 0x485118u: goto label_485118;
        case 0x48511cu: goto label_48511c;
        case 0x485120u: goto label_485120;
        case 0x485124u: goto label_485124;
        case 0x485128u: goto label_485128;
        case 0x48512cu: goto label_48512c;
        case 0x485130u: goto label_485130;
        case 0x485134u: goto label_485134;
        case 0x485138u: goto label_485138;
        case 0x48513cu: goto label_48513c;
        case 0x485140u: goto label_485140;
        case 0x485144u: goto label_485144;
        case 0x485148u: goto label_485148;
        case 0x48514cu: goto label_48514c;
        case 0x485150u: goto label_485150;
        case 0x485154u: goto label_485154;
        case 0x485158u: goto label_485158;
        case 0x48515cu: goto label_48515c;
        case 0x485160u: goto label_485160;
        case 0x485164u: goto label_485164;
        case 0x485168u: goto label_485168;
        case 0x48516cu: goto label_48516c;
        case 0x485170u: goto label_485170;
        case 0x485174u: goto label_485174;
        case 0x485178u: goto label_485178;
        case 0x48517cu: goto label_48517c;
        case 0x485180u: goto label_485180;
        case 0x485184u: goto label_485184;
        case 0x485188u: goto label_485188;
        case 0x48518cu: goto label_48518c;
        case 0x485190u: goto label_485190;
        case 0x485194u: goto label_485194;
        case 0x485198u: goto label_485198;
        case 0x48519cu: goto label_48519c;
        case 0x4851a0u: goto label_4851a0;
        case 0x4851a4u: goto label_4851a4;
        case 0x4851a8u: goto label_4851a8;
        case 0x4851acu: goto label_4851ac;
        case 0x4851b0u: goto label_4851b0;
        case 0x4851b4u: goto label_4851b4;
        case 0x4851b8u: goto label_4851b8;
        case 0x4851bcu: goto label_4851bc;
        case 0x4851c0u: goto label_4851c0;
        case 0x4851c4u: goto label_4851c4;
        case 0x4851c8u: goto label_4851c8;
        case 0x4851ccu: goto label_4851cc;
        case 0x4851d0u: goto label_4851d0;
        case 0x4851d4u: goto label_4851d4;
        case 0x4851d8u: goto label_4851d8;
        case 0x4851dcu: goto label_4851dc;
        default: break;
    }

    ctx->pc = 0x484ee0u;

label_484ee0:
    // 0x484ee0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x484ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_484ee4:
    // 0x484ee4: 0x8f838968  lw          $v1, -0x7698($gp)
    ctx->pc = 0x484ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
label_484ee8:
    // 0x484ee8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x484ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_484eec:
    // 0x484eec: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x484eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_484ef0:
    // 0x484ef0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x484ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_484ef4:
    // 0x484ef4: 0x2450ad18  addiu       $s0, $v0, -0x52E8
    ctx->pc = 0x484ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_484ef8:
    // 0x484ef8: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x484ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_484efc:
    // 0x484efc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x484efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_484f00:
    // 0x484f00: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x484f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_484f04:
    // 0x484f04: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x484f04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_484f08:
    // 0x484f08: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x484f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
label_484f0c:
    // 0x484f0c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x484f0cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_484f10:
    // 0x484f10: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x484f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_484f14:
    // 0x484f14: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x484f14u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_484f18:
    // 0x484f18: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x484f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_484f1c:
    // 0x484f1c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x484f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_484f20:
    // 0x484f20: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x484f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_484f24:
    // 0x484f24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x484f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_484f28:
    // 0x484f28: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x484f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_484f2c:
    // 0x484f2c: 0xc12a6fc  jal         func_4A9BF0
label_484f30:
    if (ctx->pc == 0x484F30u) {
        ctx->pc = 0x484F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484F2Cu;
        // 0x484f30: 0x8c730004  lw          $s3, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484F34u;
        goto label_484f34;
    }
    ctx->pc = 0x484F2Cu;
    SET_GPR_U32(ctx, 31, 0x484F34u);
    ctx->pc = 0x484F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x484F2Cu;
    // 0x484f30: 0x8c730004  lw          $s3, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9BF0u, 0x484F2Cu, 0x484F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484F34u;
label_484f34:
    // 0x484f34: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_484f38:
    if (ctx->pc == 0x484F38u) {
        ctx->pc = 0x484F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484F34u;
        // 0x484f38: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484F3Cu;
        goto label_484f3c;
    }
    ctx->pc = 0x484F34u;
    {
        const bool branch_taken_0x484f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x484F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484F34u;
        // 0x484f38: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484f34) {
            ctx->pc = 0x484F54u;
            goto label_484f54;
        }
    }
    ctx->pc = 0x484F3Cu;
label_484f3c:
    // 0x484f3c: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_484f40:
    if (ctx->pc == 0x484F40u) {
        ctx->pc = 0x484F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484F3Cu;
        // 0x484f40: 0x2451ad18  addiu       $s1, $v0, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484F44u;
        goto label_484f44;
    }
    ctx->pc = 0x484F3Cu;
    {
        const bool branch_taken_0x484f3c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x484F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484F3Cu;
        // 0x484f40: 0x2451ad18  addiu       $s1, $v0, -0x52E8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484f3c) {
            ctx->pc = 0x484F58u;
            goto label_484f58;
        }
    }
    ctx->pc = 0x484F44u;
label_484f44:
    // 0x484f44: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x484f44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_484f48:
    // 0x484f48: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
label_484f4c:
    if (ctx->pc == 0x484F4Cu) {
        ctx->pc = 0x484F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484F48u;
        // 0x484f4c: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484F50u;
        goto label_484f50;
    }
    ctx->pc = 0x484F48u;
    {
        const bool branch_taken_0x484f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x484F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484F48u;
        // 0x484f4c: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484f48) {
            ctx->pc = 0x485054u;
            goto label_485054;
        }
    }
    ctx->pc = 0x484F50u;
label_484f50:
    // 0x484f50: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x484f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_484f54:
    // 0x484f54: 0x2451ad18  addiu       $s1, $v0, -0x52E8
    ctx->pc = 0x484f54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_484f58:
    // 0x484f58: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x484f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_484f5c:
    // 0x484f5c: 0x40f809  jalr        $v0
label_484f60:
    if (ctx->pc == 0x484F60u) {
        ctx->pc = 0x484F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484F5Cu;
        // 0x484f60: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484F64u;
        goto label_484f64;
    }
    ctx->pc = 0x484F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x484F64u);
        ctx->pc = 0x484F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484F5Cu;
        // 0x484f60: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484F5Cu, 0x484F64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x484F64u;
label_484f64:
    // 0x484f64: 0x8f838968  lw          $v1, -0x7698($gp)
    ctx->pc = 0x484f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
label_484f68:
    // 0x484f68: 0x578021  addu        $s0, $v0, $s7
    ctx->pc = 0x484f68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_484f6c:
    // 0x484f6c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x484f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_484f70:
    // 0x484f70: 0x8c620214  lw          $v0, 0x214($v1)
    ctx->pc = 0x484f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 532)));
label_484f74:
    // 0x484f74: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x484f74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_484f78:
    // 0x484f78: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_484f7c:
    if (ctx->pc == 0x484F7Cu) {
        ctx->pc = 0x484F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484F78u;
        // 0x484f7c: 0x8f828968  lw          $v0, -0x7698($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484F80u;
        goto label_484f80;
    }
    ctx->pc = 0x484F78u;
    {
        const bool branch_taken_0x484f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x484F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484F78u;
        // 0x484f7c: 0x8f828968  lw          $v0, -0x7698($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484f78) {
            ctx->pc = 0x485008u;
            goto label_485008;
        }
    }
    ctx->pc = 0x484F80u;
label_484f80:
    // 0x484f80: 0x8c640210  lw          $a0, 0x210($v1)
    ctx->pc = 0x484f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 528)));
label_484f84:
    // 0x484f84: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_484f88:
    if (ctx->pc == 0x484F88u) {
        ctx->pc = 0x484F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484F84u;
        // 0x484f88: 0x3c060104  lui         $a2, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)260 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484F8Cu;
        goto label_484f8c;
    }
    ctx->pc = 0x484F84u;
    {
        const bool branch_taken_0x484f84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x484F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484F84u;
        // 0x484f88: 0x3c060104  lui         $a2, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)260 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484f84) {
            ctx->pc = 0x484FA4u;
            goto label_484fa4;
        }
    }
    ctx->pc = 0x484F8Cu;
label_484f8c:
    // 0x484f8c: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x484f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_484f90:
    // 0x484f90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x484f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_484f94:
    // 0x484f94: 0x40f809  jalr        $v0
label_484f98:
    if (ctx->pc == 0x484F98u) {
        ctx->pc = 0x484F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484F94u;
        // 0x484f98: 0x34c60018  ori         $a2, $a2, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = 0x484F9Cu;
        goto label_484f9c;
    }
    ctx->pc = 0x484F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x484F9Cu);
        ctx->pc = 0x484F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484F94u;
        // 0x484f98: 0x34c60018  ori         $a2, $a2, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484F94u, 0x484F9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x484F9Cu;
label_484f9c:
    // 0x484f9c: 0x10000007  b           . + 4 + (0x7 << 2)
label_484fa0:
    if (ctx->pc == 0x484FA0u) {
        ctx->pc = 0x484FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484F9Cu;
        // 0x484fa0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484FA4u;
        goto label_484fa4;
    }
    ctx->pc = 0x484F9Cu;
    {
        const bool branch_taken_0x484f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x484FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484F9Cu;
        // 0x484fa0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484f9c) {
            ctx->pc = 0x484FBCu;
            goto label_484fbc;
        }
    }
    ctx->pc = 0x484FA4u;
label_484fa4:
    // 0x484fa4: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x484fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_484fa8:
    // 0x484fa8: 0x3c050104  lui         $a1, 0x104
    ctx->pc = 0x484fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)260 << 16));
label_484fac:
    // 0x484fac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x484facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_484fb0:
    // 0x484fb0: 0x40f809  jalr        $v0
label_484fb4:
    if (ctx->pc == 0x484FB4u) {
        ctx->pc = 0x484FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484FB0u;
        // 0x484fb4: 0x34a50018  ori         $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = 0x484FB8u;
        goto label_484fb8;
    }
    ctx->pc = 0x484FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x484FB8u);
        ctx->pc = 0x484FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484FB0u;
        // 0x484fb4: 0x34a50018  ori         $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484FB0u, 0x484FB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x484FB8u;
label_484fb8:
    // 0x484fb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x484fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_484fbc:
    // 0x484fbc: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
label_484fc0:
    if (ctx->pc == 0x484FC0u) {
        ctx->pc = 0x484FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484FBCu;
        // 0x484fc0: 0x8f828968  lw          $v0, -0x7698($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484FC4u;
        goto label_484fc4;
    }
    ctx->pc = 0x484FBCu;
    {
        const bool branch_taken_0x484fbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x484FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484FBCu;
        // 0x484fc0: 0x8f828968  lw          $v0, -0x7698($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484fbc) {
            ctx->pc = 0x484FF0u;
            goto label_484ff0;
        }
    }
    ctx->pc = 0x484FC4u;
label_484fc4:
    // 0x484fc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x484fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_484fc8:
    // 0x484fc8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x484fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_484fcc:
    // 0x484fcc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x484fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_484fd0:
    // 0x484fd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x484fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_484fd4:
    // 0x484fd4: 0xc11eff2  jal         func_47BFC8
label_484fd8:
    if (ctx->pc == 0x484FD8u) {
        ctx->pc = 0x484FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484FD4u;
        // 0x484fd8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x484FDCu;
        goto label_484fdc;
    }
    ctx->pc = 0x484FD4u;
    SET_GPR_U32(ctx, 31, 0x484FDCu);
    ctx->pc = 0x484FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x484FD4u;
    // 0x484fd8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x484FD4u, 0x484FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484FDCu;
label_484fdc:
    // 0x484fdc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x484fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_484fe0:
    // 0x484fe0: 0xc11f024  jal         func_47C090
label_484fe4:
    if (ctx->pc == 0x484FE4u) {
        ctx->pc = 0x484FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484FE0u;
        // 0x484fe4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484FE8u;
        goto label_484fe8;
    }
    ctx->pc = 0x484FE0u;
    SET_GPR_U32(ctx, 31, 0x484FE8u);
    ctx->pc = 0x484FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x484FE0u;
    // 0x484fe4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x484FE0u, 0x484FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484FE8u;
label_484fe8:
    // 0x484fe8: 0x1000000b  b           . + 4 + (0xB << 2)
label_484fec:
    if (ctx->pc == 0x484FECu) {
        ctx->pc = 0x484FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484FE8u;
        // 0x484fec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484FF0u;
        goto label_484ff0;
    }
    ctx->pc = 0x484FE8u;
    {
        const bool branch_taken_0x484fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x484FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484FE8u;
        // 0x484fec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484fe8) {
            ctx->pc = 0x485018u;
            goto label_485018;
        }
    }
    ctx->pc = 0x484FF0u;
label_484ff0:
    // 0x484ff0: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x484ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_484ff4:
    // 0x484ff4: 0x24a3ad18  addiu       $v1, $a1, -0x52E8
    ctx->pc = 0x484ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946072));
label_484ff8:
    // 0x484ff8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x484ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_484ffc:
    // 0x484ffc: 0xac500214  sw          $s0, 0x214($v0)
    ctx->pc = 0x484ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 532), GPR_U32(ctx, 16));
label_485000:
    // 0x485000: 0xac440210  sw          $a0, 0x210($v0)
    ctx->pc = 0x485000u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 528), GPR_U32(ctx, 4));
label_485004:
    // 0x485004: 0x8f828968  lw          $v0, -0x7698($gp)
    ctx->pc = 0x485004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
label_485008:
    // 0x485008: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x485008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_48500c:
    // 0x48500c: 0x2483ad18  addiu       $v1, $a0, -0x52E8
    ctx->pc = 0x48500cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946072));
label_485010:
    // 0x485010: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x485010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_485014:
    // 0x485014: 0x8c500210  lw          $s0, 0x210($v0)
    ctx->pc = 0x485014u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
label_485018:
    // 0x485018: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_48501c:
    if (ctx->pc == 0x48501Cu) {
        ctx->pc = 0x48501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485018u;
        // 0x48501c: 0x3c050071  lui         $a1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485020u;
        goto label_485020;
    }
    ctx->pc = 0x485018u;
    {
        const bool branch_taken_0x485018 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x48501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485018u;
        // 0x48501c: 0x3c050071  lui         $a1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485018) {
            ctx->pc = 0x485028u;
            goto label_485028;
        }
    }
    ctx->pc = 0x485020u;
label_485020:
    // 0x485020: 0x10000062  b           . + 4 + (0x62 << 2)
label_485024:
    if (ctx->pc == 0x485024u) {
        ctx->pc = 0x485024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485020u;
        // 0x485024: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485028u;
        goto label_485028;
    }
    ctx->pc = 0x485020u;
    {
        const bool branch_taken_0x485020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x485024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485020u;
        // 0x485024: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485020) {
            ctx->pc = 0x4851ACu;
            goto label_4851ac;
        }
    }
    ctx->pc = 0x485028u;
label_485028:
    // 0x485028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x485028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48502c:
    // 0x48502c: 0x24a3ad18  addiu       $v1, $a1, -0x52E8
    ctx->pc = 0x48502cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946072));
label_485030:
    // 0x485030: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x485030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_485034:
    // 0x485034: 0x40f809  jalr        $v0
label_485038:
    if (ctx->pc == 0x485038u) {
        ctx->pc = 0x485038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485034u;
        // 0x485038: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48503Cu;
        goto label_48503c;
    }
    ctx->pc = 0x485034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48503Cu);
        ctx->pc = 0x485038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485034u;
        // 0x485038: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485034u, 0x48503Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48503Cu;
label_48503c:
    // 0x48503c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x48503cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_485040:
    // 0x485040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x485040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_485044:
    // 0x485044: 0x60f809  jalr        $v1
label_485048:
    if (ctx->pc == 0x485048u) {
        ctx->pc = 0x485048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485044u;
        // 0x485048: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48504Cu;
        goto label_48504c;
    }
    ctx->pc = 0x485044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x48504Cu);
        ctx->pc = 0x485048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485044u;
        // 0x485048: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485044u, 0x48504Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48504Cu;
label_48504c:
    // 0x48504c: 0x10000057  b           . + 4 + (0x57 << 2)
label_485050:
    if (ctx->pc == 0x485050u) {
        ctx->pc = 0x485050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48504Cu;
        // 0x485050: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485054u;
        goto label_485054;
    }
    ctx->pc = 0x48504Cu;
    {
        const bool branch_taken_0x48504c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x485050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48504Cu;
        // 0x485050: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48504c) {
            ctx->pc = 0x4851ACu;
            goto label_4851ac;
        }
    }
    ctx->pc = 0x485054u;
label_485054:
    // 0x485054: 0x8ea200e0  lw          $v0, 0xE0($s5)
    ctx->pc = 0x485054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 224)));
label_485058:
    // 0x485058: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x485058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_48505c:
    // 0x48505c: 0x40f809  jalr        $v0
label_485060:
    if (ctx->pc == 0x485060u) {
        ctx->pc = 0x485060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48505Cu;
        // 0x485060: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485064u;
        goto label_485064;
    }
    ctx->pc = 0x48505Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x485064u);
        ctx->pc = 0x485060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48505Cu;
        // 0x485060: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48505Cu, 0x485064u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x485064u;
label_485064:
    // 0x485064: 0x8ea200e0  lw          $v0, 0xE0($s5)
    ctx->pc = 0x485064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 224)));
label_485068:
    // 0x485068: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x485068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_48506c:
    // 0x48506c: 0x40f809  jalr        $v0
label_485070:
    if (ctx->pc == 0x485070u) {
        ctx->pc = 0x485070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48506Cu;
        // 0x485070: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485074u;
        goto label_485074;
    }
    ctx->pc = 0x48506Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x485074u);
        ctx->pc = 0x485070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48506Cu;
        // 0x485070: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48506Cu, 0x485074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x485074u;
label_485074:
    // 0x485074: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x485074u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_485078:
    // 0x485078: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_48507c:
    if (ctx->pc == 0x48507Cu) {
        ctx->pc = 0x48507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485078u;
        // 0x48507c: 0x253a023  subu        $s4, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485080u;
        goto label_485080;
    }
    ctx->pc = 0x485078u;
    {
        const bool branch_taken_0x485078 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x48507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485078u;
        // 0x48507c: 0x253a023  subu        $s4, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485078) {
            ctx->pc = 0x485088u;
            goto label_485088;
        }
    }
    ctx->pc = 0x485080u;
label_485080:
    // 0x485080: 0x10000005  b           . + 4 + (0x5 << 2)
label_485084:
    if (ctx->pc == 0x485084u) {
        ctx->pc = 0x485084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485080u;
        // 0x485084: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485088u;
        goto label_485088;
    }
    ctx->pc = 0x485080u;
    {
        const bool branch_taken_0x485080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x485084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485080u;
        // 0x485084: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485080) {
            ctx->pc = 0x485098u;
            goto label_485098;
        }
    }
    ctx->pc = 0x485088u;
label_485088:
    // 0x485088: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x485088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_48508c:
    // 0x48508c: 0x40f809  jalr        $v0
label_485090:
    if (ctx->pc == 0x485090u) {
        ctx->pc = 0x485090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48508Cu;
        // 0x485090: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485094u;
        goto label_485094;
    }
    ctx->pc = 0x48508Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x485094u);
        ctx->pc = 0x485090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48508Cu;
        // 0x485090: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48508Cu, 0x485094u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x485094u;
label_485094:
    // 0x485094: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x485094u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_485098:
    // 0x485098: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x485098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_48509c:
    // 0x48509c: 0x2491ad18  addiu       $s1, $a0, -0x52E8
    ctx->pc = 0x48509cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946072));
label_4850a0:
    // 0x4850a0: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x4850a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_4850a4:
    // 0x4850a4: 0x40f809  jalr        $v0
label_4850a8:
    if (ctx->pc == 0x4850A8u) {
        ctx->pc = 0x4850A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4850A4u;
        // 0x4850a8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4850ACu;
        goto label_4850ac;
    }
    ctx->pc = 0x4850A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4850ACu);
        ctx->pc = 0x4850A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4850A4u;
        // 0x4850a8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4850A4u, 0x4850ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4850ACu;
label_4850ac:
    // 0x4850ac: 0x8f838968  lw          $v1, -0x7698($gp)
    ctx->pc = 0x4850acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
label_4850b0:
    // 0x4850b0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x4850b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_4850b4:
    // 0x4850b4: 0x578021  addu        $s0, $v0, $s7
    ctx->pc = 0x4850b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_4850b8:
    // 0x4850b8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x4850b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_4850bc:
    // 0x4850bc: 0x8c620214  lw          $v0, 0x214($v1)
    ctx->pc = 0x4850bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 532)));
label_4850c0:
    // 0x4850c0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x4850c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_4850c4:
    // 0x4850c4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_4850c8:
    if (ctx->pc == 0x4850C8u) {
        ctx->pc = 0x4850C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4850C4u;
        // 0x4850c8: 0x8f828968  lw          $v0, -0x7698($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4850CCu;
        goto label_4850cc;
    }
    ctx->pc = 0x4850C4u;
    {
        const bool branch_taken_0x4850c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4850C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4850C4u;
        // 0x4850c8: 0x8f828968  lw          $v0, -0x7698($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4850c4) {
            ctx->pc = 0x485150u;
            goto label_485150;
        }
    }
    ctx->pc = 0x4850CCu;
label_4850cc:
    // 0x4850cc: 0x8c640210  lw          $a0, 0x210($v1)
    ctx->pc = 0x4850ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 528)));
label_4850d0:
    // 0x4850d0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_4850d4:
    if (ctx->pc == 0x4850D4u) {
        ctx->pc = 0x4850D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4850D0u;
        // 0x4850d4: 0x3c060104  lui         $a2, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)260 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4850D8u;
        goto label_4850d8;
    }
    ctx->pc = 0x4850D0u;
    {
        const bool branch_taken_0x4850d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4850D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4850D0u;
        // 0x4850d4: 0x3c060104  lui         $a2, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)260 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4850d0) {
            ctx->pc = 0x4850F0u;
            goto label_4850f0;
        }
    }
    ctx->pc = 0x4850D8u;
label_4850d8:
    // 0x4850d8: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x4850d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_4850dc:
    // 0x4850dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4850dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4850e0:
    // 0x4850e0: 0x40f809  jalr        $v0
label_4850e4:
    if (ctx->pc == 0x4850E4u) {
        ctx->pc = 0x4850E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4850E0u;
        // 0x4850e4: 0x34c60018  ori         $a2, $a2, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4850E8u;
        goto label_4850e8;
    }
    ctx->pc = 0x4850E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4850E8u);
        ctx->pc = 0x4850E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4850E0u;
        // 0x4850e4: 0x34c60018  ori         $a2, $a2, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4850E0u, 0x4850E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4850E8u;
label_4850e8:
    // 0x4850e8: 0x10000007  b           . + 4 + (0x7 << 2)
label_4850ec:
    if (ctx->pc == 0x4850ECu) {
        ctx->pc = 0x4850ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4850E8u;
        // 0x4850ec: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4850F0u;
        goto label_4850f0;
    }
    ctx->pc = 0x4850E8u;
    {
        const bool branch_taken_0x4850e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4850ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4850E8u;
        // 0x4850ec: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4850e8) {
            ctx->pc = 0x485108u;
            goto label_485108;
        }
    }
    ctx->pc = 0x4850F0u;
label_4850f0:
    // 0x4850f0: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x4850f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_4850f4:
    // 0x4850f4: 0x3c050104  lui         $a1, 0x104
    ctx->pc = 0x4850f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)260 << 16));
label_4850f8:
    // 0x4850f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4850f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4850fc:
    // 0x4850fc: 0x40f809  jalr        $v0
label_485100:
    if (ctx->pc == 0x485100u) {
        ctx->pc = 0x485100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4850FCu;
        // 0x485100: 0x34a50018  ori         $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = 0x485104u;
        goto label_485104;
    }
    ctx->pc = 0x4850FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x485104u);
        ctx->pc = 0x485100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4850FCu;
        // 0x485100: 0x34a50018  ori         $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4850FCu, 0x485104u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x485104u;
label_485104:
    // 0x485104: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x485104u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_485108:
    // 0x485108: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_48510c:
    if (ctx->pc == 0x48510Cu) {
        ctx->pc = 0x48510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485108u;
        // 0x48510c: 0x8f828968  lw          $v0, -0x7698($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485110u;
        goto label_485110;
    }
    ctx->pc = 0x485108u;
    {
        const bool branch_taken_0x485108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x48510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485108u;
        // 0x48510c: 0x8f828968  lw          $v0, -0x7698($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485108) {
            ctx->pc = 0x485140u;
            goto label_485140;
        }
    }
    ctx->pc = 0x485110u;
label_485110:
    // 0x485110: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x485110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_485114:
    // 0x485114: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x485114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_485118:
    // 0x485118: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x485118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_48511c:
    // 0x48511c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x48511cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_485120:
    // 0x485120: 0xc11eff2  jal         func_47BFC8
label_485124:
    if (ctx->pc == 0x485124u) {
        ctx->pc = 0x485124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485120u;
        // 0x485124: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x485128u;
        goto label_485128;
    }
    ctx->pc = 0x485120u;
    SET_GPR_U32(ctx, 31, 0x485128u);
    ctx->pc = 0x485124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x485120u;
    // 0x485124: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x485120u, 0x485128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485128u;
label_485128:
    // 0x485128: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x485128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_48512c:
    // 0x48512c: 0xc11f024  jal         func_47C090
label_485130:
    if (ctx->pc == 0x485130u) {
        ctx->pc = 0x485130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48512Cu;
        // 0x485130: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485134u;
        goto label_485134;
    }
    ctx->pc = 0x48512Cu;
    SET_GPR_U32(ctx, 31, 0x485134u);
    ctx->pc = 0x485130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48512Cu;
    // 0x485130: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x48512Cu, 0x485134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485134u;
label_485134:
    // 0x485134: 0x10000008  b           . + 4 + (0x8 << 2)
label_485138:
    if (ctx->pc == 0x485138u) {
        ctx->pc = 0x485138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485134u;
        // 0x485138: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48513Cu;
        goto label_48513c;
    }
    ctx->pc = 0x485134u;
    {
        const bool branch_taken_0x485134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x485138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485134u;
        // 0x485138: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485134) {
            ctx->pc = 0x485158u;
            goto label_485158;
        }
    }
    ctx->pc = 0x48513Cu;
label_48513c:
    // 0x48513c: 0x0  nop
    ctx->pc = 0x48513cu;
    // NOP
label_485140:
    // 0x485140: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x485140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_485144:
    // 0x485144: 0xac500214  sw          $s0, 0x214($v0)
    ctx->pc = 0x485144u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 532), GPR_U32(ctx, 16));
label_485148:
    // 0x485148: 0xac430210  sw          $v1, 0x210($v0)
    ctx->pc = 0x485148u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 528), GPR_U32(ctx, 3));
label_48514c:
    // 0x48514c: 0x8f828968  lw          $v0, -0x7698($gp)
    ctx->pc = 0x48514cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
label_485150:
    // 0x485150: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x485150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_485154:
    // 0x485154: 0x8c500210  lw          $s0, 0x210($v0)
    ctx->pc = 0x485154u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
label_485158:
    // 0x485158: 0x1200ffb1  beqz        $s0, . + 4 + (-0x4F << 2)
label_48515c:
    if (ctx->pc == 0x48515Cu) {
        ctx->pc = 0x48515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485158u;
        // 0x48515c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485160u;
        goto label_485160;
    }
    ctx->pc = 0x485158u;
    {
        const bool branch_taken_0x485158 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x48515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485158u;
        // 0x48515c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485158) {
            ctx->pc = 0x485020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_485020;
        }
    }
    ctx->pc = 0x485160u;
label_485160:
    // 0x485160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x485160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_485164:
    // 0x485164: 0xc10c190  jal         func_430640
label_485168:
    if (ctx->pc == 0x485168u) {
        ctx->pc = 0x485168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485164u;
        // 0x485168: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48516Cu;
        goto label_48516c;
    }
    ctx->pc = 0x485164u;
    SET_GPR_U32(ctx, 31, 0x48516Cu);
    ctx->pc = 0x485168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x485164u;
    // 0x485168: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x485164u, 0x48516Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48516Cu;
label_48516c:
    // 0x48516c: 0x8ea200cc  lw          $v0, 0xCC($s5)
    ctx->pc = 0x48516cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
label_485170:
    // 0x485170: 0x2142021  addu        $a0, $s0, $s4
    ctx->pc = 0x485170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_485174:
    // 0x485174: 0x40f809  jalr        $v0
label_485178:
    if (ctx->pc == 0x485178u) {
        ctx->pc = 0x485178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485174u;
        // 0x485178: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48517Cu;
        goto label_48517c;
    }
    ctx->pc = 0x485174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48517Cu);
        ctx->pc = 0x485178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485174u;
        // 0x485178: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485174u, 0x48517Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48517Cu;
label_48517c:
    // 0x48517c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x48517cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_485180:
    // 0x485180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x485180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_485184:
    // 0x485184: 0x60f809  jalr        $v1
label_485188:
    if (ctx->pc == 0x485188u) {
        ctx->pc = 0x485188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485184u;
        // 0x485188: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48518Cu;
        goto label_48518c;
    }
    ctx->pc = 0x485184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x48518Cu);
        ctx->pc = 0x485188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485184u;
        // 0x485188: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485184u, 0x48518Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48518Cu;
label_48518c:
    // 0x48518c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_485190:
    if (ctx->pc == 0x485190u) {
        ctx->pc = 0x485190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48518Cu;
        // 0x485190: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485194u;
        goto label_485194;
    }
    ctx->pc = 0x48518Cu;
    {
        const bool branch_taken_0x48518c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x485190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48518Cu;
        // 0x485190: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48518c) {
            ctx->pc = 0x4851ACu;
            goto label_4851ac;
        }
    }
    ctx->pc = 0x485194u;
label_485194:
    // 0x485194: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_485198:
    if (ctx->pc == 0x485198u) {
        ctx->pc = 0x485198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485194u;
        // 0x485198: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48519Cu;
        goto label_48519c;
    }
    ctx->pc = 0x485194u;
    {
        const bool branch_taken_0x485194 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x485198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485194u;
        // 0x485198: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485194) {
            ctx->pc = 0x4851ACu;
            goto label_4851ac;
        }
    }
    ctx->pc = 0x48519Cu;
label_48519c:
    // 0x48519c: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x48519cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_4851a0:
    // 0x4851a0: 0x5440ffad  bnel        $v0, $zero, . + 4 + (-0x53 << 2)
label_4851a4:
    if (ctx->pc == 0x4851A4u) {
        ctx->pc = 0x4851A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4851A0u;
        // 0x4851a4: 0x8ea200e0  lw          $v0, 0xE0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4851A8u;
        goto label_4851a8;
    }
    ctx->pc = 0x4851A0u;
    {
        const bool branch_taken_0x4851a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4851a0) {
            ctx->pc = 0x4851A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4851A0u;
            // 0x4851a4: 0x8ea200e0  lw          $v0, 0xE0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x485058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_485058;
        }
    }
    ctx->pc = 0x4851A8u;
label_4851a8:
    // 0x4851a8: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x4851a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4851ac:
    // 0x4851ac: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x4851acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4851b0:
    // 0x4851b0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x4851b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4851b4:
    // 0x4851b4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x4851b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4851b8:
    // 0x4851b8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x4851b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4851bc:
    // 0x4851bc: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x4851bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4851c0:
    // 0x4851c0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4851c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4851c4:
    // 0x4851c4: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x4851c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4851c8:
    // 0x4851c8: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x4851c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4851cc:
    // 0x4851cc: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x4851ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4851d0:
    // 0x4851d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4851d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4851d4:
    // 0x4851d4: 0x3e00008  jr          $ra
label_4851d8:
    if (ctx->pc == 0x4851D8u) {
        ctx->pc = 0x4851D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4851D4u;
        // 0x4851d8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4851DCu;
        goto label_4851dc;
    }
    ctx->pc = 0x4851D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4851D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4851D4u;
        // 0x4851d8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4851D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4851DCu;
label_4851dc:
    // 0x4851dc: 0x0  nop
    ctx->pc = 0x4851dcu;
    // NOP
    ctx->pc = 0x4851e0u;
}
