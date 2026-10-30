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

// Function: sub_003D50D0
// Address: 0x3d50d0 - 0x3d5310
void sub_003D50D0_0x3d50d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D50D0_0x3d50d0");
#endif

    switch (ctx->pc) {
        case 0x3d50d0u: goto label_3d50d0;
        case 0x3d50d4u: goto label_3d50d4;
        case 0x3d50d8u: goto label_3d50d8;
        case 0x3d50dcu: goto label_3d50dc;
        case 0x3d50e0u: goto label_3d50e0;
        case 0x3d50e4u: goto label_3d50e4;
        case 0x3d50e8u: goto label_3d50e8;
        case 0x3d50ecu: goto label_3d50ec;
        case 0x3d50f0u: goto label_3d50f0;
        case 0x3d50f4u: goto label_3d50f4;
        case 0x3d50f8u: goto label_3d50f8;
        case 0x3d50fcu: goto label_3d50fc;
        case 0x3d5100u: goto label_3d5100;
        case 0x3d5104u: goto label_3d5104;
        case 0x3d5108u: goto label_3d5108;
        case 0x3d510cu: goto label_3d510c;
        case 0x3d5110u: goto label_3d5110;
        case 0x3d5114u: goto label_3d5114;
        case 0x3d5118u: goto label_3d5118;
        case 0x3d511cu: goto label_3d511c;
        case 0x3d5120u: goto label_3d5120;
        case 0x3d5124u: goto label_3d5124;
        case 0x3d5128u: goto label_3d5128;
        case 0x3d512cu: goto label_3d512c;
        case 0x3d5130u: goto label_3d5130;
        case 0x3d5134u: goto label_3d5134;
        case 0x3d5138u: goto label_3d5138;
        case 0x3d513cu: goto label_3d513c;
        case 0x3d5140u: goto label_3d5140;
        case 0x3d5144u: goto label_3d5144;
        case 0x3d5148u: goto label_3d5148;
        case 0x3d514cu: goto label_3d514c;
        case 0x3d5150u: goto label_3d5150;
        case 0x3d5154u: goto label_3d5154;
        case 0x3d5158u: goto label_3d5158;
        case 0x3d515cu: goto label_3d515c;
        case 0x3d5160u: goto label_3d5160;
        case 0x3d5164u: goto label_3d5164;
        case 0x3d5168u: goto label_3d5168;
        case 0x3d516cu: goto label_3d516c;
        case 0x3d5170u: goto label_3d5170;
        case 0x3d5174u: goto label_3d5174;
        case 0x3d5178u: goto label_3d5178;
        case 0x3d517cu: goto label_3d517c;
        case 0x3d5180u: goto label_3d5180;
        case 0x3d5184u: goto label_3d5184;
        case 0x3d5188u: goto label_3d5188;
        case 0x3d518cu: goto label_3d518c;
        case 0x3d5190u: goto label_3d5190;
        case 0x3d5194u: goto label_3d5194;
        case 0x3d5198u: goto label_3d5198;
        case 0x3d519cu: goto label_3d519c;
        case 0x3d51a0u: goto label_3d51a0;
        case 0x3d51a4u: goto label_3d51a4;
        case 0x3d51a8u: goto label_3d51a8;
        case 0x3d51acu: goto label_3d51ac;
        case 0x3d51b0u: goto label_3d51b0;
        case 0x3d51b4u: goto label_3d51b4;
        case 0x3d51b8u: goto label_3d51b8;
        case 0x3d51bcu: goto label_3d51bc;
        case 0x3d51c0u: goto label_3d51c0;
        case 0x3d51c4u: goto label_3d51c4;
        case 0x3d51c8u: goto label_3d51c8;
        case 0x3d51ccu: goto label_3d51cc;
        case 0x3d51d0u: goto label_3d51d0;
        case 0x3d51d4u: goto label_3d51d4;
        case 0x3d51d8u: goto label_3d51d8;
        case 0x3d51dcu: goto label_3d51dc;
        case 0x3d51e0u: goto label_3d51e0;
        case 0x3d51e4u: goto label_3d51e4;
        case 0x3d51e8u: goto label_3d51e8;
        case 0x3d51ecu: goto label_3d51ec;
        case 0x3d51f0u: goto label_3d51f0;
        case 0x3d51f4u: goto label_3d51f4;
        case 0x3d51f8u: goto label_3d51f8;
        case 0x3d51fcu: goto label_3d51fc;
        case 0x3d5200u: goto label_3d5200;
        case 0x3d5204u: goto label_3d5204;
        case 0x3d5208u: goto label_3d5208;
        case 0x3d520cu: goto label_3d520c;
        case 0x3d5210u: goto label_3d5210;
        case 0x3d5214u: goto label_3d5214;
        case 0x3d5218u: goto label_3d5218;
        case 0x3d521cu: goto label_3d521c;
        case 0x3d5220u: goto label_3d5220;
        case 0x3d5224u: goto label_3d5224;
        case 0x3d5228u: goto label_3d5228;
        case 0x3d522cu: goto label_3d522c;
        case 0x3d5230u: goto label_3d5230;
        case 0x3d5234u: goto label_3d5234;
        case 0x3d5238u: goto label_3d5238;
        case 0x3d523cu: goto label_3d523c;
        case 0x3d5240u: goto label_3d5240;
        case 0x3d5244u: goto label_3d5244;
        case 0x3d5248u: goto label_3d5248;
        case 0x3d524cu: goto label_3d524c;
        case 0x3d5250u: goto label_3d5250;
        case 0x3d5254u: goto label_3d5254;
        case 0x3d5258u: goto label_3d5258;
        case 0x3d525cu: goto label_3d525c;
        case 0x3d5260u: goto label_3d5260;
        case 0x3d5264u: goto label_3d5264;
        case 0x3d5268u: goto label_3d5268;
        case 0x3d526cu: goto label_3d526c;
        case 0x3d5270u: goto label_3d5270;
        case 0x3d5274u: goto label_3d5274;
        case 0x3d5278u: goto label_3d5278;
        case 0x3d527cu: goto label_3d527c;
        case 0x3d5280u: goto label_3d5280;
        case 0x3d5284u: goto label_3d5284;
        case 0x3d5288u: goto label_3d5288;
        case 0x3d528cu: goto label_3d528c;
        case 0x3d5290u: goto label_3d5290;
        case 0x3d5294u: goto label_3d5294;
        case 0x3d5298u: goto label_3d5298;
        case 0x3d529cu: goto label_3d529c;
        case 0x3d52a0u: goto label_3d52a0;
        case 0x3d52a4u: goto label_3d52a4;
        case 0x3d52a8u: goto label_3d52a8;
        case 0x3d52acu: goto label_3d52ac;
        case 0x3d52b0u: goto label_3d52b0;
        case 0x3d52b4u: goto label_3d52b4;
        case 0x3d52b8u: goto label_3d52b8;
        case 0x3d52bcu: goto label_3d52bc;
        case 0x3d52c0u: goto label_3d52c0;
        case 0x3d52c4u: goto label_3d52c4;
        case 0x3d52c8u: goto label_3d52c8;
        case 0x3d52ccu: goto label_3d52cc;
        case 0x3d52d0u: goto label_3d52d0;
        case 0x3d52d4u: goto label_3d52d4;
        case 0x3d52d8u: goto label_3d52d8;
        case 0x3d52dcu: goto label_3d52dc;
        case 0x3d52e0u: goto label_3d52e0;
        case 0x3d52e4u: goto label_3d52e4;
        case 0x3d52e8u: goto label_3d52e8;
        case 0x3d52ecu: goto label_3d52ec;
        case 0x3d52f0u: goto label_3d52f0;
        case 0x3d52f4u: goto label_3d52f4;
        case 0x3d52f8u: goto label_3d52f8;
        case 0x3d52fcu: goto label_3d52fc;
        case 0x3d5300u: goto label_3d5300;
        case 0x3d5304u: goto label_3d5304;
        case 0x3d5308u: goto label_3d5308;
        case 0x3d530cu: goto label_3d530c;
        default: break;
    }

    ctx->pc = 0x3d50d0u;

