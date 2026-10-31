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

// Function: sub_0046B170
// Address: 0x46b170 - 0x46b438
void sub_0046B170_0x46b170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046B170_0x46b170");
#endif

    switch (ctx->pc) {
        case 0x46b170u: goto label_46b170;
        case 0x46b174u: goto label_46b174;
        case 0x46b178u: goto label_46b178;
        case 0x46b17cu: goto label_46b17c;
        case 0x46b180u: goto label_46b180;
        case 0x46b184u: goto label_46b184;
        case 0x46b188u: goto label_46b188;
        case 0x46b18cu: goto label_46b18c;
        case 0x46b190u: goto label_46b190;
        case 0x46b194u: goto label_46b194;
        case 0x46b198u: goto label_46b198;
        case 0x46b19cu: goto label_46b19c;
        case 0x46b1a0u: goto label_46b1a0;
        case 0x46b1a4u: goto label_46b1a4;
        case 0x46b1a8u: goto label_46b1a8;
        case 0x46b1acu: goto label_46b1ac;
        case 0x46b1b0u: goto label_46b1b0;
        case 0x46b1b4u: goto label_46b1b4;
        case 0x46b1b8u: goto label_46b1b8;
        case 0x46b1bcu: goto label_46b1bc;
        case 0x46b1c0u: goto label_46b1c0;
        case 0x46b1c4u: goto label_46b1c4;
        case 0x46b1c8u: goto label_46b1c8;
        case 0x46b1ccu: goto label_46b1cc;
        case 0x46b1d0u: goto label_46b1d0;
        case 0x46b1d4u: goto label_46b1d4;
        case 0x46b1d8u: goto label_46b1d8;
        case 0x46b1dcu: goto label_46b1dc;
        case 0x46b1e0u: goto label_46b1e0;
        case 0x46b1e4u: goto label_46b1e4;
        case 0x46b1e8u: goto label_46b1e8;
        case 0x46b1ecu: goto label_46b1ec;
        case 0x46b1f0u: goto label_46b1f0;
        case 0x46b1f4u: goto label_46b1f4;
        case 0x46b1f8u: goto label_46b1f8;
        case 0x46b1fcu: goto label_46b1fc;
        case 0x46b200u: goto label_46b200;
        case 0x46b204u: goto label_46b204;
        case 0x46b208u: goto label_46b208;
        case 0x46b20cu: goto label_46b20c;
        case 0x46b210u: goto label_46b210;
        case 0x46b214u: goto label_46b214;
        case 0x46b218u: goto label_46b218;
        case 0x46b21cu: goto label_46b21c;
        case 0x46b220u: goto label_46b220;
        case 0x46b224u: goto label_46b224;
        case 0x46b228u: goto label_46b228;
        case 0x46b22cu: goto label_46b22c;
        case 0x46b230u: goto label_46b230;
        case 0x46b234u: goto label_46b234;
        case 0x46b238u: goto label_46b238;
        case 0x46b23cu: goto label_46b23c;
        case 0x46b240u: goto label_46b240;
        case 0x46b244u: goto label_46b244;
        case 0x46b248u: goto label_46b248;
        case 0x46b24cu: goto label_46b24c;
        case 0x46b250u: goto label_46b250;
        case 0x46b254u: goto label_46b254;
        case 0x46b258u: goto label_46b258;
        case 0x46b25cu: goto label_46b25c;
        case 0x46b260u: goto label_46b260;
        case 0x46b264u: goto label_46b264;
        case 0x46b268u: goto label_46b268;
        case 0x46b26cu: goto label_46b26c;
        case 0x46b270u: goto label_46b270;
        case 0x46b274u: goto label_46b274;
        case 0x46b278u: goto label_46b278;
        case 0x46b27cu: goto label_46b27c;
        case 0x46b280u: goto label_46b280;
        case 0x46b284u: goto label_46b284;
        case 0x46b288u: goto label_46b288;
        case 0x46b28cu: goto label_46b28c;
        case 0x46b290u: goto label_46b290;
        case 0x46b294u: goto label_46b294;
        case 0x46b298u: goto label_46b298;
        case 0x46b29cu: goto label_46b29c;
        case 0x46b2a0u: goto label_46b2a0;
        case 0x46b2a4u: goto label_46b2a4;
        case 0x46b2a8u: goto label_46b2a8;
        case 0x46b2acu: goto label_46b2ac;
        case 0x46b2b0u: goto label_46b2b0;
        case 0x46b2b4u: goto label_46b2b4;
        case 0x46b2b8u: goto label_46b2b8;
        case 0x46b2bcu: goto label_46b2bc;
        case 0x46b2c0u: goto label_46b2c0;
        case 0x46b2c4u: goto label_46b2c4;
        case 0x46b2c8u: goto label_46b2c8;
        case 0x46b2ccu: goto label_46b2cc;
        case 0x46b2d0u: goto label_46b2d0;
        case 0x46b2d4u: goto label_46b2d4;
        case 0x46b2d8u: goto label_46b2d8;
        case 0x46b2dcu: goto label_46b2dc;
        case 0x46b2e0u: goto label_46b2e0;
        case 0x46b2e4u: goto label_46b2e4;
        case 0x46b2e8u: goto label_46b2e8;
        case 0x46b2ecu: goto label_46b2ec;
        case 0x46b2f0u: goto label_46b2f0;
        case 0x46b2f4u: goto label_46b2f4;
        case 0x46b2f8u: goto label_46b2f8;
        case 0x46b2fcu: goto label_46b2fc;
        case 0x46b300u: goto label_46b300;
        case 0x46b304u: goto label_46b304;
        case 0x46b308u: goto label_46b308;
        case 0x46b30cu: goto label_46b30c;
        case 0x46b310u: goto label_46b310;
        case 0x46b314u: goto label_46b314;
        case 0x46b318u: goto label_46b318;
        case 0x46b31cu: goto label_46b31c;
        case 0x46b320u: goto label_46b320;
        case 0x46b324u: goto label_46b324;
        case 0x46b328u: goto label_46b328;
        case 0x46b32cu: goto label_46b32c;
        case 0x46b330u: goto label_46b330;
        case 0x46b334u: goto label_46b334;
        case 0x46b338u: goto label_46b338;
        case 0x46b33cu: goto label_46b33c;
        case 0x46b340u: goto label_46b340;
        case 0x46b344u: goto label_46b344;
        case 0x46b348u: goto label_46b348;
        case 0x46b34cu: goto label_46b34c;
        case 0x46b350u: goto label_46b350;
        case 0x46b354u: goto label_46b354;
        case 0x46b358u: goto label_46b358;
        case 0x46b35cu: goto label_46b35c;
        case 0x46b360u: goto label_46b360;
        case 0x46b364u: goto label_46b364;
        case 0x46b368u: goto label_46b368;
        case 0x46b36cu: goto label_46b36c;
        case 0x46b370u: goto label_46b370;
        case 0x46b374u: goto label_46b374;
        case 0x46b378u: goto label_46b378;
        case 0x46b37cu: goto label_46b37c;
        case 0x46b380u: goto label_46b380;
        case 0x46b384u: goto label_46b384;
        case 0x46b388u: goto label_46b388;
        case 0x46b38cu: goto label_46b38c;
        case 0x46b390u: goto label_46b390;
        case 0x46b394u: goto label_46b394;
        case 0x46b398u: goto label_46b398;
        case 0x46b39cu: goto label_46b39c;
        case 0x46b3a0u: goto label_46b3a0;
        case 0x46b3a4u: goto label_46b3a4;
        case 0x46b3a8u: goto label_46b3a8;
        case 0x46b3acu: goto label_46b3ac;
        case 0x46b3b0u: goto label_46b3b0;
        case 0x46b3b4u: goto label_46b3b4;
        case 0x46b3b8u: goto label_46b3b8;
        case 0x46b3bcu: goto label_46b3bc;
        case 0x46b3c0u: goto label_46b3c0;
        case 0x46b3c4u: goto label_46b3c4;
        case 0x46b3c8u: goto label_46b3c8;
        case 0x46b3ccu: goto label_46b3cc;
        case 0x46b3d0u: goto label_46b3d0;
        case 0x46b3d4u: goto label_46b3d4;
        case 0x46b3d8u: goto label_46b3d8;
        case 0x46b3dcu: goto label_46b3dc;
        case 0x46b3e0u: goto label_46b3e0;
        case 0x46b3e4u: goto label_46b3e4;
        case 0x46b3e8u: goto label_46b3e8;
        case 0x46b3ecu: goto label_46b3ec;
        case 0x46b3f0u: goto label_46b3f0;
        case 0x46b3f4u: goto label_46b3f4;
        case 0x46b3f8u: goto label_46b3f8;
        case 0x46b3fcu: goto label_46b3fc;
        case 0x46b400u: goto label_46b400;
        case 0x46b404u: goto label_46b404;
        case 0x46b408u: goto label_46b408;
        case 0x46b40cu: goto label_46b40c;
        case 0x46b410u: goto label_46b410;
        case 0x46b414u: goto label_46b414;
        case 0x46b418u: goto label_46b418;
        case 0x46b41cu: goto label_46b41c;
        case 0x46b420u: goto label_46b420;
        case 0x46b424u: goto label_46b424;
        case 0x46b428u: goto label_46b428;
        case 0x46b42cu: goto label_46b42c;
        case 0x46b430u: goto label_46b430;
        case 0x46b434u: goto label_46b434;
        default: break;
    }

    ctx->pc = 0x46b170u;

