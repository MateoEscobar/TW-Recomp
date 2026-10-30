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

// Function: sub_001EC238
// Address: 0x1ec238 - 0x1ec368
void sub_001EC238_0x1ec238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC238_0x1ec238");
#endif

    switch (ctx->pc) {
        case 0x1ec238u: goto label_1ec238;
        case 0x1ec23cu: goto label_1ec23c;
        case 0x1ec240u: goto label_1ec240;
        case 0x1ec244u: goto label_1ec244;
        case 0x1ec248u: goto label_1ec248;
        case 0x1ec24cu: goto label_1ec24c;
        case 0x1ec250u: goto label_1ec250;
        case 0x1ec254u: goto label_1ec254;
        case 0x1ec258u: goto label_1ec258;
        case 0x1ec25cu: goto label_1ec25c;
        case 0x1ec260u: goto label_1ec260;
        case 0x1ec264u: goto label_1ec264;
        case 0x1ec268u: goto label_1ec268;
        case 0x1ec26cu: goto label_1ec26c;
        case 0x1ec270u: goto label_1ec270;
        case 0x1ec274u: goto label_1ec274;
        case 0x1ec278u: goto label_1ec278;
        case 0x1ec27cu: goto label_1ec27c;
        case 0x1ec280u: goto label_1ec280;
        case 0x1ec284u: goto label_1ec284;
        case 0x1ec288u: goto label_1ec288;
        case 0x1ec28cu: goto label_1ec28c;
        case 0x1ec290u: goto label_1ec290;
        case 0x1ec294u: goto label_1ec294;
        case 0x1ec298u: goto label_1ec298;
        case 0x1ec29cu: goto label_1ec29c;
        case 0x1ec2a0u: goto label_1ec2a0;
        case 0x1ec2a4u: goto label_1ec2a4;
        case 0x1ec2a8u: goto label_1ec2a8;
        case 0x1ec2acu: goto label_1ec2ac;
        case 0x1ec2b0u: goto label_1ec2b0;
        case 0x1ec2b4u: goto label_1ec2b4;
        case 0x1ec2b8u: goto label_1ec2b8;
        case 0x1ec2bcu: goto label_1ec2bc;
        case 0x1ec2c0u: goto label_1ec2c0;
        case 0x1ec2c4u: goto label_1ec2c4;
        case 0x1ec2c8u: goto label_1ec2c8;
        case 0x1ec2ccu: goto label_1ec2cc;
        case 0x1ec2d0u: goto label_1ec2d0;
        case 0x1ec2d4u: goto label_1ec2d4;
        case 0x1ec2d8u: goto label_1ec2d8;
        case 0x1ec2dcu: goto label_1ec2dc;
        case 0x1ec2e0u: goto label_1ec2e0;
        case 0x1ec2e4u: goto label_1ec2e4;
        case 0x1ec2e8u: goto label_1ec2e8;
        case 0x1ec2ecu: goto label_1ec2ec;
        case 0x1ec2f0u: goto label_1ec2f0;
        case 0x1ec2f4u: goto label_1ec2f4;
        case 0x1ec2f8u: goto label_1ec2f8;
        case 0x1ec2fcu: goto label_1ec2fc;
        case 0x1ec300u: goto label_1ec300;
        case 0x1ec304u: goto label_1ec304;
        case 0x1ec308u: goto label_1ec308;
        case 0x1ec30cu: goto label_1ec30c;
        case 0x1ec310u: goto label_1ec310;
        case 0x1ec314u: goto label_1ec314;
        case 0x1ec318u: goto label_1ec318;
        case 0x1ec31cu: goto label_1ec31c;
        case 0x1ec320u: goto label_1ec320;
        case 0x1ec324u: goto label_1ec324;
        case 0x1ec328u: goto label_1ec328;
        case 0x1ec32cu: goto label_1ec32c;
        case 0x1ec330u: goto label_1ec330;
        case 0x1ec334u: goto label_1ec334;
        case 0x1ec338u: goto label_1ec338;
        case 0x1ec33cu: goto label_1ec33c;
        case 0x1ec340u: goto label_1ec340;
        case 0x1ec344u: goto label_1ec344;
        case 0x1ec348u: goto label_1ec348;
        case 0x1ec34cu: goto label_1ec34c;
        case 0x1ec350u: goto label_1ec350;
        case 0x1ec354u: goto label_1ec354;
        case 0x1ec358u: goto label_1ec358;
        case 0x1ec35cu: goto label_1ec35c;
        case 0x1ec360u: goto label_1ec360;
        case 0x1ec364u: goto label_1ec364;
        default: break;
    }

    ctx->pc = 0x1ec238u;