label_3d50d0:
    // 0x3d50d0: 0x27bdf700  addiu       $sp, $sp, -0x900
    ctx->pc = 0x3d50d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964992));
label_3d50d4:
    // 0x3d50d4: 0x7fb208d0  sq          $s2, 0x8D0($sp)
    ctx->pc = 0x3d50d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2256), GPR_VEC(ctx, 18));
label_3d50d8:
    // 0x3d50d8: 0x7fb308c0  sq          $s3, 0x8C0($sp)
    ctx->pc = 0x3d50d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2240), GPR_VEC(ctx, 19));
label_3d50dc:
    // 0x3d50dc: 0x7fb008f0  sq          $s0, 0x8F0($sp)
    ctx->pc = 0x3d50dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2288), GPR_VEC(ctx, 16));
label_3d50e0:
    // 0x3d50e0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3d50e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d50e4:
    // 0x3d50e4: 0x7fb108e0  sq          $s1, 0x8E0($sp)
    ctx->pc = 0x3d50e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2272), GPR_VEC(ctx, 17));
label_3d50e8:
    // 0x3d50e8: 0x7fb408b0  sq          $s4, 0x8B0($sp)
    ctx->pc = 0x3d50e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2224), GPR_VEC(ctx, 20));
label_3d50ec:
    // 0x3d50ec: 0xffbf08a0  sd          $ra, 0x8A0($sp)
    ctx->pc = 0x3d50ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2208), GPR_U64(ctx, 31));