label_46b170:
    // 0x46b170: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x46b170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_46b174:
    // 0x46b174: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x46b174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_46b178:
    // 0x46b178: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x46b178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_46b17c:
    // 0x46b17c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x46b17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_46b180:
    // 0x46b180: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x46b180u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46b184:
    // 0x46b184: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x46b184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_46b188:
    // 0x46b188: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x46b188u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_46b18c:
    // 0x46b18c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x46b18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_46b190:
    // 0x46b190: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x46b190u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_46b194:
    // 0x46b194: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x46b194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_46b198:
    // 0x46b198: 0x74102b  sltu        $v0, $v1, $s4
    ctx->pc = 0x46b198u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_46b19c:
    // 0x46b19c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x46b19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_46b1a0:
    // 0x46b1a0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x46b1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_46b1a4:
    // 0x46b1a4: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x46b1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_46b1a8:
    // 0x46b1a8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x46b1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_46b1ac:
    // 0x46b1ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_46b1b0:
    if (ctx->pc == 0x46B1B0u) {
        ctx->pc = 0x46B1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B1ACu;
        // 0x46b1b0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B1B4u;
        goto label_46b1b4;
    }
    ctx->pc = 0x46B1ACu;
    {
        const bool branch_taken_0x46b1ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46B1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B1ACu;
        // 0x46b1b0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b1ac) {
            ctx->pc = 0x46B1BCu;
            goto label_46b1bc;
        }
    }
    ctx->pc = 0x46B1B4u;
