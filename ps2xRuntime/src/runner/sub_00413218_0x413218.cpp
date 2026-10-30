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

// Function: sub_00413218
// Address: 0x413218 - 0x413398
void sub_00413218_0x413218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00413218_0x413218");
#endif

    switch (ctx->pc) {
        case 0x413218u: goto label_413218;
        case 0x41321cu: goto label_41321c;
        case 0x413220u: goto label_413220;
        case 0x413224u: goto label_413224;
        case 0x413228u: goto label_413228;
        case 0x41322cu: goto label_41322c;
        case 0x413230u: goto label_413230;
        case 0x413234u: goto label_413234;
        case 0x413238u: goto label_413238;
        case 0x41323cu: goto label_41323c;
        case 0x413240u: goto label_413240;
        case 0x413244u: goto label_413244;
        case 0x413248u: goto label_413248;
        case 0x41324cu: goto label_41324c;
        case 0x413250u: goto label_413250;
        case 0x413254u: goto label_413254;
        case 0x413258u: goto label_413258;
        case 0x41325cu: goto label_41325c;
        case 0x413260u: goto label_413260;
        case 0x413264u: goto label_413264;
        case 0x413268u: goto label_413268;
        case 0x41326cu: goto label_41326c;
        case 0x413270u: goto label_413270;
        case 0x413274u: goto label_413274;
        case 0x413278u: goto label_413278;
        case 0x41327cu: goto label_41327c;
        case 0x413280u: goto label_413280;
        case 0x413284u: goto label_413284;
        case 0x413288u: goto label_413288;
        case 0x41328cu: goto label_41328c;
        case 0x413290u: goto label_413290;
        case 0x413294u: goto label_413294;
        case 0x413298u: goto label_413298;
        case 0x41329cu: goto label_41329c;
        case 0x4132a0u: goto label_4132a0;
        case 0x4132a4u: goto label_4132a4;
        case 0x4132a8u: goto label_4132a8;
        case 0x4132acu: goto label_4132ac;
        case 0x4132b0u: goto label_4132b0;
        case 0x4132b4u: goto label_4132b4;
        case 0x4132b8u: goto label_4132b8;
        case 0x4132bcu: goto label_4132bc;
        case 0x4132c0u: goto label_4132c0;
        case 0x4132c4u: goto label_4132c4;
        case 0x4132c8u: goto label_4132c8;
        case 0x4132ccu: goto label_4132cc;
        case 0x4132d0u: goto label_4132d0;
        case 0x4132d4u: goto label_4132d4;
        case 0x4132d8u: goto label_4132d8;
        case 0x4132dcu: goto label_4132dc;
        case 0x4132e0u: goto label_4132e0;
        case 0x4132e4u: goto label_4132e4;
        case 0x4132e8u: goto label_4132e8;
        case 0x4132ecu: goto label_4132ec;
        case 0x4132f0u: goto label_4132f0;
        case 0x4132f4u: goto label_4132f4;
        case 0x4132f8u: goto label_4132f8;
        case 0x4132fcu: goto label_4132fc;
        case 0x413300u: goto label_413300;
        case 0x413304u: goto label_413304;
        case 0x413308u: goto label_413308;
        case 0x41330cu: goto label_41330c;
        case 0x413310u: goto label_413310;
        case 0x413314u: goto label_413314;
        case 0x413318u: goto label_413318;
        case 0x41331cu: goto label_41331c;
        case 0x413320u: goto label_413320;
        case 0x413324u: goto label_413324;
        case 0x413328u: goto label_413328;
        case 0x41332cu: goto label_41332c;
        case 0x413330u: goto label_413330;
        case 0x413334u: goto label_413334;
        case 0x413338u: goto label_413338;
        case 0x41333cu: goto label_41333c;
        case 0x413340u: goto label_413340;
        case 0x413344u: goto label_413344;
        case 0x413348u: goto label_413348;
        case 0x41334cu: goto label_41334c;
        case 0x413350u: goto label_413350;
        case 0x413354u: goto label_413354;
        case 0x413358u: goto label_413358;
        case 0x41335cu: goto label_41335c;
        case 0x413360u: goto label_413360;
        case 0x413364u: goto label_413364;
        case 0x413368u: goto label_413368;
        case 0x41336cu: goto label_41336c;
        case 0x413370u: goto label_413370;
        case 0x413374u: goto label_413374;
        case 0x413378u: goto label_413378;
        case 0x41337cu: goto label_41337c;
        case 0x413380u: goto label_413380;
        case 0x413384u: goto label_413384;
        case 0x413388u: goto label_413388;
        case 0x41338cu: goto label_41338c;
        case 0x413390u: goto label_413390;
        case 0x413394u: goto label_413394;
        default: break;
    }

    ctx->pc = 0x413218u;