label_3d50f0:
    // 0x3d50f0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3d50f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3d50f4:
    // 0x3d50f4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d50f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d50f8:
    // 0x3d50f8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d50f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d50fc:
    // 0x3d50fc: 0x40f809  jalr        $v0
label_3d5100:
    if (ctx->pc == 0x3D5100u) {
        ctx->pc = 0x3D5100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D50FCu;
        // 0x3d5100: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5104u;
        goto label_3d5104;
    }
    ctx->pc = 0x3D50FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D5104u);
        ctx->pc = 0x3D5100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D50FCu;
        // 0x3d5100: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D50FCu, 0x3D5104u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D5104u;
label_3d5104:
    // 0x3d5104: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d5104u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d5108:
    // 0x3d5108: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d5108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d510c:
    // 0x3d510c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d510cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d5110:
    // 0x3d5110: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3d5110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3d5114:
    // 0x3d5114: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d5114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3d5118:
    // 0x3d5118: 0x0  nop
    ctx->pc = 0x3d5118u;
    // NOP
label_3d511c:
    // 0x3d511c: 0x0  nop
    ctx->pc = 0x3d511cu;
    // NOP
label_3d5120:
    // 0x3d5120: 0x0  nop
    ctx->pc = 0x3d5120u;
    // NOP
label_3d5124:
    // 0x3d5124: 0x0  nop
    ctx->pc = 0x3d5124u;
    // NOP
label_3d5128:
    // 0x3d5128: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3d512c:
    if (ctx->pc == 0x3D512Cu) {
        ctx->pc = 0x3D512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5128u;
        // 0x3d512c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5130u;
        goto label_3d5130;
    }
    ctx->pc = 0x3D5128u;
    {
        const bool branch_taken_0x3d5128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5128u;
        // 0x3d512c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5128) {
            ctx->pc = 0x3D5118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5118;
        }
    }
    ctx->pc = 0x3D5130u;
label_3d5130:
    // 0x3d5130: 0xc138ddc  jal         func_4E3770
label_3d5134:
    if (ctx->pc == 0x3D5134u) {
        ctx->pc = 0x3D5138u;
        goto label_3d5138;
    }
    ctx->pc = 0x3D5130u;
    SET_GPR_U32(ctx, 31, 0x3D5138u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3D5130u, 0x3D5138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5138u;
label_3d5138:
    // 0x3d5138: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x3d5138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3d513c:
    // 0x3d513c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d513cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3d5140:
    // 0x3d5140: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x3d5140u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_3d5144:
    // 0x3d5144: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_3d5148:
    if (ctx->pc == 0x3D5148u) {
        ctx->pc = 0x3D5148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5144u;
        // 0x3d5148: 0x27b40430  addiu       $s4, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D514Cu;
        goto label_3d514c;
    }
    ctx->pc = 0x3D5144u;
    {
        const bool branch_taken_0x3d5144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5144u;
        // 0x3d5148: 0x27b40430  addiu       $s4, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5144) {
            ctx->pc = 0x3D51FCu;
            goto label_3d51fc;
        }
    }
    ctx->pc = 0x3D514Cu;
label_3d514c:
    // 0x3d514c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3d514cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d5150:
    // 0x3d5150: 0xc0e90ca  jal         func_3A4328