label_1ec238:
    // 0x1ec238: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ec238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ec23c:
    // 0x1ec23c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ec23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1ec240:
    // 0x1ec240: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ec240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1ec244:
    // 0x1ec244: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ec244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ec248:
    // 0x1ec248: 0xc06a38c  jal         func_1A8E30
label_1ec24c:
    if (ctx->pc == 0x1EC24Cu) {
        ctx->pc = 0x1EC24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC248u;
        // 0x1ec24c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC250u;
        goto label_1ec250;
    }
    ctx->pc = 0x1EC248u;
    SET_GPR_U32(ctx, 31, 0x1EC250u);
    ctx->pc = 0x1EC24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC248u;
    // 0x1ec24c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1EC248u, 0x1EC250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC250u;
label_1ec250:
    // 0x1ec250: 0x26300078  addiu       $s0, $s1, 0x78
    ctx->pc = 0x1ec250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_1ec254:
    // 0x1ec254: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1ec254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1ec258:
    // 0x1ec258: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1ec258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1ec25c:
    // 0x1ec25c: 0x24638778  addiu       $v1, $v1, -0x7888
    ctx->pc = 0x1ec25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936440));
label_1ec260:
    // 0x1ec260: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x1ec260u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_1ec264:
    // 0x1ec264: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1ec264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1ec268:
    // 0x1ec268: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x1ec268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_1ec26c:
    // 0x1ec26c: 0x24428510  addiu       $v0, $v0, -0x7AF0
    ctx->pc = 0x1ec26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935824));
label_1ec270:
    // 0x1ec270: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1ec270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1ec274:
    // 0x1ec274: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x1ec274u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_1ec278:
    // 0x1ec278: 0x2463cc88  addiu       $v1, $v1, -0x3378
    ctx->pc = 0x1ec278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954120));
label_1ec27c:
    // 0x1ec27c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1ec27cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_1ec280:
    // 0x1ec280: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ec280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ec284:
    // 0x1ec284: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1ec284u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_1ec288:
    // 0x1ec288: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1ec288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1ec28c:
    // 0x1ec28c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1ec28cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1ec290:
    // 0x1ec290: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1ec290u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1ec294:
    // 0x1ec294: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1ec294u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_1ec298:
    // 0x1ec298: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x1ec298u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_1ec29c:
    // 0x1ec29c: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x1ec29cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
label_1ec2a0:
    // 0x1ec2a0: 0x24a56df0  addiu       $a1, $a1, 0x6DF0
    ctx->pc = 0x1ec2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28144));
label_1ec2a4:
    // 0x1ec2a4: 0x8c4cb9c0  lw          $t4, -0x4640($v0)
    ctx->pc = 0x1ec2a4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1ec2a8:
    // 0x1ec2a8: 0x25086df8  addiu       $t0, $t0, 0x6DF8
    ctx->pc = 0x1ec2a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28152));
label_1ec2ac:
    // 0x1ec2ac: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1ec2acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1ec2b0:
    // 0x1ec2b0: 0x254a6e20  addiu       $t2, $t2, 0x6E20
    ctx->pc = 0x1ec2b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 28192));
label_1ec2b4:
    // 0x1ec2b4: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1ec2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ec2b8:
    // 0x1ec2b8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1ec2b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ec2bc:
    // 0x1ec2bc: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1ec2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1ec2c0:
    // 0x1ec2c0: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x1ec2c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1ec2c4:
    // 0x1ec2c4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ec2c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec2c8:
    // 0x1ec2c8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1ec2c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1ec2cc:
    // 0x1ec2cc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1ec2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1ec2d0:
    // 0x1ec2d0: 0x40f809  jalr        $v0
