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

// Function: sub_0018B1E0
// Address: 0x18b1e0 - 0x18b460
void sub_0018B1E0_0x18b1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B1E0_0x18b1e0");
#endif

    switch (ctx->pc) {
        case 0x18b1e0u: goto label_18b1e0;
        case 0x18b1e4u: goto label_18b1e4;
        case 0x18b1e8u: goto label_18b1e8;
        case 0x18b1ecu: goto label_18b1ec;
        case 0x18b1f0u: goto label_18b1f0;
        case 0x18b1f4u: goto label_18b1f4;
        case 0x18b1f8u: goto label_18b1f8;
        case 0x18b1fcu: goto label_18b1fc;
        case 0x18b200u: goto label_18b200;
        case 0x18b204u: goto label_18b204;
        case 0x18b208u: goto label_18b208;
        case 0x18b20cu: goto label_18b20c;
        case 0x18b210u: goto label_18b210;
        case 0x18b214u: goto label_18b214;
        case 0x18b218u: goto label_18b218;
        case 0x18b21cu: goto label_18b21c;
        case 0x18b220u: goto label_18b220;
        case 0x18b224u: goto label_18b224;
        case 0x18b228u: goto label_18b228;
        case 0x18b22cu: goto label_18b22c;
        case 0x18b230u: goto label_18b230;
        case 0x18b234u: goto label_18b234;
        case 0x18b238u: goto label_18b238;
        case 0x18b23cu: goto label_18b23c;
        case 0x18b240u: goto label_18b240;
        case 0x18b244u: goto label_18b244;
        case 0x18b248u: goto label_18b248;
        case 0x18b24cu: goto label_18b24c;
        case 0x18b250u: goto label_18b250;
        case 0x18b254u: goto label_18b254;
        case 0x18b258u: goto label_18b258;
        case 0x18b25cu: goto label_18b25c;
        case 0x18b260u: goto label_18b260;
        case 0x18b264u: goto label_18b264;
        case 0x18b268u: goto label_18b268;
        case 0x18b26cu: goto label_18b26c;
        case 0x18b270u: goto label_18b270;
        case 0x18b274u: goto label_18b274;
        case 0x18b278u: goto label_18b278;
        case 0x18b27cu: goto label_18b27c;
        case 0x18b280u: goto label_18b280;
        case 0x18b284u: goto label_18b284;
        case 0x18b288u: goto label_18b288;
        case 0x18b28cu: goto label_18b28c;
        case 0x18b290u: goto label_18b290;
        case 0x18b294u: goto label_18b294;
        case 0x18b298u: goto label_18b298;
        case 0x18b29cu: goto label_18b29c;
        case 0x18b2a0u: goto label_18b2a0;
        case 0x18b2a4u: goto label_18b2a4;
        case 0x18b2a8u: goto label_18b2a8;
        case 0x18b2acu: goto label_18b2ac;
        case 0x18b2b0u: goto label_18b2b0;
        case 0x18b2b4u: goto label_18b2b4;
        case 0x18b2b8u: goto label_18b2b8;
        case 0x18b2bcu: goto label_18b2bc;
        case 0x18b2c0u: goto label_18b2c0;
        case 0x18b2c4u: goto label_18b2c4;
        case 0x18b2c8u: goto label_18b2c8;
        case 0x18b2ccu: goto label_18b2cc;
        case 0x18b2d0u: goto label_18b2d0;
        case 0x18b2d4u: goto label_18b2d4;
        case 0x18b2d8u: goto label_18b2d8;
        case 0x18b2dcu: goto label_18b2dc;
        case 0x18b2e0u: goto label_18b2e0;
        case 0x18b2e4u: goto label_18b2e4;
        case 0x18b2e8u: goto label_18b2e8;
        case 0x18b2ecu: goto label_18b2ec;
        case 0x18b2f0u: goto label_18b2f0;
        case 0x18b2f4u: goto label_18b2f4;
        case 0x18b2f8u: goto label_18b2f8;
        case 0x18b2fcu: goto label_18b2fc;
        case 0x18b300u: goto label_18b300;
        case 0x18b304u: goto label_18b304;
        case 0x18b308u: goto label_18b308;
        case 0x18b30cu: goto label_18b30c;
        case 0x18b310u: goto label_18b310;
        case 0x18b314u: goto label_18b314;
        case 0x18b318u: goto label_18b318;
        case 0x18b31cu: goto label_18b31c;
        case 0x18b320u: goto label_18b320;
        case 0x18b324u: goto label_18b324;
        case 0x18b328u: goto label_18b328;
        case 0x18b32cu: goto label_18b32c;
        case 0x18b330u: goto label_18b330;
        case 0x18b334u: goto label_18b334;
        case 0x18b338u: goto label_18b338;
        case 0x18b33cu: goto label_18b33c;
        case 0x18b340u: goto label_18b340;
        case 0x18b344u: goto label_18b344;
        case 0x18b348u: goto label_18b348;
        case 0x18b34cu: goto label_18b34c;
        case 0x18b350u: goto label_18b350;
        case 0x18b354u: goto label_18b354;
        case 0x18b358u: goto label_18b358;
        case 0x18b35cu: goto label_18b35c;
        case 0x18b360u: goto label_18b360;
        case 0x18b364u: goto label_18b364;
        case 0x18b368u: goto label_18b368;
        case 0x18b36cu: goto label_18b36c;
        case 0x18b370u: goto label_18b370;
        case 0x18b374u: goto label_18b374;
        case 0x18b378u: goto label_18b378;
        case 0x18b37cu: goto label_18b37c;
        case 0x18b380u: goto label_18b380;
        case 0x18b384u: goto label_18b384;
        case 0x18b388u: goto label_18b388;
        case 0x18b38cu: goto label_18b38c;
        case 0x18b390u: goto label_18b390;
        case 0x18b394u: goto label_18b394;
        case 0x18b398u: goto label_18b398;
        case 0x18b39cu: goto label_18b39c;
        case 0x18b3a0u: goto label_18b3a0;
        case 0x18b3a4u: goto label_18b3a4;
        case 0x18b3a8u: goto label_18b3a8;
        case 0x18b3acu: goto label_18b3ac;
        case 0x18b3b0u: goto label_18b3b0;
        case 0x18b3b4u: goto label_18b3b4;
        case 0x18b3b8u: goto label_18b3b8;
        case 0x18b3bcu: goto label_18b3bc;
        case 0x18b3c0u: goto label_18b3c0;
        case 0x18b3c4u: goto label_18b3c4;
        case 0x18b3c8u: goto label_18b3c8;
        case 0x18b3ccu: goto label_18b3cc;
        case 0x18b3d0u: goto label_18b3d0;
        case 0x18b3d4u: goto label_18b3d4;
        case 0x18b3d8u: goto label_18b3d8;
        case 0x18b3dcu: goto label_18b3dc;
        case 0x18b3e0u: goto label_18b3e0;
        case 0x18b3e4u: goto label_18b3e4;
        case 0x18b3e8u: goto label_18b3e8;
        case 0x18b3ecu: goto label_18b3ec;
        case 0x18b3f0u: goto label_18b3f0;
        case 0x18b3f4u: goto label_18b3f4;
        case 0x18b3f8u: goto label_18b3f8;
        case 0x18b3fcu: goto label_18b3fc;
        case 0x18b400u: goto label_18b400;
        case 0x18b404u: goto label_18b404;
        case 0x18b408u: goto label_18b408;
        case 0x18b40cu: goto label_18b40c;
        case 0x18b410u: goto label_18b410;
        case 0x18b414u: goto label_18b414;
        case 0x18b418u: goto label_18b418;
        case 0x18b41cu: goto label_18b41c;
        case 0x18b420u: goto label_18b420;
        case 0x18b424u: goto label_18b424;
        case 0x18b428u: goto label_18b428;
        case 0x18b42cu: goto label_18b42c;
        case 0x18b430u: goto label_18b430;
        case 0x18b434u: goto label_18b434;
        case 0x18b438u: goto label_18b438;
        case 0x18b43cu: goto label_18b43c;
        case 0x18b440u: goto label_18b440;
        case 0x18b444u: goto label_18b444;
        case 0x18b448u: goto label_18b448;
        case 0x18b44cu: goto label_18b44c;
        case 0x18b450u: goto label_18b450;
        case 0x18b454u: goto label_18b454;
        case 0x18b458u: goto label_18b458;
        case 0x18b45cu: goto label_18b45c;
        default: break;
    }

    ctx->pc = 0x18b1e0u;