label_3d5154:
    if (ctx->pc == 0x3D5154u) {
        ctx->pc = 0x3D5154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5150u;
        // 0x3d5154: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5158u;
        goto label_3d5158;
    }
    ctx->pc = 0x3D5150u;
    SET_GPR_U32(ctx, 31, 0x3D5158u);
    ctx->pc = 0x3D5154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5150u;
    // 0x3d5154: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3D5150u, 0x3D5158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5158u;
label_3d5158:
    // 0x3d5158: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3d5158u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3d515c:
    // 0x3d515c: 0x27a40450  addiu       $a0, $sp, 0x450
    ctx->pc = 0x3d515cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3d5160:
    // 0x3d5160: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3d5160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d5164:
    // 0x3d5164: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x3d5164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3d5168:
    // 0x3d5168: 0xc136afa  jal         func_4DABE8
label_3d516c:
    if (ctx->pc == 0x3D516Cu) {
        ctx->pc = 0x3D516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5168u;
        // 0x3d516c: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5170u;
        goto label_3d5170;
    }
    ctx->pc = 0x3D5168u;
    SET_GPR_U32(ctx, 31, 0x3D5170u);
    ctx->pc = 0x3D516Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5168u;
    // 0x3d516c: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3D5168u, 0x3D5170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5170u;
label_3d5170:
    // 0x3d5170: 0x7ba20450  lq          $v0, 0x450($sp)
    ctx->pc = 0x3d5170u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3d5174:
    // 0x3d5174: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3d5174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3d5178:
    // 0x3d5178: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3d5178u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3d517c:
    // 0x3d517c: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3d517cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d5180:
    // 0x3d5180: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3d5180u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d5184:
    // 0x3d5184: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3d5184u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d5188:
    // 0x3d5188: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3d5188u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_3d518c:
    // 0x3d518c: 0x4a0003bf  vwaitq
    ctx->pc = 0x3d518cu;
    // VWAITQ (Q already resolved in this runtime)
label_3d5190:
    // 0x3d5190: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3d5190u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3d5194:
    // 0x3d5194: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x3d5194u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
label_3d5198:
    // 0x3d5198: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x3d5198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_3d519c:
    // 0x3d519c: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3d519cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3d51a0:
    // 0x3d51a0: 0x7fa60470  sq          $a2, 0x470($sp)
    ctx->pc = 0x3d51a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 6));
label_3d51a4:
    // 0x3d51a4: 0x7fa60430  sq          $a2, 0x430($sp)
    ctx->pc = 0x3d51a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 6));
label_3d51a8:
    // 0x3d51a8: 0x7fa60420  sq          $a2, 0x420($sp)
    ctx->pc = 0x3d51a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 6));
label_3d51ac:
    // 0x3d51ac: 0x7fa60480  sq          $a2, 0x480($sp)
    ctx->pc = 0x3d51acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 6));
label_3d51b0:
    // 0x3d51b0: 0x84820454  lh          $v0, 0x454($a0)
    ctx->pc = 0x3d51b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1108)));
label_3d51b4:
    // 0x3d51b4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_3d51b8:
    if (ctx->pc == 0x3D51B8u) {
        ctx->pc = 0x3D51B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D51B4u;
        // 0x3d51b8: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D51BCu;
        goto label_3d51bc;
    }
    ctx->pc = 0x3D51B4u;
    {
        const bool branch_taken_0x3d51b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d51b4) {
            ctx->pc = 0x3D51B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D51B4u;
            // 0x3d51b8: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D5200u;
            goto label_3d5200;
        }
    }
    ctx->pc = 0x3D51BCu;
label_3d51bc:
    // 0x3d51bc: 0x7ba20410  lq          $v0, 0x410($sp)
    ctx->pc = 0x3d51bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_3d51c0:
    // 0x3d51c0: 0x27b10490  addiu       $s1, $sp, 0x490
    ctx->pc = 0x3d51c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3d51c4:
    // 0x3d51c4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3d51c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3d51c8:
    // 0x3d51c8: 0x7fa60440  sq          $a2, 0x440($sp)
    ctx->pc = 0x3d51c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 6));
label_3d51cc:
    // 0x3d51cc: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3d51ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3d51d0:
    // 0x3d51d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3d51d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d51d4:
    // 0x3d51d4: 0x26104f18  addiu       $s0, $s0, 0x4F18
    ctx->pc = 0x3d51d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20248));
