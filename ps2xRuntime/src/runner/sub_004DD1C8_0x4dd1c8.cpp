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

// Function: sub_004DD1C8
// Address: 0x4dd1c8 - 0x4dd340
void sub_004DD1C8_0x4dd1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DD1C8_0x4dd1c8");
#endif

    switch (ctx->pc) {
        case 0x4dd1c8u: goto label_4dd1c8;
        case 0x4dd1ccu: goto label_4dd1cc;
        case 0x4dd1d0u: goto label_4dd1d0;
        case 0x4dd1d4u: goto label_4dd1d4;
        case 0x4dd1d8u: goto label_4dd1d8;
        case 0x4dd1dcu: goto label_4dd1dc;
        case 0x4dd1e0u: goto label_4dd1e0;
        case 0x4dd1e4u: goto label_4dd1e4;
        case 0x4dd1e8u: goto label_4dd1e8;
        case 0x4dd1ecu: goto label_4dd1ec;
        case 0x4dd1f0u: goto label_4dd1f0;
        case 0x4dd1f4u: goto label_4dd1f4;
        case 0x4dd1f8u: goto label_4dd1f8;
        case 0x4dd1fcu: goto label_4dd1fc;
        case 0x4dd200u: goto label_4dd200;
        case 0x4dd204u: goto label_4dd204;
        case 0x4dd208u: goto label_4dd208;
        case 0x4dd20cu: goto label_4dd20c;
        case 0x4dd210u: goto label_4dd210;
        case 0x4dd214u: goto label_4dd214;
        case 0x4dd218u: goto label_4dd218;
        case 0x4dd21cu: goto label_4dd21c;
        case 0x4dd220u: goto label_4dd220;
        case 0x4dd224u: goto label_4dd224;
        case 0x4dd228u: goto label_4dd228;
        case 0x4dd22cu: goto label_4dd22c;
        case 0x4dd230u: goto label_4dd230;
        case 0x4dd234u: goto label_4dd234;
        case 0x4dd238u: goto label_4dd238;
        case 0x4dd23cu: goto label_4dd23c;
        case 0x4dd240u: goto label_4dd240;
        case 0x4dd244u: goto label_4dd244;
        case 0x4dd248u: goto label_4dd248;
        case 0x4dd24cu: goto label_4dd24c;
        case 0x4dd250u: goto label_4dd250;
        case 0x4dd254u: goto label_4dd254;
        case 0x4dd258u: goto label_4dd258;
        case 0x4dd25cu: goto label_4dd25c;
        case 0x4dd260u: goto label_4dd260;
        case 0x4dd264u: goto label_4dd264;
        case 0x4dd268u: goto label_4dd268;
        case 0x4dd26cu: goto label_4dd26c;
        case 0x4dd270u: goto label_4dd270;
        case 0x4dd274u: goto label_4dd274;
        case 0x4dd278u: goto label_4dd278;
        case 0x4dd27cu: goto label_4dd27c;
        case 0x4dd280u: goto label_4dd280;
        case 0x4dd284u: goto label_4dd284;
        case 0x4dd288u: goto label_4dd288;
        case 0x4dd28cu: goto label_4dd28c;
        case 0x4dd290u: goto label_4dd290;
        case 0x4dd294u: goto label_4dd294;
        case 0x4dd298u: goto label_4dd298;
        case 0x4dd29cu: goto label_4dd29c;
        case 0x4dd2a0u: goto label_4dd2a0;
        case 0x4dd2a4u: goto label_4dd2a4;
        case 0x4dd2a8u: goto label_4dd2a8;
        case 0x4dd2acu: goto label_4dd2ac;
        case 0x4dd2b0u: goto label_4dd2b0;
        case 0x4dd2b4u: goto label_4dd2b4;
        case 0x4dd2b8u: goto label_4dd2b8;
        case 0x4dd2bcu: goto label_4dd2bc;
        case 0x4dd2c0u: goto label_4dd2c0;
        case 0x4dd2c4u: goto label_4dd2c4;
        case 0x4dd2c8u: goto label_4dd2c8;
        case 0x4dd2ccu: goto label_4dd2cc;
        case 0x4dd2d0u: goto label_4dd2d0;
        case 0x4dd2d4u: goto label_4dd2d4;
        case 0x4dd2d8u: goto label_4dd2d8;
        case 0x4dd2dcu: goto label_4dd2dc;
        case 0x4dd2e0u: goto label_4dd2e0;
        case 0x4dd2e4u: goto label_4dd2e4;
        case 0x4dd2e8u: goto label_4dd2e8;
        case 0x4dd2ecu: goto label_4dd2ec;
        case 0x4dd2f0u: goto label_4dd2f0;
        case 0x4dd2f4u: goto label_4dd2f4;
        case 0x4dd2f8u: goto label_4dd2f8;
        case 0x4dd2fcu: goto label_4dd2fc;
        case 0x4dd300u: goto label_4dd300;
        case 0x4dd304u: goto label_4dd304;
        case 0x4dd308u: goto label_4dd308;
        case 0x4dd30cu: goto label_4dd30c;
        case 0x4dd310u: goto label_4dd310;
        case 0x4dd314u: goto label_4dd314;
        case 0x4dd318u: goto label_4dd318;
        case 0x4dd31cu: goto label_4dd31c;
        case 0x4dd320u: goto label_4dd320;
        case 0x4dd324u: goto label_4dd324;
        case 0x4dd328u: goto label_4dd328;
        case 0x4dd32cu: goto label_4dd32c;
        case 0x4dd330u: goto label_4dd330;
        case 0x4dd334u: goto label_4dd334;
        case 0x4dd338u: goto label_4dd338;
        case 0x4dd33cu: goto label_4dd33c;
        default: break;
    }

    ctx->pc = 0x4dd1c8u;