label_18b1e0:
    // 0x18b1e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18b1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_18b1e4:
    // 0x18b1e4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x18b1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_18b1e8:
    // 0x18b1e8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x18b1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_18b1ec:
    // 0x18b1ec: 0x24060980  addiu       $a2, $zero, 0x980
    ctx->pc = 0x18b1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2432));
label_18b1f0:
    // 0x18b1f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18b1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_18b1f4:
    // 0x18b1f4: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x18b1f4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_18b1f8:
    // 0x18b1f8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x18b1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_18b1fc:
    // 0x18b1fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18b1fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18b200:
    // 0x18b200: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x18b200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_18b204:
    // 0x18b204: 0x3c100055  lui         $s0, 0x55
    ctx->pc = 0x18b204u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
label_18b208:
    // 0x18b208: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x18b208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_18b20c:
    // 0x18b20c: 0x3c110055  lui         $s1, 0x55
    ctx->pc = 0x18b20cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)85 << 16));
label_18b210:
    // 0x18b210: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18b210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_18b214:
    // 0x18b214: 0x26102ea0  addiu       $s0, $s0, 0x2EA0
    ctx->pc = 0x18b214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11936));
label_18b218:
    // 0x18b218: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x18b218u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_18b21c:
    // 0x18b21c: 0x26312ea8  addiu       $s1, $s1, 0x2EA8
    ctx->pc = 0x18b21cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 11944));