label_3d51d8:
    // 0x3d51d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d51d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d51dc:
    // 0x3d51dc: 0x7fa20430  sq          $v0, 0x430($sp)
    ctx->pc = 0x3d51dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
label_3d51e0:
    // 0x3d51e0: 0x27a60440  addiu       $a2, $sp, 0x440
    ctx->pc = 0x3d51e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3d51e4:
    // 0x3d51e4: 0xafa30450  sw          $v1, 0x450($sp)
    ctx->pc = 0x3d51e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 3));
label_3d51e8:
    // 0x3d51e8: 0xc0e9fa6  jal         func_3A7E98
label_3d51ec:
    if (ctx->pc == 0x3D51ECu) {
        ctx->pc = 0x3D51ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D51E8u;
        // 0x3d51ec: 0x27a70450  addiu       $a3, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D51F0u;
        goto label_3d51f0;
    }
    ctx->pc = 0x3D51E8u;
    SET_GPR_U32(ctx, 31, 0x3D51F0u);
    ctx->pc = 0x3D51ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D51E8u;
    // 0x3d51ec: 0x27a70450  addiu       $a3, $sp, 0x450 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3D51E8u, 0x3D51F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D51F0u;
label_3d51f0:
    // 0x3d51f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d51f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d51f4:
    // 0x3d51f4: 0xc0f15bc  jal         func_3C56F0
label_3d51f8:
    if (ctx->pc == 0x3D51F8u) {
        ctx->pc = 0x3D51F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D51F4u;
        // 0x3d51f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D51FCu;
        goto label_3d51fc;
    }
    ctx->pc = 0x3D51F4u;
    SET_GPR_U32(ctx, 31, 0x3D51FCu);
    ctx->pc = 0x3D51F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D51F4u;
    // 0x3d51f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D51F4u, 0x3D51FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D51FCu;
label_3d51fc:
    // 0x3d51fc: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x3d51fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3d5200:
    // 0x3d5200: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3d5200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d5204:
    // 0x3d5204: 0x54400032  bnel        $v0, $zero, . + 4 + (0x32 << 2)
label_3d5208:
    if (ctx->pc == 0x3D5208u) {
        ctx->pc = 0x3D5208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5204u;
        // 0x3d5208: 0x8e430014  lw          $v1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D520Cu;
        goto label_3d520c;
    }
    ctx->pc = 0x3D5204u;
    {
        const bool branch_taken_0x3d5204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d5204) {
            ctx->pc = 0x3D5208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D5204u;
            // 0x3d5208: 0x8e430014  lw          $v1, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D52D0u;
            goto label_3d52d0;
        }
    }
    ctx->pc = 0x3D520Cu;
label_3d520c:
    // 0x3d520c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3d520cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d5210:
    // 0x3d5210: 0xc0e858c  jal         func_3A1630
label_3d5214:
    if (ctx->pc == 0x3D5214u) {
        ctx->pc = 0x3D5214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5210u;
        // 0x3d5214: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5218u;
        goto label_3d5218;
    }
    ctx->pc = 0x3D5210u;
    SET_GPR_U32(ctx, 31, 0x3D5218u);
    ctx->pc = 0x3D5214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5210u;
    // 0x3d5214: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D5210u, 0x3D5218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5218u;
label_3d5218:
    // 0x3d5218: 0x27b10430  addiu       $s1, $sp, 0x430
    ctx->pc = 0x3d5218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3d521c:
    // 0x3d521c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3d521cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d5220:
    // 0x3d5220: 0xc0e90ca  jal         func_3A4328
label_3d5224:
    if (ctx->pc == 0x3D5224u) {
        ctx->pc = 0x3D5224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5220u;
        // 0x3d5224: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5228u;
        goto label_3d5228;
    }
    ctx->pc = 0x3D5220u;
    SET_GPR_U32(ctx, 31, 0x3D5228u);
    ctx->pc = 0x3D5224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5220u;
    // 0x3d5224: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3D5220u, 0x3D5228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5228u;
label_3d5228:
    // 0x3d5228: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3d5228u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3d522c:
    // 0x3d522c: 0x27a40450  addiu       $a0, $sp, 0x450
    ctx->pc = 0x3d522cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3d5230:
    // 0x3d5230: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x3d5230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3d5234:
    // 0x3d5234: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3d5234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d5238:
    // 0x3d5238: 0xc136afa  jal         func_4DABE8