label_413218:
    // 0x413218: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x413218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_41321c:
    // 0x41321c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x41321cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_413220:
    // 0x413220: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x413220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_413224:
    // 0x413224: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x413224u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_413228:
    // 0x413228: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x413228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_41322c:
    // 0x41322c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x41322cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_413230:
    // 0x413230: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x413230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_413234:
    // 0x413234: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x413234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_413238:
    // 0x413238: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x413238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_41323c:
    // 0x41323c: 0x1a80004b  blez        $s4, . + 4 + (0x4B << 2)
label_413240:
    if (ctx->pc == 0x413240u) {
        ctx->pc = 0x413240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41323Cu;
        // 0x413240: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413244u;
        goto label_413244;
    }
    ctx->pc = 0x41323Cu;
    {
        const bool branch_taken_0x41323c = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x413240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41323Cu;
        // 0x413240: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41323c) {
            ctx->pc = 0x41336Cu;
            goto label_41336c;
        }
    }
    ctx->pc = 0x413244u;
label_413244:
    // 0x413244: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x413244u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_413248:
    // 0x413248: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x413248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_41324c:
    // 0x41324c: 0x8eaa27e4  lw          $t2, 0x27E4($s5)
    ctx->pc = 0x41324cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_413250:
    // 0x413250: 0x24564814  addiu       $s6, $v0, 0x4814
    ctx->pc = 0x413250u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 18452));
label_413254:
    // 0x413254: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x413254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_413258:
    // 0x413258: 0x3c080059  lui         $t0, 0x59
    ctx->pc = 0x413258u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)89 << 16));
label_41325c:
    // 0x41325c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x41325cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_413260:
    // 0x413260: 0x24a59050  addiu       $a1, $a1, -0x6FB0
    ctx->pc = 0x413260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938704));
label_413264:
    // 0x413264: 0x25089068  addiu       $t0, $t0, -0x6F98
    ctx->pc = 0x413264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294938728));
label_413268:
    // 0x413268: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x413268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_41326c:
    // 0x41326c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x41326cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_413270:
    // 0x413270: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x413270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_413274:
    // 0x413274: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x413274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_413278:
    // 0x413278: 0x2409001a  addiu       $t1, $zero, 0x1A
    ctx->pc = 0x413278u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_41327c:
    // 0x41327c: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x41327cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_413280:
    // 0x413280: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x413280u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_413284:
    // 0x413284: 0x40f809  jalr        $v0
label_413288:
    if (ctx->pc == 0x413288u) {
        ctx->pc = 0x413288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413284u;
        // 0x413288: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41328Cu;
        goto label_41328c;
    }
    ctx->pc = 0x413284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41328Cu);
        ctx->pc = 0x413288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413284u;
        // 0x413288: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413284u, 0x41328Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41328Cu;
label_41328c:
    // 0x41328c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x41328cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_413290:
    // 0x413290: 0x12400035  beqz        $s2, . + 4 + (0x35 << 2)
label_413294:
    if (ctx->pc == 0x413294u) {
        ctx->pc = 0x413294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413290u;
        // 0x413294: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413298u;
        goto label_413298;
    }
    ctx->pc = 0x413290u;
    {
        const bool branch_taken_0x413290 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x413294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413290u;
        // 0x413294: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413290) {
            ctx->pc = 0x413368u;
            goto label_413368;
        }
    }
    ctx->pc = 0x413298u;
label_413298:
    // 0x413298: 0xae540008  sw          $s4, 0x8($s2)
    ctx->pc = 0x413298u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 20));
label_41329c:
    // 0x41329c: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x41329cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
label_4132a0:
    // 0x4132a0: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x4132a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_4132a4:
    // 0x4132a4: 0x3c110059  lui         $s1, 0x59
    ctx->pc = 0x4132a4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
label_4132a8:
    // 0x4132a8: 0x8eab27e4  lw          $t3, 0x27E4($s5)
    ctx->pc = 0x4132a8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_4132ac:
    // 0x4132ac: 0x26109020  addiu       $s0, $s0, -0x6FE0
    ctx->pc = 0x4132acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938656));
label_4132b0:
    // 0x4132b0: 0x26319028  addiu       $s1, $s1, -0x6FD8
    ctx->pc = 0x4132b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294938664));
label_4132b4:
    // 0x4132b4: 0x143200  sll         $a2, $s4, 8
    ctx->pc = 0x4132b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 8));