label_18b220:
    // 0x18b220: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x18b220u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_18b224:
    // 0x18b224: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x18b224u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18b228:
    // 0x18b228: 0x8e4927e4  lw          $t1, 0x27E4($s2)
    ctx->pc = 0x18b228u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_18b22c:
    // 0x18b22c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18b22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18b230:
    // 0x18b230: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x18b230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_18b234:
    // 0x18b234: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x18b234u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18b238:
    // 0x18b238: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x18b238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_18b23c:
    // 0x18b23c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18b23cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b240:
    // 0x18b240: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x18b240u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b244:
    // 0x18b244: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x18b244u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_18b248:
    // 0x18b248: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x18b248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_18b24c:
    // 0x18b24c: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x18b24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_18b250:
    // 0x18b250: 0x40f809  jalr        $v0
label_18b254:
    if (ctx->pc == 0x18B254u) {
        ctx->pc = 0x18B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B250u;
        // 0x18b254: 0x2409001b  addiu       $t1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B258u;
        goto label_18b258;
    }
    ctx->pc = 0x18B250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18B258u);
        ctx->pc = 0x18B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B250u;
        // 0x18b254: 0x2409001b  addiu       $t1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B250u, 0x18B258u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18B258u;
label_18b258:
    // 0x18b258: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x18b258u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_18b25c:
    // 0x18b25c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18b25cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18b260:
    // 0x18b260: 0x8e4c27e4  lw          $t4, 0x27E4($s2)
    ctx->pc = 0x18b260u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_18b264:
    // 0x18b264: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x18b264u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18b268:
    // 0x18b268: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x18b268u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_18b26c:
    // 0x18b26c: 0x2409001c  addiu       $t1, $zero, 0x1C
    ctx->pc = 0x18b26cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_18b270:
    // 0x18b270: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x18b270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_18b274:
    // 0x18b274: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x18b274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_18b278:
    // 0x18b278: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x18b278u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_18b27c:
    // 0x18b27c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18b27cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b280:
    // 0x18b280: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x18b280u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_18b284:
    // 0x18b284: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x18b284u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b288:
    // 0x18b288: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x18b288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_18b28c:
    // 0x18b28c: 0x40f809  jalr        $v0