label_46b1b4:
    // 0x46b1b4: 0x6c3000e  bgezl       $s6, . + 4 + (0xE << 2)
label_46b1b8:
    if (ctx->pc == 0x46B1B8u) {
        ctx->pc = 0x46B1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B1B4u;
        // 0x46b1b8: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B1BCu;
        goto label_46b1bc;
    }
    ctx->pc = 0x46B1B4u;
    {
        const bool branch_taken_0x46b1b4 = (GPR_S32(ctx, 22) >= 0);
        if (branch_taken_0x46b1b4) {
            ctx->pc = 0x46B1B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46B1B4u;
            // 0x46b1b8: 0x3c030053  lui         $v1, 0x53 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46B1F0u;
            goto label_46b1f0;
        }
    }
    ctx->pc = 0x46B1BCu;
label_46b1bc:
    // 0x46b1bc: 0x6800091  bltz        $s4, . + 4 + (0x91 << 2)
label_46b1c0:
    if (ctx->pc == 0x46B1C0u) {
        ctx->pc = 0x46B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B1BCu;
        // 0x46b1c0: 0x74102a  slt         $v0, $v1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B1C4u;
        goto label_46b1c4;
    }
    ctx->pc = 0x46B1BCu;
    {
        const bool branch_taken_0x46b1bc = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x46B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B1BCu;
        // 0x46b1c0: 0x74102a  slt         $v0, $v1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b1bc) {
            ctx->pc = 0x46B404u;
            goto label_46b404;
        }
    }
    ctx->pc = 0x46B1C4u;
label_46b1c4:
    // 0x46b1c4: 0x1040008f  beqz        $v0, . + 4 + (0x8F << 2)
label_46b1c8:
    if (ctx->pc == 0x46B1C8u) {
        ctx->pc = 0x46B1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B1C4u;
        // 0x46b1c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B1CCu;
        goto label_46b1cc;
    }
    ctx->pc = 0x46B1C4u;
    {
        const bool branch_taken_0x46b1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B1C4u;
        // 0x46b1c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b1c4) {
            ctx->pc = 0x46B404u;
            goto label_46b404;
        }
    }
    ctx->pc = 0x46B1CCu;
label_46b1cc:
    // 0x46b1cc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x46b1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_46b1d0:
    // 0x46b1d0: 0xc11eff2  jal         func_47BFC8
label_46b1d4:
    if (ctx->pc == 0x46B1D4u) {
        ctx->pc = 0x46B1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B1D0u;
        // 0x46b1d4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B1D8u;
        goto label_46b1d8;
    }
    ctx->pc = 0x46B1D0u;
    SET_GPR_U32(ctx, 31, 0x46B1D8u);
    ctx->pc = 0x46B1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B1D0u;
    // 0x46b1d4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x46B1D0u, 0x46B1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B1D8u;
label_46b1d8:
    // 0x46b1d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x46b1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_46b1dc:
    // 0x46b1dc: 0xc11f024  jal         func_47C090
label_46b1e0:
    if (ctx->pc == 0x46B1E0u) {
        ctx->pc = 0x46B1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B1DCu;
        // 0x46b1e0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B1E4u;
        goto label_46b1e4;
    }
    ctx->pc = 0x46B1DCu;
    SET_GPR_U32(ctx, 31, 0x46B1E4u);
    ctx->pc = 0x46B1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B1DCu;
    // 0x46b1e0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x46B1DCu, 0x46B1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B1E4u;
label_46b1e4:
    // 0x46b1e4: 0x10000088  b           . + 4 + (0x88 << 2)