label_4dd1c8:
    // 0x4dd1c8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4dd1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4dd1cc:
    // 0x4dd1cc: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x4dd1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_4dd1d0:
    // 0x4dd1d0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x4dd1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_4dd1d4:
    // 0x4dd1d4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x4dd1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4dd1d8:
    // 0x4dd1d8: 0x24140054  addiu       $s4, $zero, 0x54
    ctx->pc = 0x4dd1d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4dd1dc:
    // 0x4dd1dc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x4dd1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_4dd1e0:
    // 0x4dd1e0: 0x74001b  divu        $zero, $v1, $s4
    ctx->pc = 0x4dd1e0u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_4dd1e4:
    // 0x4dd1e4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x4dd1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_4dd1e8:
    // 0x4dd1e8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x4dd1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_4dd1ec:
    // 0x4dd1ec: 0x27ac0004  addiu       $t4, $sp, 0x4
    ctx->pc = 0x4dd1ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_4dd1f0:
    // 0x4dd1f0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4dd1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4dd1f4:
    // 0x4dd1f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4dd1f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dd1f8:
    // 0x4dd1f8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x4dd1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_4dd1fc:
    // 0x4dd1fc: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x4dd1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_4dd200:
    // 0x4dd200: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4dd200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4dd204:
    // 0x4dd204: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x4dd204u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_4dd208:
    // 0x4dd208: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
label_4dd20c:
    if (ctx->pc == 0x4DD20Cu) {
        ctx->pc = 0x4DD20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD208u;
        // 0x4dd20c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD210u;
        goto label_4dd210;
    }
    ctx->pc = 0x4DD208u;
    {
        const bool branch_taken_0x4dd208 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd208) {
            ctx->pc = 0x4DD20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DD208u;
            // 0x4dd20c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DD210u;
            goto label_4dd210;
        }
    }
    ctx->pc = 0x4DD210u;
label_4dd210:
    // 0x4dd210: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4dd210u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4dd214:
    // 0x4dd214: 0x2508e600  addiu       $t0, $t0, -0x1A00
    ctx->pc = 0x4dd214u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294960640));
label_4dd218:
    // 0x4dd218: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4dd218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4dd21c:
    // 0x4dd21c: 0x254ae628  addiu       $t2, $t2, -0x19D8
    ctx->pc = 0x4dd21cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294960680));