label_18b290:
    if (ctx->pc == 0x18B290u) {
        ctx->pc = 0x18B290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B28Cu;
        // 0x18b290: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B294u;
        goto label_18b294;
    }
    ctx->pc = 0x18B28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18B294u);
        ctx->pc = 0x18B290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B28Cu;
        // 0x18b290: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B28Cu, 0x18B294u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18B294u;
label_18b294:
    // 0x18b294: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x18b294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_18b298:
    // 0x18b298: 0x3c090060  lui         $t1, 0x60
    ctx->pc = 0x18b298u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)96 << 16));
label_18b29c:
    // 0x18b29c: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x18b29cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_18b2a0:
    // 0x18b2a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18b2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b2a4:
    // 0x18b2a4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_18b2a8:
    if (ctx->pc == 0x18B2A8u) {
        ctx->pc = 0x18B2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B2A4u;
        // 0x18b2a8: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B2ACu;
        goto label_18b2ac;
    }
    ctx->pc = 0x18B2A4u;
    {
        const bool branch_taken_0x18b2a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B2A4u;
        // 0x18b2a8: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b2a4) {
            ctx->pc = 0x18B2DCu;
            goto label_18b2dc;
        }
    }
    ctx->pc = 0x18B2ACu;
label_18b2ac:
    // 0x18b2ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18b2acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b2b0:
    // 0x18b2b0: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x18b2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_18b2b4:
    // 0x18b2b4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x18b2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_18b2b8:
    // 0x18b2b8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x18b2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_18b2bc:
    // 0x18b2bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18b2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_18b2c0:
    // 0x18b2c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18b2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18b2c4:
    // 0x18b2c4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x18b2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_18b2c8:
    // 0x18b2c8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x18b2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_18b2cc:
    // 0x18b2cc: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x18b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_18b2d0:
    // 0x18b2d0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x18b2d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_18b2d4:
    // 0x18b2d4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_18b2d8:
    if (ctx->pc == 0x18B2D8u) {
        ctx->pc = 0x18B2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B2D4u;
        // 0x18b2d8: 0x24c60098  addiu       $a2, $a2, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B2DCu;
        goto label_18b2dc;
    }
    ctx->pc = 0x18B2D4u;
    {
        const bool branch_taken_0x18b2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B2D4u;
        // 0x18b2d8: 0x24c60098  addiu       $a2, $a2, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b2d4) {
            ctx->pc = 0x18B2B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b2b0;
        }
    }
    ctx->pc = 0x18B2DCu;
label_18b2dc:
    // 0x18b2dc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x18b2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_18b2e0:
    // 0x18b2e0: 0x2667015c  addiu       $a3, $s3, 0x15C
    ctx->pc = 0x18b2e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 348));
label_18b2e4:
    // 0x18b2e4: 0x26650160  addiu       $a1, $s3, 0x160
    ctx->pc = 0x18b2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 352));
label_18b2e8:
    // 0x18b2e8: 0x26640154  addiu       $a0, $s3, 0x154
    ctx->pc = 0x18b2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 340));
label_18b2ec:
    // 0x18b2ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18b2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18b2f0:
    // 0x18b2f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18b2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_18b2f4:
    // 0x18b2f4: 0x0  nop
    ctx->pc = 0x18b2f4u;
    // NOP
label_18b2f8:
    // 0x18b2f8: 0x0  nop
    ctx->pc = 0x18b2f8u;
    // NOP
label_18b2fc:
    // 0x18b2fc: 0x0  nop
    ctx->pc = 0x18b2fcu;
    // NOP
label_18b300:
    // 0x18b300: 0x0  nop
    ctx->pc = 0x18b300u;
    // NOP