label_46b1e8:
    if (ctx->pc == 0x46B1E8u) {
        ctx->pc = 0x46B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B1E4u;
        // 0x46b1e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B1ECu;
        goto label_46b1ec;
    }
    ctx->pc = 0x46B1E4u;
    {
        const bool branch_taken_0x46b1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B1E4u;
        // 0x46b1e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b1e4) {
            ctx->pc = 0x46B408u;
            goto label_46b408;
        }
    }
    ctx->pc = 0x46B1ECu;
label_46b1ec:
    // 0x46b1ec: 0x0  nop
    ctx->pc = 0x46b1ecu;
    // NOP
label_46b1f0:
    // 0x46b1f0: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x46b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_46b1f4:
    // 0x46b1f4: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x46b1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_46b1f8:
    // 0x46b1f8: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x46b1f8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_46b1fc:
    // 0x46b1fc: 0x32b300ff  andi        $s3, $s5, 0xFF
    ctx->pc = 0x46b1fcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_46b200:
    // 0x46b200: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46b204:
    if (ctx->pc == 0x46B204u) {
        ctx->pc = 0x46B204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B200u;
        // 0x46b204: 0x8c64e6e0  lw          $a0, -0x1920($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960864)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B208u;
        goto label_46b208;
    }
    ctx->pc = 0x46B200u;
    {
        const bool branch_taken_0x46b200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B200u;
        // 0x46b204: 0x8c64e6e0  lw          $a0, -0x1920($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b200) {
            ctx->pc = 0x46B210u;
            goto label_46b210;
        }
    }
    ctx->pc = 0x46B208u;
label_46b208:
    // 0x46b208: 0x10000006  b           . + 4 + (0x6 << 2)
label_46b20c:
    if (ctx->pc == 0x46B20Cu) {
        ctx->pc = 0x46B20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B208u;
        // 0x46b20c: 0x29402  srl         $s2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B210u;
        goto label_46b210;
    }
    ctx->pc = 0x46B208u;
    {
        const bool branch_taken_0x46b208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B208u;
        // 0x46b20c: 0x29402  srl         $s2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b208) {
            ctx->pc = 0x46B224u;
            goto label_46b224;
        }
    }
    ctx->pc = 0x46B210u;
label_46b210:
    // 0x46b210: 0x32a20080  andi        $v0, $s5, 0x80
    ctx->pc = 0x46b210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
label_46b214:
    // 0x46b214: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_46b218:
    if (ctx->pc == 0x46B218u) {
        ctx->pc = 0x46B218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B214u;
        // 0x46b218: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B21Cu;
        goto label_46b21c;
    }
    ctx->pc = 0x46B214u;
    {
        const bool branch_taken_0x46b214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46b214) {
            ctx->pc = 0x46B218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46B214u;
            // 0x46b218: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46B224u;
            goto label_46b224;
        }
    }
    ctx->pc = 0x46B21Cu;
label_46b21c:
    // 0x46b21c: 0x159083  sra         $s2, $s5, 2
    ctx->pc = 0x46b21cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 21), 2));
label_46b220:
    // 0x46b220: 0x32520001  andi        $s2, $s2, 0x1
    ctx->pc = 0x46b220u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_46b224:
    // 0x46b224: 0x2402ff7b  addiu       $v0, $zero, -0x85
    ctx->pc = 0x46b224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967163));
label_46b228:
    // 0x46b228: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x46b228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46b22c:
    // 0x46b22c: 0x12430005  beq         $s2, $v1, . + 4 + (0x5 << 2)
label_46b230:
    if (ctx->pc == 0x46B230u) {
        ctx->pc = 0x46B230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B22Cu;
        // 0x46b230: 0x2622824  and         $a1, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B234u;
        goto label_46b234;
    }
    ctx->pc = 0x46B22Cu;
    {
        const bool branch_taken_0x46b22c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x46B230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B22Cu;
        // 0x46b230: 0x2622824  and         $a1, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b22c) {
            ctx->pc = 0x46B244u;
            goto label_46b244;
        }
    }
    ctx->pc = 0x46B234u;
label_46b234:
    // 0x46b234: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x46b234u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_46b238:
    // 0x46b238: 0x34b30080  ori         $s3, $a1, 0x80
    ctx->pc = 0x46b238u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
label_46b23c:
    // 0x46b23c: 0x10000002  b           . + 4 + (0x2 << 2)
label_46b240:
    if (ctx->pc == 0x46B240u) {
        ctx->pc = 0x46B240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B23Cu;
        // 0x46b240: 0xa2980b  movn        $s3, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B244u;
        goto label_46b244;
    }
    ctx->pc = 0x46B23Cu;
    {
        const bool branch_taken_0x46b23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B23Cu;
        // 0x46b240: 0xa2980b  movn        $s3, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b23c) {
            ctx->pc = 0x46B248u;
            goto label_46b248;
        }
    }
    ctx->pc = 0x46B244u;
label_46b244:
    // 0x46b244: 0x34b30004  ori         $s3, $a1, 0x4
    ctx->pc = 0x46b244u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