label_4dd220:
    // 0x4dd220: 0x8c4db9c0  lw          $t5, -0x4640($v0)
    ctx->pc = 0x4dd220u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4dd224:
    // 0x4dd224: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4dd224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4dd228:
    // 0x4dd228: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4dd228u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4dd22c:
    // 0x4dd22c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4dd22cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dd230:
    // 0x4dd230: 0x3010  mfhi        $a2
    ctx->pc = 0x4dd230u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_4dd234:
    // 0x4dd234: 0x1812  mflo        $v1
    ctx->pc = 0x4dd234u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_4dd238:
    // 0x4dd238: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x4dd238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
label_4dd23c:
    // 0x4dd23c: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x4dd23cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_4dd240:
    // 0x4dd240: 0x2485e5f8  addiu       $a1, $a0, -0x1A08
    ctx->pc = 0x4dd240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960632));
label_4dd244:
    // 0x4dd244: 0x8812  mflo        $s1
    ctx->pc = 0x4dd244u;
    SET_GPR_U64(ctx, 17, ctx->lo);
label_4dd248:
    // 0x4dd248: 0xa810  mfhi        $s5
    ctx->pc = 0x4dd248u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_4dd24c:
    // 0x4dd24c: 0x26220003  addiu       $v0, $s1, 0x3
    ctx->pc = 0x4dd24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
label_4dd250:
    // 0x4dd250: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4dd250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_4dd254:
    // 0x4dd254: 0xc2302b  sltu        $a2, $a2, $v0
    ctx->pc = 0x4dd254u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4dd258:
    // 0x4dd258: 0x3a6600a  movz        $t4, $sp, $a2
    ctx->pc = 0x4dd258u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 29));
label_4dd25c:
    // 0x4dd25c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4dd25cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4dd260:
    // 0x4dd260: 0x8d860000  lw          $a2, 0x0($t4)
    ctx->pc = 0x4dd260u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_4dd264:
    // 0x4dd264: 0xae460008  sw          $a2, 0x8($s2)
    ctx->pc = 0x4dd264u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 6));
label_4dd268:
    // 0x4dd268: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4dd268u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4dd26c:
    // 0x4dd26c: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x4dd26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_4dd270:
    // 0x4dd270: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4dd270u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4dd274:
    // 0x4dd274: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4dd274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4dd278:
    // 0x4dd278: 0x40f809  jalr        $v0
label_4dd27c:
    if (ctx->pc == 0x4DD27Cu) {
        ctx->pc = 0x4DD27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD278u;
        // 0x4dd27c: 0x1a42021  addu        $a0, $t5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD280u;
        goto label_4dd280;
    }
    ctx->pc = 0x4DD278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4DD280u);
        ctx->pc = 0x4DD27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD278u;
        // 0x4dd27c: 0x1a42021  addu        $a0, $t5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DD278u, 0x4DD280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DD280u;
label_4dd280:
    // 0x4dd280: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4dd280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4dd284:
    // 0x4dd284: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4dd284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dd288:
    // 0x4dd288: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x4dd288u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_4dd28c:
    // 0x4dd28c: 0x119880  sll         $s3, $s1, 2
    ctx->pc = 0x4dd28cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_4dd290:
    // 0x4dd290: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x4dd290u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_4dd294:
    // 0x4dd294: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4dd294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4dd298:
    // 0x4dd298: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x4dd298u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_4dd29c:
    // 0x4dd29c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4dd29cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4dd2a0:
    // 0x4dd2a0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x4dd2a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_4dd2a4:
    // 0x4dd2a4: 0x2139821  addu        $s3, $s0, $s3
    ctx->pc = 0x4dd2a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_4dd2a8:
    // 0x4dd2a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4dd2a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dd2ac:
    // 0x4dd2ac: 0xc137442  jal         func_4DD108
label_4dd2b0:
    if (ctx->pc == 0x4DD2B0u) {
        ctx->pc = 0x4DD2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD2ACu;
        // 0x4dd2b0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD2B4u;
        goto label_4dd2b4;
    }
    ctx->pc = 0x4DD2ACu;
    SET_GPR_U32(ctx, 31, 0x4DD2B4u);
    ctx->pc = 0x4DD2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DD2ACu;
    // 0x4dd2b0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DD108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DD108u, 0x4DD2ACu, 0x4DD2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DD2B4u;