label_4132b8:
    // 0x4132b8: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4132b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4132bc:
    // 0x4132bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4132bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4132c0:
    // 0x4132c0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4132c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4132c4:
    // 0x4132c4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x4132c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4132c8:
    // 0x4132c8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4132c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4132cc:
    // 0x4132cc: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x4132ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4132d0:
    // 0x4132d0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4132d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4132d4:
    // 0x4132d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4132d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4132d8:
    // 0x4132d8: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x4132d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_4132dc:
    // 0x4132dc: 0x40f809  jalr        $v0
label_4132e0:
    if (ctx->pc == 0x4132E0u) {
        ctx->pc = 0x4132E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4132DCu;
        // 0x4132e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4132E4u;
        goto label_4132e4;
    }
    ctx->pc = 0x4132DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4132E4u);
        ctx->pc = 0x4132E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4132DCu;
        // 0x4132e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4132DCu, 0x4132E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4132E4u;
label_4132e4:
    // 0x4132e4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4132e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4132e8:
    // 0x4132e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4132e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4132ec:
    // 0x4132ec: 0x8eac27e4  lw          $t4, 0x27E4($s5)
    ctx->pc = 0x4132ecu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_4132f0:
    // 0x4132f0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x4132f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4132f4:
    // 0x4132f4: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x4132f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4132f8:
    // 0x4132f8: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4132f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4132fc:
    // 0x4132fc: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4132fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_413300:
    // 0x413300: 0x24090021  addiu       $t1, $zero, 0x21
    ctx->pc = 0x413300u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_413304:
    // 0x413304: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x413304u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_413308:
    // 0x413308: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x413308u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41330c:
    // 0x41330c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x41330cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_413310:
    // 0x413310: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x413310u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_413314:
    // 0x413314: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x413314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_413318:
    // 0x413318: 0x40f809  jalr        $v0
label_41331c:
    if (ctx->pc == 0x41331Cu) {
        ctx->pc = 0x41331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413318u;
        // 0x41331c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413320u;
        goto label_413320;
    }
    ctx->pc = 0x413318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x413320u);
        ctx->pc = 0x41331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413318u;
        // 0x41331c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413318u, 0x413320u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x413320u;
label_413320:
    // 0x413320: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x413320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_413324:
    // 0x413324: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x413324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_413328:
    // 0x413328: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_41332c:
    if (ctx->pc == 0x41332Cu) {
        ctx->pc = 0x41332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413328u;
        // 0x41332c: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413330u;
        goto label_413330;
    }
    ctx->pc = 0x413328u;
    {
        const bool branch_taken_0x413328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413328u;
        // 0x41332c: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413328) {
            ctx->pc = 0x413364u;
            goto label_413364;
        }
    }
    ctx->pc = 0x413330u;
label_413330:
    // 0x413330: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x413330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_413334:
    // 0x413334: 0x0  nop
    ctx->pc = 0x413334u;
    // NOP
label_413338:
    // 0x413338: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x413338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_41333c:
    // 0x41333c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x41333cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_413340:
    // 0x413340: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x413340u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_413344:
    // 0x413344: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x413344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_413348:
    // 0x413348: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x413348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_41334c:
    // 0x41334c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x41334cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_413350:
    // 0x413350: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x413350u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_413354:
    // 0x413354: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x413354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_413358:
    // 0x413358: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x413358u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_41335c:
    // 0x41335c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
label_413360:
    if (ctx->pc == 0x413360u) {
        ctx->pc = 0x413360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41335Cu;
        // 0x413360: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413364u;
        goto label_413364;
    }
    ctx->pc = 0x41335Cu;
    {
        const bool branch_taken_0x41335c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41335c) {
            ctx->pc = 0x413360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41335Cu;
            // 0x413360: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x413338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_413338;
        }
    }
    ctx->pc = 0x413364u;
label_413364:
    // 0x413364: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x413364u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_413368:
    // 0x413368: 0xaed20000  sw          $s2, 0x0($s6)
    ctx->pc = 0x413368u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 18));
label_41336c:
    // 0x41336c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x41336cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_413370:
    // 0x413370: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x413370u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_413374:
    // 0x413374: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x413374u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_413378:
    // 0x413378: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x413378u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41337c:
    // 0x41337c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x41337cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_413380:
    // 0x413380: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x413380u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_413384:
    // 0x413384: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x413384u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_413388:
    // 0x413388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x413388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41338c:
    // 0x41338c: 0x3e00008  jr          $ra
label_413390:
    if (ctx->pc == 0x413390u) {
        ctx->pc = 0x413390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41338Cu;
        // 0x413390: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413394u;
        goto label_413394;
    }
    ctx->pc = 0x41338Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x413390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41338Cu;
        // 0x413390: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41338Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x413394u;
label_413394:
    // 0x413394: 0x0  nop
    ctx->pc = 0x413394u;
    // NOP
    ctx->pc = 0x413398u;
}