label_46b248:
    // 0x46b248: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x46b248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_46b24c:
    // 0x46b24c: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x46b24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_46b250:
    // 0x46b250: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_46b254:
    if (ctx->pc == 0x46B254u) {
        ctx->pc = 0x46B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B250u;
        // 0x46b254: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B258u;
        goto label_46b258;
    }
    ctx->pc = 0x46B250u;
    {
        const bool branch_taken_0x46b250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B250u;
        // 0x46b254: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b250) {
            ctx->pc = 0x46B284u;
            goto label_46b284;
        }
    }
    ctx->pc = 0x46B258u;
label_46b258:
    // 0x46b258: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x46b258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_46b25c:
    // 0x46b25c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_46b260:
    if (ctx->pc == 0x46B260u) {
        ctx->pc = 0x46B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B25Cu;
        // 0x46b260: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B264u;
        goto label_46b264;
    }
    ctx->pc = 0x46B25Cu;
    {
        const bool branch_taken_0x46b25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B25Cu;
        // 0x46b260: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b25c) {
            ctx->pc = 0x46B268u;
            goto label_46b268;
        }
    }
    ctx->pc = 0x46B264u;
label_46b264:
    // 0x46b264: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x46b264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_46b268:
    // 0x46b268: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_46b26c:
    if (ctx->pc == 0x46B26Cu) {
        ctx->pc = 0x46B26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B268u;
        // 0x46b26c: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B270u;
        goto label_46b270;
    }
    ctx->pc = 0x46B268u;
    {
        const bool branch_taken_0x46b268 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B268u;
        // 0x46b26c: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b268) {
            ctx->pc = 0x46B278u;
            goto label_46b278;
        }
    }
    ctx->pc = 0x46B270u;
label_46b270:
    // 0x46b270: 0x2821818  mult        $v1, $s4, $v0
    ctx->pc = 0x46b270u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_46b274:
    // 0x46b274: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x46b274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_46b278:
    // 0x46b278: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x46b278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
label_46b27c:
    // 0x46b27c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x46b27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_46b280:
    // 0x46b280: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x46b280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_46b284:
    // 0x46b284: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x46b284u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_46b288:
    // 0x46b288: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x46b288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_46b28c:
    // 0x46b28c: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x46b28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_46b290:
    // 0x46b290: 0x40f809  jalr        $v0
label_46b294:
    if (ctx->pc == 0x46B294u) {
        ctx->pc = 0x46B294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B290u;
        // 0x46b294: 0x34a5000f  ori         $a1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B298u;
        goto label_46b298;
    }
    ctx->pc = 0x46B290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46B298u);
        ctx->pc = 0x46B294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B290u;
        // 0x46b294: 0x34a5000f  ori         $a1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B290u, 0x46B298u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46B298u;
label_46b298:
    // 0x46b298: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x46b298u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46b29c:
    // 0x46b29c: 0x1220005a  beqz        $s1, . + 4 + (0x5A << 2)
label_46b2a0:
    if (ctx->pc == 0x46B2A0u) {
        ctx->pc = 0x46B2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B29Cu;
        // 0x46b2a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B2A4u;
        goto label_46b2a4;
    }
    ctx->pc = 0x46B29Cu;
    {
        const bool branch_taken_0x46b29c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B29Cu;
        // 0x46b2a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b29c) {
            ctx->pc = 0x46B408u;
            goto label_46b408;
        }
    }
    ctx->pc = 0x46B2A4u;
label_46b2a4:
    // 0x46b2a4: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x46b2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_46b2a8:
    // 0x46b2a8: 0xc11b590  jal         func_46D640
label_46b2ac:
    if (ctx->pc == 0x46B2ACu) {
        ctx->pc = 0x46B2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B2A8u;
        // 0x46b2ac: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B2B0u;
        goto label_46b2b0;
    }
    ctx->pc = 0x46B2A8u;
    SET_GPR_U32(ctx, 31, 0x46B2B0u);
    ctx->pc = 0x46B2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B2A8u;
    // 0x46b2ac: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D640u, 0x46B2A8u, 0x46B2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B2B0u;
label_46b2b0:
    // 0x46b2b0: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
label_46b2b4:
    if (ctx->pc == 0x46B2B4u) {
        ctx->pc = 0x46B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B2B0u;
        // 0x46b2b4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B2B8u;
        goto label_46b2b8;
    }
    ctx->pc = 0x46B2B0u;
    {
        const bool branch_taken_0x46b2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B2B0u;
        // 0x46b2b4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b2b0) {
            ctx->pc = 0x46B404u;
            goto label_46b404;
        }
    }
    ctx->pc = 0x46B2B8u;
label_46b2b8:
    // 0x46b2b8: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x46b2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
label_46b2bc:
    // 0x46b2bc: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x46b2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_46b2c0:
    // 0x46b2c0: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x46b2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_46b2c4:
    // 0x46b2c4: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x46b2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
label_46b2c8:
    // 0x46b2c8: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x46b2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