label_1ec2d4:
    if (ctx->pc == 0x1EC2D4u) {
        ctx->pc = 0x1EC2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC2D0u;
        // 0x1ec2d4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC2D8u;
        goto label_1ec2d8;
    }
    ctx->pc = 0x1EC2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EC2D8u);
        ctx->pc = 0x1EC2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC2D0u;
        // 0x1ec2d4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC2D0u, 0x1EC2D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EC2D8u;
label_1ec2d8:
    // 0x1ec2d8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ec2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1ec2dc:
    // 0x1ec2dc: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x1ec2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_1ec2e0:
    // 0x1ec2e0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1ec2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1ec2e4:
    // 0x1ec2e4: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x1ec2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_1ec2e8:
    // 0x1ec2e8: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x1ec2e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
label_1ec2ec:
    // 0x1ec2ec: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x1ec2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_1ec2f0:
    // 0x1ec2f0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1ec2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1ec2f4:
    // 0x1ec2f4: 0x24c6cdc0  addiu       $a2, $a2, -0x3240
    ctx->pc = 0x1ec2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954432));
label_1ec2f8:
    // 0x1ec2f8: 0x24a5cde8  addiu       $a1, $a1, -0x3218
    ctx->pc = 0x1ec2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954472));
label_1ec2fc:
    // 0x1ec2fc: 0x2484ce18  addiu       $a0, $a0, -0x31E8
    ctx->pc = 0x1ec2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954520));
label_1ec300:
    // 0x1ec300: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ec300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ec304:
    // 0x1ec304: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x1ec304u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
label_1ec308:
    // 0x1ec308: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x1ec308u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ec30c:
    // 0x1ec30c: 0x26270094  addiu       $a3, $s1, 0x94
    ctx->pc = 0x1ec30cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
label_1ec310:
    // 0x1ec310: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1ec310u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1ec314:
    // 0x1ec314: 0x24090009  addiu       $t1, $zero, 0x9
    ctx->pc = 0x1ec314u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1ec318:
    // 0x1ec318: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x1ec318u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_1ec31c:
    // 0x1ec31c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ec31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ec320:
    // 0x1ec320: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x1ec320u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_1ec324:
    // 0x1ec324: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1ec324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1ec328:
    // 0x1ec328: 0xac63000c  sw          $v1, 0xC($v1)
    ctx->pc = 0x1ec328u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 3));
label_1ec32c:
    // 0x1ec32c: 0xae26006c  sw          $a2, 0x6C($s1)
    ctx->pc = 0x1ec32cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 6));
label_1ec330:
    // 0x1ec330: 0xae250088  sw          $a1, 0x88($s1)
    ctx->pc = 0x1ec330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 5));
label_1ec334:
    // 0x1ec334: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x1ec334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_1ec338:
    // 0x1ec338: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x1ec338u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
label_1ec33c:
    // 0x1ec33c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1ec33cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_1ec340:
    // 0x1ec340: 0x0  nop
    ctx->pc = 0x1ec340u;
    // NOP
label_1ec344:
    // 0x1ec344: 0x0  nop
    ctx->pc = 0x1ec344u;
    // NOP
label_1ec348:
    // 0x1ec348: 0x152afffb  bne         $t1, $t2, . + 4 + (-0x5 << 2)
label_1ec34c:
    if (ctx->pc == 0x1EC34Cu) {
        ctx->pc = 0x1EC34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC348u;
        // 0x1ec34c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC350u;
        goto label_1ec350;
    }
    ctx->pc = 0x1EC348u;
    {
        const bool branch_taken_0x1ec348 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 10));
        ctx->pc = 0x1EC34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC348u;
        // 0x1ec34c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec348) {
            ctx->pc = 0x1EC338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec338;
        }
    }
    ctx->pc = 0x1EC350u;
label_1ec350:
    // 0x1ec350: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ec350u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ec354:
    // 0x1ec354: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ec354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ec358:
    // 0x1ec358: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ec358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ec35c:
    // 0x1ec35c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ec35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ec360:
    // 0x1ec360: 0x3e00008  jr          $ra
label_1ec364:
    if (ctx->pc == 0x1EC364u) {
        ctx->pc = 0x1EC364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC360u;
        // 0x1ec364: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC368u;
        goto label_fallthrough_0x1ec360;
    }
    ctx->pc = 0x1EC360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC360u;
        // 0x1ec364: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ec360:
    ctx->pc = 0x1EC368u;
}