label_18b304:
    // 0x18b304: 0x0  nop
    ctx->pc = 0x18b304u;
    // NOP
label_18b308:
    // 0x18b308: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_18b30c:
    if (ctx->pc == 0x18B30Cu) {
        ctx->pc = 0x18B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B308u;
        // 0x18b30c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B310u;
        goto label_18b310;
    }
    ctx->pc = 0x18B308u;
    {
        const bool branch_taken_0x18b308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x18B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B308u;
        // 0x18b30c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b308) {
            ctx->pc = 0x18B2F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b2f8;
        }
    }
    ctx->pc = 0x18B310u;
label_18b310:
    // 0x18b310: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x18b310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_18b314:
    // 0x18b314: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x18b314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_18b318:
    // 0x18b318: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18b318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_18b31c:
    // 0x18b31c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x18b31cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18b320:
    // 0x18b320: 0xae630194  sw          $v1, 0x194($s3)
    ctx->pc = 0x18b320u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 404), GPR_U32(ctx, 3));
label_18b324:
    // 0x18b324: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x18b324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_18b328:
    // 0x18b328: 0xae630198  sw          $v1, 0x198($s3)
    ctx->pc = 0x18b328u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 408), GPR_U32(ctx, 3));
label_18b32c:
    // 0x18b32c: 0xa6740212  sh          $s4, 0x212($s3)
    ctx->pc = 0x18b32cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 530), (uint16_t)GPR_U32(ctx, 20));
label_18b330:
    // 0x18b330: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18b330u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b334:
    // 0x18b334: 0xae620218  sw          $v0, 0x218($s3)
    ctx->pc = 0x18b334u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 536), GPR_U32(ctx, 2));
label_18b338:
    // 0x18b338: 0xa6600210  sh          $zero, 0x210($s3)
    ctx->pc = 0x18b338u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 528), (uint16_t)GPR_U32(ctx, 0));
label_18b33c:
    // 0x18b33c: 0xae60019c  sw          $zero, 0x19C($s3)
    ctx->pc = 0x18b33cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 412), GPR_U32(ctx, 0));
label_18b340:
    // 0x18b340: 0xa2600214  sb          $zero, 0x214($s3)
    ctx->pc = 0x18b340u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 532), (uint8_t)GPR_U32(ctx, 0));
label_18b344:
    // 0x18b344: 0x0  nop
    ctx->pc = 0x18b344u;
    // NOP
label_18b348:
    // 0x18b348: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x18b348u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_18b34c:
    // 0x18b34c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18b34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_18b350:
    // 0x18b350: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x18b350u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_18b354:
    // 0x18b354: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x18b354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_18b358:
    // 0x18b358: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x18b358u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_18b35c:
    // 0x18b35c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x18b35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_18b360:
    // 0x18b360: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x18b360u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_18b364:
    // 0x18b364: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_18b368:
    if (ctx->pc == 0x18B368u) {
        ctx->pc = 0x18B368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B364u;
        // 0x18b368: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B36Cu;
        goto label_18b36c;
    }
    ctx->pc = 0x18B364u;
    {
        const bool branch_taken_0x18b364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B364u;
        // 0x18b368: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b364) {
            ctx->pc = 0x18B348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b348;
        }
    }
    ctx->pc = 0x18B36Cu;
label_18b36c:
    // 0x18b36c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x18b36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_18b370:
    // 0x18b370: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18b370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18b374:
    // 0x18b374: 0x8c44bd30  lw          $a0, -0x42D0($v0)
    ctx->pc = 0x18b374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_18b378:
    // 0x18b378: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x18b378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_18b37c:
    // 0x18b37c: 0xae6301a0  sw          $v1, 0x1A0($s3)
    ctx->pc = 0x18b37cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 416), GPR_U32(ctx, 3));
label_18b380:
    // 0x18b380: 0xae640218  sw          $a0, 0x218($s3)
    ctx->pc = 0x18b380u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 536), GPR_U32(ctx, 4));