label_46b2cc:
    // 0x46b2cc: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x46b2ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
label_46b2d0:
    // 0x46b2d0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x46b2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_46b2d4:
    // 0x46b2d4: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x46b2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_46b2d8:
    // 0x46b2d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46b2dc:
    // 0x46b2dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46b2dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46b2e0:
    // 0x46b2e0: 0x26300034  addiu       $s0, $s1, 0x34
    ctx->pc = 0x46b2e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
label_46b2e4:
    // 0x46b2e4: 0xa620000c  sh          $zero, 0xC($s1)
    ctx->pc = 0x46b2e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 0));
label_46b2e8:
    // 0x46b2e8: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x46b2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_46b2ec:
    // 0x46b2ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46b2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46b2f0:
    // 0x46b2f0: 0xae32001c  sw          $s2, 0x1C($s1)
    ctx->pc = 0x46b2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 18));
label_46b2f4:
    // 0x46b2f4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x46b2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_46b2f8:
    // 0x46b2f8: 0xc10c1fa  jal         func_4307E8
label_46b2fc:
    if (ctx->pc == 0x46B2FCu) {
        ctx->pc = 0x46B2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B2F8u;
        // 0x46b2fc: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B300u;
        goto label_46b300;
    }
    ctx->pc = 0x46B2F8u;
    SET_GPR_U32(ctx, 31, 0x46B300u);
    ctx->pc = 0x46B2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B2F8u;
    // 0x46b2fc: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x46B2F8u, 0x46B300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B300u;
label_46b300:
    // 0x46b300: 0x3c020f00  lui         $v0, 0xF00
    ctx->pc = 0x46b300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3840 << 16));
label_46b304:
    // 0x46b304: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x46b304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_46b308:
    // 0x46b308: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x46b308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_46b30c:
    // 0x46b30c: 0x2a31824  and         $v1, $s5, $v1
    ctx->pc = 0x46b30cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & GPR_U64(ctx, 3));
label_46b310:
    // 0x46b310: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x46b310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_46b314:
    // 0x46b314: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x46b314u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_46b318:
    // 0x46b318: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x46b318u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_46b31c:
    // 0x46b31c: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x46b31cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_46b320:
    // 0x46b320: 0xae360010  sw          $s6, 0x10($s1)
    ctx->pc = 0x46b320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 22));
label_46b324:
    // 0x46b324: 0x14600027  bnez        $v1, . + 4 + (0x27 << 2)
label_46b328:
    if (ctx->pc == 0x46B328u) {
        ctx->pc = 0x46B328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B324u;
        // 0x46b328: 0xae340014  sw          $s4, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B32Cu;
        goto label_46b32c;
    }
    ctx->pc = 0x46B324u;
    {
        const bool branch_taken_0x46b324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x46B328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B324u;
        // 0x46b328: 0xae340014  sw          $s4, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b324) {
            ctx->pc = 0x46B3C4u;
            goto label_46b3c4;
        }
    }
    ctx->pc = 0x46B32Cu;
label_46b32c:
    // 0x46b32c: 0x8fc2e6e0  lw          $v0, -0x1920($fp)
    ctx->pc = 0x46b32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294960864)));
label_46b330:
    // 0x46b330: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x46b330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_46b334:
    // 0x46b334: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_46b338:
    if (ctx->pc == 0x46B338u) {
        ctx->pc = 0x46B338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B334u;
        // 0x46b338: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B33Cu;
        goto label_46b33c;
    }
    ctx->pc = 0x46B334u;
    {
        const bool branch_taken_0x46b334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B334u;
        // 0x46b338: 0x2222821  addu        $a1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b334) {
            ctx->pc = 0x46B350u;
            goto label_46b350;
        }
    }
    ctx->pc = 0x46B33Cu;
label_46b33c:
    // 0x46b33c: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_46b340:
    if (ctx->pc == 0x46B340u) {
        ctx->pc = 0x46B340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B33Cu;
        // 0x46b340: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B344u;
        goto label_46b344;
    }
    ctx->pc = 0x46B33Cu;
    {
        const bool branch_taken_0x46b33c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B33Cu;
        // 0x46b340: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b33c) {
            ctx->pc = 0x46B350u;
            goto label_46b350;
        }
    }
    ctx->pc = 0x46B344u;
label_46b344:
    // 0x46b344: 0xae250030  sw          $a1, 0x30($s1)
    ctx->pc = 0x46b344u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 5));
label_46b348:
    // 0x46b348: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x46b348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_46b34c:
    // 0x46b34c: 0x0  nop
    ctx->pc = 0x46b34cu;
    // NOP
label_46b350:
    // 0x46b350: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
label_46b354:
    if (ctx->pc == 0x46B354u) {
        ctx->pc = 0x46B358u;
        goto label_46b358;
    }
    ctx->pc = 0x46B350u;
    {
        const bool branch_taken_0x46b350 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b350) {
            ctx->pc = 0x46B38Cu;
            goto label_46b38c;
        }
    }
    ctx->pc = 0x46B358u;