label_4dd2b4:
    // 0x4dd2b4: 0x2643000c  addiu       $v1, $s2, 0xC
    ctx->pc = 0x4dd2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_4dd2b8:
    // 0x4dd2b8: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x4dd2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4dd2bc:
    // 0x4dd2bc: 0xac70000c  sw          $s0, 0xC($v1)
    ctx->pc = 0x4dd2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 16));
label_4dd2c0:
    // 0x4dd2c0: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x4dd2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_4dd2c4:
    // 0x4dd2c4: 0x2665fffc  addiu       $a1, $s3, -0x4
    ctx->pc = 0x4dd2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
label_4dd2c8:
    // 0x4dd2c8: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4dd2c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4dd2cc:
    // 0x4dd2cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4dd2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4dd2d0:
    // 0x4dd2d0: 0x24090054  addiu       $t1, $zero, 0x54
    ctx->pc = 0x4dd2d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4dd2d4:
    // 0x4dd2d4: 0x2b4a818  mult        $s5, $s5, $s4
    ctx->pc = 0x4dd2d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_4dd2d8:
    // 0x4dd2d8: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x4dd2d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4dd2dc:
    // 0x4dd2dc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x4dd2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_4dd2e0:
    // 0x4dd2e0: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_4dd2e4:
    if (ctx->pc == 0x4DD2E4u) {
        ctx->pc = 0x4DD2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD2E0u;
        // 0x4dd2e4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD2E8u;
        goto label_4dd2e8;
    }
    ctx->pc = 0x4DD2E0u;
    {
        const bool branch_taken_0x4dd2e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dd2e0) {
            ctx->pc = 0x4DD2E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DD2E0u;
            // 0x4dd2e4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DD2E8u;
            goto label_4dd2e8;
        }
    }
    ctx->pc = 0x4DD2E8u;
label_4dd2e8:
    // 0x4dd2e8: 0x244201f8  addiu       $v0, $v0, 0x1F8
    ctx->pc = 0x4dd2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 504));
label_4dd2ec:
    // 0x4dd2ec: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x4dd2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_4dd2f0:
    // 0x4dd2f0: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x4dd2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_4dd2f4:
    // 0x4dd2f4: 0x8e62fffc  lw          $v0, -0x4($s3)
    ctx->pc = 0x4dd2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967292)));
label_4dd2f8:
    // 0x4dd2f8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4dd2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4dd2fc:
    // 0x4dd2fc: 0x244201f8  addiu       $v0, $v0, 0x1F8
    ctx->pc = 0x4dd2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 504));
label_4dd300:
    // 0x4dd300: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x4dd300u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_4dd304:
    // 0x4dd304: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x4dd304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_4dd308:
    // 0x4dd308: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x4dd308u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_4dd30c:
    // 0x4dd30c: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x4dd30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_4dd310:
    // 0x4dd310: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x4dd310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4dd314:
    // 0x4dd314: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x4dd314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_4dd318:
    // 0x4dd318: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x4dd318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4dd31c:
    // 0x4dd31c: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x4dd31cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_4dd320:
    // 0x4dd320: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4dd320u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4dd324:
    // 0x4dd324: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4dd324u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4dd328:
    // 0x4dd328: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x4dd328u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4dd32c:
    // 0x4dd32c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x4dd32cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4dd330:
    // 0x4dd330: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4dd330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4dd334:
    // 0x4dd334: 0x3e00008  jr          $ra
label_4dd338:
    if (ctx->pc == 0x4DD338u) {
        ctx->pc = 0x4DD338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD334u;
        // 0x4dd338: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DD33Cu;
        goto label_4dd33c;
    }
    ctx->pc = 0x4DD334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DD338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DD334u;
        // 0x4dd338: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DD334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DD33Cu;
label_4dd33c:
    // 0x4dd33c: 0x0  nop
    ctx->pc = 0x4dd33cu;
    // NOP
    ctx->pc = 0x4dd340u;
}