label_18b384:
    // 0x18b384: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18b384u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b388:
    // 0x18b388: 0x2444dec0  addiu       $a0, $v0, -0x2140
    ctx->pc = 0x18b388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958784));
label_18b38c:
    // 0x18b38c: 0xae60021c  sw          $zero, 0x21C($s3)
    ctx->pc = 0x18b38cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 540), GPR_U32(ctx, 0));
label_18b390:
    // 0x18b390: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x18b390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_18b394:
    // 0x18b394: 0xa040df24  sb          $zero, -0x20DC($v0)
    ctx->pc = 0x18b394u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294958884), (uint8_t)GPR_U32(ctx, 0));
label_18b398:
    // 0x18b398: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x18b398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_18b39c:
    // 0x18b39c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18b39cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_18b3a0:
    // 0x18b3a0: 0x2c620019  sltiu       $v0, $v1, 0x19
    ctx->pc = 0x18b3a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
label_18b3a4:
    // 0x18b3a4: 0x0  nop
    ctx->pc = 0x18b3a4u;
    // NOP
label_18b3a8:
    // 0x18b3a8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_18b3ac:
    if (ctx->pc == 0x18B3ACu) {
        ctx->pc = 0x18B3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B3A8u;
        // 0x18b3ac: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B3B0u;
        goto label_18b3b0;
    }
    ctx->pc = 0x18B3A8u;
    {
        const bool branch_taken_0x18b3a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B3A8u;
        // 0x18b3ac: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b3a8) {
            ctx->pc = 0x18B398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b398;
        }
    }
    ctx->pc = 0x18B3B0u;
label_18b3b0:
    // 0x18b3b0: 0x8d22d300  lw          $v0, -0x2D00($t1)
    ctx->pc = 0x18b3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294955776)));
label_18b3b4:
    // 0x18b3b4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x18b3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_18b3b8:
    // 0x18b3b8: 0xa3a40000  sb          $a0, 0x0($sp)
    ctx->pc = 0x18b3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 4));
label_18b3bc:
    // 0x18b3bc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x18b3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_18b3c0:
    // 0x18b3c0: 0xae6201bc  sw          $v0, 0x1BC($s3)
    ctx->pc = 0x18b3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 444), GPR_U32(ctx, 2));
label_18b3c4:
    // 0x18b3c4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x18b3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_18b3c8:
    // 0x18b3c8: 0xa3a30003  sb          $v1, 0x3($sp)
    ctx->pc = 0x18b3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 3));
label_18b3cc:
    // 0x18b3cc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x18b3ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_18b3d0:
    // 0x18b3d0: 0xa3a40001  sb          $a0, 0x1($sp)
    ctx->pc = 0x18b3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 4));
label_18b3d4:
    // 0x18b3d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x18b3d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18b3d8:
    // 0x18b3d8: 0xa3a40002  sb          $a0, 0x2($sp)
    ctx->pc = 0x18b3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 4));
label_18b3dc:
    // 0x18b3dc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x18b3dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18b3e0:
    // 0x18b3e0: 0x8d23d300  lw          $v1, -0x2D00($t1)
    ctx->pc = 0x18b3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294955776)));
label_18b3e4:
    // 0x18b3e4: 0xa3a40004  sb          $a0, 0x4($sp)
    ctx->pc = 0x18b3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 4));
label_18b3e8:
    // 0x18b3e8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x18b3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18b3ec:
    // 0x18b3ec: 0xae6301c0  sw          $v1, 0x1C0($s3)
    ctx->pc = 0x18b3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 448), GPR_U32(ctx, 3));
label_18b3f0:
    // 0x18b3f0: 0xa1040002  sb          $a0, 0x2($t0)
    ctx->pc = 0x18b3f0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 4));
label_18b3f4:
    // 0x18b3f4: 0xa1000003  sb          $zero, 0x3($t0)
    ctx->pc = 0x18b3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 0));
label_18b3f8:
    // 0x18b3f8: 0xa1040001  sb          $a0, 0x1($t0)
    ctx->pc = 0x18b3f8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 4));