label_46b358:
    // 0x46b358: 0x1280000c  beqz        $s4, . + 4 + (0xC << 2)
label_46b35c:
    if (ctx->pc == 0x46B35Cu) {
        ctx->pc = 0x46B360u;
        goto label_46b360;
    }
    ctx->pc = 0x46B358u;
    {
        const bool branch_taken_0x46b358 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b358) {
            ctx->pc = 0x46B38Cu;
            goto label_46b38c;
        }
    }
    ctx->pc = 0x46B360u;
label_46b360:
    // 0x46b360: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
label_46b364:
    if (ctx->pc == 0x46B364u) {
        ctx->pc = 0x46B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B360u;
        // 0x46b364: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B368u;
        goto label_46b368;
    }
    ctx->pc = 0x46B360u;
    {
        const bool branch_taken_0x46b360 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B360u;
        // 0x46b364: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b360) {
            ctx->pc = 0x46B38Cu;
            goto label_46b38c;
        }
    }
    ctx->pc = 0x46B368u;
label_46b368:
    // 0x46b368: 0x1420c0  sll         $a0, $s4, 3
    ctx->pc = 0x46b368u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
label_46b36c:
    // 0x46b36c: 0x0  nop
    ctx->pc = 0x46b36cu;
    // NOP
label_46b370:
    // 0x46b370: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x46b370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_46b374:
    // 0x46b374: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x46b374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_46b378:
    // 0x46b378: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x46b378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_46b37c:
    // 0x46b37c: 0x72102b  sltu        $v0, $v1, $s2
    ctx->pc = 0x46b37cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_46b380:
    // 0x46b380: 0x0  nop
    ctx->pc = 0x46b380u;
    // NOP
label_46b384:
    // 0x46b384: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_46b388:
    if (ctx->pc == 0x46B388u) {
        ctx->pc = 0x46B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B384u;
        // 0x46b388: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B38Cu;
        goto label_46b38c;
    }
    ctx->pc = 0x46B384u;
    {
        const bool branch_taken_0x46b384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B384u;
        // 0x46b388: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b384) {
            ctx->pc = 0x46B370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46b370;
        }
    }
    ctx->pc = 0x46B38Cu;
label_46b38c:
    // 0x46b38c: 0x12c0000e  beqz        $s6, . + 4 + (0xE << 2)
label_46b390:
    if (ctx->pc == 0x46B390u) {
        ctx->pc = 0x46B390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B38Cu;
        // 0x46b390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B394u;
        goto label_46b394;
    }
    ctx->pc = 0x46B38Cu;
    {
        const bool branch_taken_0x46b38c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B38Cu;
        // 0x46b390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b38c) {
            ctx->pc = 0x46B3C8u;
            goto label_46b3c8;
        }
    }
    ctx->pc = 0x46B394u;
label_46b394:
    // 0x46b394: 0xae25002c  sw          $a1, 0x2C($s1)
    ctx->pc = 0x46b394u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 5));
label_46b398:
    // 0x46b398: 0x1ac0000b  blez        $s6, . + 4 + (0xB << 2)
label_46b39c:
    if (ctx->pc == 0x46B39Cu) {
        ctx->pc = 0x46B39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B398u;
        // 0x46b39c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B3A0u;
        goto label_46b3a0;
    }
    ctx->pc = 0x46B398u;
    {
        const bool branch_taken_0x46b398 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x46B39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B398u;
        // 0x46b39c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b398) {
            ctx->pc = 0x46B3C8u;
            goto label_46b3c8;
        }
    }
    ctx->pc = 0x46B3A0u;
label_46b3a0:
    // 0x46b3a0: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x46b3a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_46b3a4:
    // 0x46b3a4: 0x0  nop
    ctx->pc = 0x46b3a4u;
    // NOP
label_46b3a8:
    // 0x46b3a8: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x46b3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_46b3ac:
    // 0x46b3ac: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x46b3acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_46b3b0:
    // 0x46b3b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x46b3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_46b3b4:
    // 0x46b3b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x46b3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_46b3b8:
    // 0x46b3b8: 0xb6202a  slt         $a0, $a1, $s6
    ctx->pc = 0x46b3b8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_46b3bc:
    // 0x46b3bc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_46b3c0:
    if (ctx->pc == 0x46B3C0u) {
        ctx->pc = 0x46B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B3BCu;
        // 0x46b3c0: 0xa4660006  sh          $a2, 0x6($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B3C4u;
        goto label_46b3c4;
    }
    ctx->pc = 0x46B3BCu;
    {
        const bool branch_taken_0x46b3bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x46B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B3BCu;
        // 0x46b3c0: 0xa4660006  sh          $a2, 0x6($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b3bc) {
            ctx->pc = 0x46B3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46b3a8;
        }
    }
    ctx->pc = 0x46B3C4u;