label_3d523c:
    if (ctx->pc == 0x3D523Cu) {
        ctx->pc = 0x3D523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5238u;
        // 0x3d523c: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5240u;
        goto label_3d5240;
    }
    ctx->pc = 0x3D5238u;
    SET_GPR_U32(ctx, 31, 0x3D5240u);
    ctx->pc = 0x3D523Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5238u;
    // 0x3d523c: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3D5238u, 0x3D5240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5240u;
label_3d5240:
    // 0x3d5240: 0x7ba20450  lq          $v0, 0x450($sp)
    ctx->pc = 0x3d5240u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3d5244:
    // 0x3d5244: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3d5244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3d5248:
    // 0x3d5248: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3d5248u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3d524c:
    // 0x3d524c: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3d524cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d5250:
    // 0x3d5250: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3d5250u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d5254:
    // 0x3d5254: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3d5254u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d5258:
    // 0x3d5258: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3d5258u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_3d525c:
    // 0x3d525c: 0x4a0003bf  vwaitq
    ctx->pc = 0x3d525cu;
    // VWAITQ (Q already resolved in this runtime)
label_3d5260:
    // 0x3d5260: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3d5260u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3d5264:
    // 0x3d5264: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x3d5264u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
label_3d5268:
    // 0x3d5268: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x3d5268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_3d526c:
    // 0x3d526c: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3d526cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3d5270:
    // 0x3d5270: 0x7fa50460  sq          $a1, 0x460($sp)
    ctx->pc = 0x3d5270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 5));
label_3d5274:
    // 0x3d5274: 0x7fa50430  sq          $a1, 0x430($sp)
    ctx->pc = 0x3d5274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 5));
label_3d5278:
    // 0x3d5278: 0x7fa50420  sq          $a1, 0x420($sp)
    ctx->pc = 0x3d5278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 5));
label_3d527c:
    // 0x3d527c: 0x7fa50470  sq          $a1, 0x470($sp)
    ctx->pc = 0x3d527cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 5));
label_3d5280:
    // 0x3d5280: 0x84820454  lh          $v0, 0x454($a0)
    ctx->pc = 0x3d5280u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1108)));
label_3d5284:
    // 0x3d5284: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_3d5288:
    if (ctx->pc == 0x3D5288u) {
        ctx->pc = 0x3D5288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5284u;
        // 0x3d5288: 0x7ba20410  lq          $v0, 0x410($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D528Cu;
        goto label_3d528c;
    }
    ctx->pc = 0x3D5284u;
    {
        const bool branch_taken_0x3d5284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D5288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5284u;
        // 0x3d5288: 0x7ba20410  lq          $v0, 0x410($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5284) {
            ctx->pc = 0x3D52C8u;
            goto label_3d52c8;
        }
    }
    ctx->pc = 0x3D528Cu;
label_3d528c:
    // 0x3d528c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3d528cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3d5290:
    // 0x3d5290: 0x7fa50850  sq          $a1, 0x850($sp)
    ctx->pc = 0x3d5290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 5));
label_3d5294:
    // 0x3d5294: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3d5294u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3d5298:
    // 0x3d5298: 0x26104f28  addiu       $s0, $s0, 0x4F28
    ctx->pc = 0x3d5298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20264));
label_3d529c:
    // 0x3d529c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d529cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d52a0:
    // 0x3d52a0: 0x27a50840  addiu       $a1, $sp, 0x840
    ctx->pc = 0x3d52a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
label_3d52a4:
    // 0x3d52a4: 0x7fa20840  sq          $v0, 0x840($sp)
    ctx->pc = 0x3d52a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 2));
label_3d52a8:
    // 0x3d52a8: 0xafa30860  sw          $v1, 0x860($sp)
    ctx->pc = 0x3d52a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2144), GPR_U32(ctx, 3));
label_3d52ac:
    // 0x3d52ac: 0x27a60850  addiu       $a2, $sp, 0x850
    ctx->pc = 0x3d52acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3d52b0:
    // 0x3d52b0: 0xc0e9fa6  jal         func_3A7E98