label_18b3fc:
    // 0x18b3fc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x18b3fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18b400:
    // 0x18b400: 0x8d23d300  lw          $v1, -0x2D00($t1)
    ctx->pc = 0x18b400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294955776)));
label_18b404:
    // 0x18b404: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x18b404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_18b408:
    // 0x18b408: 0xae6301c4  sw          $v1, 0x1C4($s3)
    ctx->pc = 0x18b408u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 452), GPR_U32(ctx, 3));
label_18b40c:
    // 0x18b40c: 0xae6601a4  sw          $a2, 0x1A4($s3)
    ctx->pc = 0x18b40cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 420), GPR_U32(ctx, 6));
label_18b410:
    // 0x18b410: 0xae6401a8  sw          $a0, 0x1A8($s3)
    ctx->pc = 0x18b410u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 424), GPR_U32(ctx, 4));
label_18b414:
    // 0x18b414: 0xae6501f4  sw          $a1, 0x1F4($s3)
    ctx->pc = 0x18b414u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 500), GPR_U32(ctx, 5));
label_18b418:
    // 0x18b418: 0xae6701b8  sw          $a3, 0x1B8($s3)
    ctx->pc = 0x18b418u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 440), GPR_U32(ctx, 7));
label_18b41c:
    // 0x18b41c: 0xa26001b4  sb          $zero, 0x1B4($s3)
    ctx->pc = 0x18b41cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 436), (uint8_t)GPR_U32(ctx, 0));
label_18b420:
    // 0x18b420: 0xae6001d4  sw          $zero, 0x1D4($s3)
    ctx->pc = 0x18b420u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 468), GPR_U32(ctx, 0));
label_18b424:
    // 0x18b424: 0xae6001d8  sw          $zero, 0x1D8($s3)
    ctx->pc = 0x18b424u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 472), GPR_U32(ctx, 0));
label_18b428:
    // 0x18b428: 0xae6001dc  sw          $zero, 0x1DC($s3)
    ctx->pc = 0x18b428u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 476), GPR_U32(ctx, 0));
label_18b42c:
    // 0x18b42c: 0xae6001e8  sw          $zero, 0x1E8($s3)
    ctx->pc = 0x18b42cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 488), GPR_U32(ctx, 0));
label_18b430:
    // 0x18b430: 0xae6001ec  sw          $zero, 0x1EC($s3)
    ctx->pc = 0x18b430u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 492), GPR_U32(ctx, 0));
label_18b434:
    // 0x18b434: 0xae6001f0  sw          $zero, 0x1F0($s3)
    ctx->pc = 0x18b434u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 496), GPR_U32(ctx, 0));
label_18b438:
    // 0x18b438: 0xae6001f8  sw          $zero, 0x1F8($s3)
    ctx->pc = 0x18b438u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 504), GPR_U32(ctx, 0));
label_18b43c:
    // 0x18b43c: 0xae6001fc  sw          $zero, 0x1FC($s3)
    ctx->pc = 0x18b43cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 508), GPR_U32(ctx, 0));
label_18b440:
    // 0x18b440: 0xae600200  sw          $zero, 0x200($s3)
    ctx->pc = 0x18b440u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 512), GPR_U32(ctx, 0));
label_18b444:
    // 0x18b444: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x18b444u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_18b448:
    // 0x18b448: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x18b448u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18b44c:
    // 0x18b44c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18b44cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18b450:
    // 0x18b450: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x18b450u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18b454:
    // 0x18b454: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18b454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18b458:
    // 0x18b458: 0x3e00008  jr          $ra
label_18b45c:
    if (ctx->pc == 0x18B45Cu) {
        ctx->pc = 0x18B45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B458u;
        // 0x18b45c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B460u;
        goto label_fallthrough_0x18b458;
    }
    ctx->pc = 0x18B458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B458u;
        // 0x18b45c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18b458:
    ctx->pc = 0x18B460u;
}