label_46b3c4:
    // 0x46b3c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x46b3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46b3c8:
    // 0x46b3c8: 0xc11ab14  jal         func_46AC50
label_46b3cc:
    if (ctx->pc == 0x46B3CCu) {
        ctx->pc = 0x46B3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B3C8u;
        // 0x46b3cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B3D0u;
        goto label_46b3d0;
    }
    ctx->pc = 0x46B3C8u;
    SET_GPR_U32(ctx, 31, 0x46B3D0u);
    ctx->pc = 0x46B3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B3C8u;
    // 0x46b3cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46AC50u, 0x46B3C8u, 0x46B3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B3D0u;
label_46b3d0:
    // 0x46b3d0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_46b3d4:
    if (ctx->pc == 0x46B3D4u) {
        ctx->pc = 0x46B3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B3D0u;
        // 0x46b3d4: 0x27c4e6e0  addiu       $a0, $fp, -0x1920 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294960864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B3D8u;
        goto label_46b3d8;
    }
    ctx->pc = 0x46B3D0u;
    {
        const bool branch_taken_0x46b3d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x46B3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B3D0u;
        // 0x46b3d4: 0x27c4e6e0  addiu       $a0, $fp, -0x1920 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294960864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b3d0) {
            ctx->pc = 0x46B3E8u;
            goto label_46b3e8;
        }
    }
    ctx->pc = 0x46B3D8u;
label_46b3d8:
    // 0x46b3d8: 0xc11ff8e  jal         func_47FE38
label_46b3dc:
    if (ctx->pc == 0x46B3DCu) {
        ctx->pc = 0x46B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B3D8u;
        // 0x46b3dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B3E0u;
        goto label_46b3e0;
    }
    ctx->pc = 0x46B3D8u;
    SET_GPR_U32(ctx, 31, 0x46B3E0u);
    ctx->pc = 0x46B3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B3D8u;
    // 0x46b3dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FE38u, 0x46B3D8u, 0x46B3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B3E0u;
label_46b3e0:
    // 0x46b3e0: 0x10000009  b           . + 4 + (0x9 << 2)
label_46b3e4:
    if (ctx->pc == 0x46B3E4u) {
        ctx->pc = 0x46B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B3E0u;
        // 0x46b3e4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B3E8u;
        goto label_46b3e8;
    }
    ctx->pc = 0x46B3E0u;
    {
        const bool branch_taken_0x46b3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B3E0u;
        // 0x46b3e4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46b3e0) {
            ctx->pc = 0x46B408u;
            goto label_46b408;
        }
    }
    ctx->pc = 0x46B3E8u;
label_46b3e8:
    // 0x46b3e8: 0xc11b596  jal         func_46D658
label_46b3ec:
    if (ctx->pc == 0x46B3ECu) {
        ctx->pc = 0x46B3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B3E8u;
        // 0x46b3ec: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B3F0u;
        goto label_46b3f0;
    }
    ctx->pc = 0x46B3E8u;
    SET_GPR_U32(ctx, 31, 0x46B3F0u);
    ctx->pc = 0x46B3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46B3E8u;
    // 0x46b3ec: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D658u, 0x46B3E8u, 0x46B3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B3F0u;
label_46b3f0:
    // 0x46b3f0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x46b3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_46b3f4:
    // 0x46b3f4: 0x2443ad18  addiu       $v1, $v0, -0x52E8
    ctx->pc = 0x46b3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_46b3f8:
    // 0x46b3f8: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x46b3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_46b3fc:
    // 0x46b3fc: 0x40f809  jalr        $v0
label_46b400:
    if (ctx->pc == 0x46B400u) {
        ctx->pc = 0x46B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B3FCu;
        // 0x46b400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B404u;
        goto label_46b404;
    }
    ctx->pc = 0x46B3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46B404u);
        ctx->pc = 0x46B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B3FCu;
        // 0x46b400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B3FCu, 0x46B404u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46B404u;
label_46b404:
    // 0x46b404: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x46b404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46b408:
    // 0x46b408: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x46b408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_46b40c:
    // 0x46b40c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x46b40cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_46b410:
    // 0x46b410: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x46b410u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_46b414:
    // 0x46b414: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x46b414u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_46b418:
    // 0x46b418: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x46b418u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_46b41c:
    // 0x46b41c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x46b41cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_46b420:
    // 0x46b420: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x46b420u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_46b424:
    // 0x46b424: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x46b424u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_46b428:
    // 0x46b428: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x46b428u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46b42c:
    // 0x46b42c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x46b42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_46b430:
    // 0x46b430: 0x3e00008  jr          $ra
label_46b434:
    if (ctx->pc == 0x46B434u) {
        ctx->pc = 0x46B434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B430u;
        // 0x46b434: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46B438u;
        goto label_fallthrough_0x46b430;
    }
    ctx->pc = 0x46B430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46B434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46B430u;
        // 0x46b434: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x46b430:
    ctx->pc = 0x46B438u;
}