label_3d52b4:
    if (ctx->pc == 0x3D52B4u) {
        ctx->pc = 0x3D52B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D52B0u;
        // 0x3d52b4: 0x27a70860  addiu       $a3, $sp, 0x860 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D52B8u;
        goto label_3d52b8;
    }
    ctx->pc = 0x3D52B0u;
    SET_GPR_U32(ctx, 31, 0x3D52B8u);
    ctx->pc = 0x3D52B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D52B0u;
    // 0x3d52b4: 0x27a70860  addiu       $a3, $sp, 0x860 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3D52B0u, 0x3D52B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D52B8u;
label_3d52b8:
    // 0x3d52b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d52b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d52bc:
    // 0x3d52bc: 0xc0f15bc  jal         func_3C56F0
label_3d52c0:
    if (ctx->pc == 0x3D52C0u) {
        ctx->pc = 0x3D52C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D52BCu;
        // 0x3d52c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D52C4u;
        goto label_3d52c4;
    }
    ctx->pc = 0x3D52BCu;
    SET_GPR_U32(ctx, 31, 0x3D52C4u);
    ctx->pc = 0x3D52C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D52BCu;
    // 0x3d52c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D52BCu, 0x3D52C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D52C4u;
label_3d52c4:
    // 0x3d52c4: 0x7ba20410  lq          $v0, 0x410($sp)
    ctx->pc = 0x3d52c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_3d52c8:
    // 0x3d52c8: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x3d52c8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_3d52cc:
    // 0x3d52cc: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x3d52ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3d52d0:
    // 0x3d52d0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3d52d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3d52d4:
    // 0x3d52d4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_3d52d8:
    if (ctx->pc == 0x3D52D8u) {
        ctx->pc = 0x3D52D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D52D4u;
        // 0x3d52d8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D52DCu;
        goto label_3d52dc;
    }
    ctx->pc = 0x3D52D4u;
    {
        const bool branch_taken_0x3d52d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D52D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D52D4u;
        // 0x3d52d8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d52d4) {
            ctx->pc = 0x3D52E8u;
            goto label_3d52e8;
        }
    }
    ctx->pc = 0x3D52DCu;
label_3d52dc:
    // 0x3d52dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d52dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d52e0:
    // 0x3d52e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_3d52e4:
    if (ctx->pc == 0x3D52E4u) {
        ctx->pc = 0x3D52E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D52E0u;
        // 0x3d52e4: 0xae430014  sw          $v1, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D52E8u;
        goto label_3d52e8;
    }
    ctx->pc = 0x3D52E0u;
    {
        const bool branch_taken_0x3d52e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D52E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D52E0u;
        // 0x3d52e4: 0xae430014  sw          $v1, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d52e0) {
            ctx->pc = 0x3D52ECu;
            goto label_3d52ec;
        }
    }
    ctx->pc = 0x3D52E8u;
label_3d52e8:
    // 0x3d52e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d52e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d52ec:
    // 0x3d52ec: 0x7bb008f0  lq          $s0, 0x8F0($sp)
    ctx->pc = 0x3d52ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2288)));
label_3d52f0:
    // 0x3d52f0: 0x7bb108e0  lq          $s1, 0x8E0($sp)
    ctx->pc = 0x3d52f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2272)));
label_3d52f4:
    // 0x3d52f4: 0x7bb208d0  lq          $s2, 0x8D0($sp)
    ctx->pc = 0x3d52f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2256)));
label_3d52f8:
    // 0x3d52f8: 0x7bb308c0  lq          $s3, 0x8C0($sp)
    ctx->pc = 0x3d52f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2240)));
label_3d52fc:
    // 0x3d52fc: 0x7bb408b0  lq          $s4, 0x8B0($sp)
    ctx->pc = 0x3d52fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2224)));
label_3d5300:
    // 0x3d5300: 0xdfbf08a0  ld          $ra, 0x8A0($sp)
    ctx->pc = 0x3d5300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2208)));
label_3d5304:
    // 0x3d5304: 0x3e00008  jr          $ra
label_3d5308:
    if (ctx->pc == 0x3D5308u) {
        ctx->pc = 0x3D5308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5304u;
        // 0x3d5308: 0x27bd0900  addiu       $sp, $sp, 0x900 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D530Cu;
        goto label_3d530c;
    }
    ctx->pc = 0x3D5304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5304u;
        // 0x3d5308: 0x27bd0900  addiu       $sp, $sp, 0x900 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D530Cu;
label_3d530c:
    // 0x3d530c: 0x0  nop
    ctx->pc = 0x3d530cu;
    // NOP
    ctx->pc = 0x3d5310u;
}
