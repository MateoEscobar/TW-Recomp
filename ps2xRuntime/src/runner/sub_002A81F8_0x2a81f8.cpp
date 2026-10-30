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

// Function: sub_002A81F8
// Address: 0x2a81f8 - 0x2a83f8
void sub_002A81F8_0x2a81f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A81F8_0x2a81f8");
#endif

    switch (ctx->pc) {
        case 0x2a81f8u: goto label_2a81f8;
        case 0x2a81fcu: goto label_2a81fc;
        case 0x2a8200u: goto label_2a8200;
        case 0x2a8204u: goto label_2a8204;
        case 0x2a8208u: goto label_2a8208;
        case 0x2a820cu: goto label_2a820c;
        case 0x2a8210u: goto label_2a8210;
        case 0x2a8214u: goto label_2a8214;
        case 0x2a8218u: goto label_2a8218;
        case 0x2a821cu: goto label_2a821c;
        case 0x2a8220u: goto label_2a8220;
        case 0x2a8224u: goto label_2a8224;
        case 0x2a8228u: goto label_2a8228;
        case 0x2a822cu: goto label_2a822c;
        case 0x2a8230u: goto label_2a8230;
        case 0x2a8234u: goto label_2a8234;
        case 0x2a8238u: goto label_2a8238;
        case 0x2a823cu: goto label_2a823c;
        case 0x2a8240u: goto label_2a8240;
        case 0x2a8244u: goto label_2a8244;
        case 0x2a8248u: goto label_2a8248;
        case 0x2a824cu: goto label_2a824c;
        case 0x2a8250u: goto label_2a8250;
        case 0x2a8254u: goto label_2a8254;
        case 0x2a8258u: goto label_2a8258;
        case 0x2a825cu: goto label_2a825c;
        case 0x2a8260u: goto label_2a8260;
        case 0x2a8264u: goto label_2a8264;
        case 0x2a8268u: goto label_2a8268;
        case 0x2a826cu: goto label_2a826c;
        case 0x2a8270u: goto label_2a8270;
        case 0x2a8274u: goto label_2a8274;
        case 0x2a8278u: goto label_2a8278;
        case 0x2a827cu: goto label_2a827c;
        case 0x2a8280u: goto label_2a8280;
        case 0x2a8284u: goto label_2a8284;
        case 0x2a8288u: goto label_2a8288;
        case 0x2a828cu: goto label_2a828c;
        case 0x2a8290u: goto label_2a8290;
        case 0x2a8294u: goto label_2a8294;
        case 0x2a8298u: goto label_2a8298;
        case 0x2a829cu: goto label_2a829c;
        case 0x2a82a0u: goto label_2a82a0;
        case 0x2a82a4u: goto label_2a82a4;
        case 0x2a82a8u: goto label_2a82a8;
        case 0x2a82acu: goto label_2a82ac;
        case 0x2a82b0u: goto label_2a82b0;
        case 0x2a82b4u: goto label_2a82b4;
        case 0x2a82b8u: goto label_2a82b8;
        case 0x2a82bcu: goto label_2a82bc;
        case 0x2a82c0u: goto label_2a82c0;
        case 0x2a82c4u: goto label_2a82c4;
        case 0x2a82c8u: goto label_2a82c8;
        case 0x2a82ccu: goto label_2a82cc;
        case 0x2a82d0u: goto label_2a82d0;
        case 0x2a82d4u: goto label_2a82d4;
        case 0x2a82d8u: goto label_2a82d8;
        case 0x2a82dcu: goto label_2a82dc;
        case 0x2a82e0u: goto label_2a82e0;
        case 0x2a82e4u: goto label_2a82e4;
        case 0x2a82e8u: goto label_2a82e8;
        case 0x2a82ecu: goto label_2a82ec;
        case 0x2a82f0u: goto label_2a82f0;
        case 0x2a82f4u: goto label_2a82f4;
        case 0x2a82f8u: goto label_2a82f8;
        case 0x2a82fcu: goto label_2a82fc;
        case 0x2a8300u: goto label_2a8300;
        case 0x2a8304u: goto label_2a8304;
        case 0x2a8308u: goto label_2a8308;
        case 0x2a830cu: goto label_2a830c;
        case 0x2a8310u: goto label_2a8310;
        case 0x2a8314u: goto label_2a8314;
        case 0x2a8318u: goto label_2a8318;
        case 0x2a831cu: goto label_2a831c;
        case 0x2a8320u: goto label_2a8320;
        case 0x2a8324u: goto label_2a8324;
        case 0x2a8328u: goto label_2a8328;
        case 0x2a832cu: goto label_2a832c;
        case 0x2a8330u: goto label_2a8330;
        case 0x2a8334u: goto label_2a8334;
        case 0x2a8338u: goto label_2a8338;
        case 0x2a833cu: goto label_2a833c;
        case 0x2a8340u: goto label_2a8340;
        case 0x2a8344u: goto label_2a8344;
        case 0x2a8348u: goto label_2a8348;
        case 0x2a834cu: goto label_2a834c;
        case 0x2a8350u: goto label_2a8350;
        case 0x2a8354u: goto label_2a8354;
        case 0x2a8358u: goto label_2a8358;
        case 0x2a835cu: goto label_2a835c;
        case 0x2a8360u: goto label_2a8360;
        case 0x2a8364u: goto label_2a8364;
        case 0x2a8368u: goto label_2a8368;
        case 0x2a836cu: goto label_2a836c;
        case 0x2a8370u: goto label_2a8370;
        case 0x2a8374u: goto label_2a8374;
        case 0x2a8378u: goto label_2a8378;
        case 0x2a837cu: goto label_2a837c;
        case 0x2a8380u: goto label_2a8380;
        case 0x2a8384u: goto label_2a8384;
        case 0x2a8388u: goto label_2a8388;
        case 0x2a838cu: goto label_2a838c;
        case 0x2a8390u: goto label_2a8390;
        case 0x2a8394u: goto label_2a8394;
        case 0x2a8398u: goto label_2a8398;
        case 0x2a839cu: goto label_2a839c;
        case 0x2a83a0u: goto label_2a83a0;
        case 0x2a83a4u: goto label_2a83a4;
        case 0x2a83a8u: goto label_2a83a8;
        case 0x2a83acu: goto label_2a83ac;
        case 0x2a83b0u: goto label_2a83b0;
        case 0x2a83b4u: goto label_2a83b4;
        case 0x2a83b8u: goto label_2a83b8;
        case 0x2a83bcu: goto label_2a83bc;
        case 0x2a83c0u: goto label_2a83c0;
        case 0x2a83c4u: goto label_2a83c4;
        case 0x2a83c8u: goto label_2a83c8;
        case 0x2a83ccu: goto label_2a83cc;
        case 0x2a83d0u: goto label_2a83d0;
        case 0x2a83d4u: goto label_2a83d4;
        case 0x2a83d8u: goto label_2a83d8;
        case 0x2a83dcu: goto label_2a83dc;
        case 0x2a83e0u: goto label_2a83e0;
        case 0x2a83e4u: goto label_2a83e4;
        case 0x2a83e8u: goto label_2a83e8;
        case 0x2a83ecu: goto label_2a83ec;
        case 0x2a83f0u: goto label_2a83f0;
        case 0x2a83f4u: goto label_2a83f4;
        default: break;
    }

    ctx->pc = 0x2a81f8u;

label_2a81f8:
    // 0x2a81f8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2a81f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2a81fc:
    // 0x2a81fc: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2a81fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_2a8200:
    // 0x2a8200: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2a8200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_2a8204:
    // 0x2a8204: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2a8204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_2a8208:
    // 0x2a8208: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a8208u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a820c:
    // 0x2a820c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2a820cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_2a8210:
    // 0x2a8210: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2a8210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_2a8214:
    // 0x2a8214: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a8214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2a8218:
    // 0x2a8218: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a8218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2a821c:
    // 0x2a821c: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x2a821cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2a8220:
    // 0x2a8220: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
label_2a8224:
    if (ctx->pc == 0x2A8224u) {
        ctx->pc = 0x2A8224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8220u;
        // 0x2a8224: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8228u;
        goto label_2a8228;
    }
    ctx->pc = 0x2A8220u;
    {
        const bool branch_taken_0x2a8220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8220u;
        // 0x2a8224: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8220) {
            ctx->pc = 0x2A83D0u;
            goto label_2a83d0;
        }
    }
    ctx->pc = 0x2A8228u;
label_2a8228:
    // 0x2a8228: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x2a8228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_2a822c:
    // 0x2a822c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a822cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a8230:
    // 0x2a8230: 0x54620068  bnel        $v1, $v0, . + 4 + (0x68 << 2)
label_2a8234:
    if (ctx->pc == 0x2A8234u) {
        ctx->pc = 0x2A8234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8230u;
        // 0x2a8234: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8238u;
        goto label_2a8238;
    }
    ctx->pc = 0x2A8230u;
    {
        const bool branch_taken_0x2a8230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a8230) {
            ctx->pc = 0x2A8234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8230u;
            // 0x2a8234: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A83D4u;
            goto label_2a83d4;
        }
    }
    ctx->pc = 0x2A8238u;
label_2a8238:
    // 0x2a8238: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2a8238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a823c:
    // 0x2a823c: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2a823cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2a8240:
    // 0x2a8240: 0x18400063  blez        $v0, . + 4 + (0x63 << 2)
label_2a8244:
    if (ctx->pc == 0x2A8244u) {
        ctx->pc = 0x2A8244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8240u;
        // 0x2a8244: 0x2a82a  slt         $s5, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8248u;
        goto label_2a8248;
    }
    ctx->pc = 0x2A8240u;
    {
        const bool branch_taken_0x2a8240 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2A8244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8240u;
        // 0x2a8244: 0x2a82a  slt         $s5, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8240) {
            ctx->pc = 0x2A83D0u;
            goto label_2a83d0;
        }
    }
    ctx->pc = 0x2A8248u;
label_2a8248:
    // 0x2a8248: 0xc0a36c2  jal         func_28DB08
label_2a824c:
    if (ctx->pc == 0x2A824Cu) {
        ctx->pc = 0x2A8250u;
        goto label_2a8250;
    }
    ctx->pc = 0x2A8248u;
    SET_GPR_U32(ctx, 31, 0x2A8250u);
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x2A8248u, 0x2A8250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8250u;
label_2a8250:
    // 0x2a8250: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2a8250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2a8254:
    // 0x2a8254: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2a8254u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2a8258:
    // 0x2a8258: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2a8258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2a825c:
    // 0x2a825c: 0xa0f809  jalr        $a1
label_2a8260:
    if (ctx->pc == 0x2A8260u) {
        ctx->pc = 0x2A8260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A825Cu;
        // 0x2a8260: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8264u;
        goto label_2a8264;
    }
    ctx->pc = 0x2A825Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2A8264u);
        ctx->pc = 0x2A8260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A825Cu;
        // 0x2a8260: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A825Cu, 0x2A8264u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A8264u;
label_2a8264:
    // 0x2a8264: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x2a8264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_2a8268:
    // 0x2a8268: 0x5443005a  bnel        $v0, $v1, . + 4 + (0x5A << 2)
label_2a826c:
    if (ctx->pc == 0x2A826Cu) {
        ctx->pc = 0x2A826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8268u;
        // 0x2a826c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8270u;
        goto label_2a8270;
    }
    ctx->pc = 0x2A8268u;
    {
        const bool branch_taken_0x2a8268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a8268) {
            ctx->pc = 0x2A826Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A8268u;
            // 0x2a826c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A83D4u;
            goto label_2a83d4;
        }
    }
    ctx->pc = 0x2A8270u;
label_2a8270:
    // 0x2a8270: 0xc0e3d62  jal         func_38F588
label_2a8274:
    if (ctx->pc == 0x2A8274u) {
        ctx->pc = 0x2A8274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8270u;
        // 0x2a8274: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8278u;
        goto label_2a8278;
    }
    ctx->pc = 0x2A8270u;
    SET_GPR_U32(ctx, 31, 0x2A8278u);
    ctx->pc = 0x2A8274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8270u;
    // 0x2a8274: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F588u, 0x2A8270u, 0x2A8278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8278u;
label_2a8278:
    // 0x2a8278: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
label_2a827c:
    if (ctx->pc == 0x2A827Cu) {
        ctx->pc = 0x2A827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8278u;
        // 0x2a827c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8280u;
        goto label_2a8280;
    }
    ctx->pc = 0x2A8278u;
    {
        const bool branch_taken_0x2a8278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8278u;
        // 0x2a827c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8278) {
            ctx->pc = 0x2A83D0u;
            goto label_2a83d0;
        }
    }
    ctx->pc = 0x2A8280u;
label_2a8280:
    // 0x2a8280: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x2a8280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2a8284:
    // 0x2a8284: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2a8284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2a8288:
    // 0x2a8288: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x2a8288u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_2a828c:
    // 0x2a828c: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x2a828cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_2a8290:
    // 0x2a8290: 0x60f809  jalr        $v1
label_2a8294:
    if (ctx->pc == 0x2A8294u) {
        ctx->pc = 0x2A8294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8290u;
        // 0x2a8294: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8298u;
        goto label_2a8298;
    }
    ctx->pc = 0x2A8290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2A8298u);
        ctx->pc = 0x2A8294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8290u;
        // 0x2a8294: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8290u, 0x2A8298u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A8298u;
label_2a8298:
    // 0x2a8298: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2a8298u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a829c:
    // 0x2a829c: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x2a829cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2a82a0:
    // 0x2a82a0: 0xc10587a  jal         func_4161E8
label_2a82a4:
    if (ctx->pc == 0x2A82A4u) {
        ctx->pc = 0x2A82A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A82A0u;
        // 0x2a82a4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A82A8u;
        goto label_2a82a8;
    }
    ctx->pc = 0x2A82A0u;
    SET_GPR_U32(ctx, 31, 0x2A82A8u);
    ctx->pc = 0x2A82A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A82A0u;
    // 0x2a82a4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2A82A0u, 0x2A82A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A82A8u;
label_2a82a8:
    // 0x2a82a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a82a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a82ac:
    // 0x2a82ac: 0xc0cdb38  jal         func_336CE0
label_2a82b0:
    if (ctx->pc == 0x2A82B0u) {
        ctx->pc = 0x2A82B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A82ACu;
        // 0x2a82b0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A82B4u;
        goto label_2a82b4;
    }
    ctx->pc = 0x2A82ACu;
    SET_GPR_U32(ctx, 31, 0x2A82B4u);
    ctx->pc = 0x2A82B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A82ACu;
    // 0x2a82b0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2A82ACu, 0x2A82B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A82B4u;
label_2a82b4:
    // 0x2a82b4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2a82b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2a82b8:
    // 0x2a82b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a82b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2a82bc:
    // 0x2a82bc: 0x0  nop
    ctx->pc = 0x2a82bcu;
    // NOP
label_2a82c0:
    // 0x2a82c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2a82c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a82c4:
    // 0x2a82c4: 0x0  nop
    ctx->pc = 0x2a82c4u;
    // NOP
label_2a82c8:
    // 0x2a82c8: 0x45000042  bc1f        . + 4 + (0x42 << 2)
label_2a82cc:
    if (ctx->pc == 0x2A82CCu) {
        ctx->pc = 0x2A82CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A82C8u;
        // 0x2a82cc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A82D0u;
        goto label_2a82d0;
    }
    ctx->pc = 0x2A82C8u;
    {
        const bool branch_taken_0x2a82c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A82CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A82C8u;
        // 0x2a82cc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a82c8) {
            ctx->pc = 0x2A83D4u;
            goto label_2a83d4;
        }
    }
    ctx->pc = 0x2A82D0u;
label_2a82d0:
    // 0x2a82d0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2a82d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a82d4:
    // 0x2a82d4: 0xc0a36c8  jal         func_28DB20
label_2a82d8:
    if (ctx->pc == 0x2A82D8u) {
        ctx->pc = 0x2A82D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A82D4u;
        // 0x2a82d8: 0x8c930000  lw          $s3, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A82DCu;
        goto label_2a82dc;
    }
    ctx->pc = 0x2A82D4u;
    SET_GPR_U32(ctx, 31, 0x2A82DCu);
    ctx->pc = 0x2A82D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A82D4u;
    // 0x2a82d8: 0x8c930000  lw          $s3, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2A82D4u, 0x2A82DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A82DCu;
label_2a82dc:
    // 0x2a82dc: 0x26700090  addiu       $s0, $s3, 0x90
    ctx->pc = 0x2a82dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_2a82e0:
    // 0x2a82e0: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2a82e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2a82e4:
    // 0x2a82e4: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2a82e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2a82e8:
    // 0x2a82e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a82e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a82ec:
    // 0x2a82ec: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x2a82ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2a82f0:
    // 0x2a82f0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2a82f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2a82f4:
    // 0x2a82f4: 0x24544b00  addiu       $s4, $v0, 0x4B00
    ctx->pc = 0x2a82f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2a82f8:
    // 0x2a82f8: 0x8e470030  lw          $a3, 0x30($s2)
    ctx->pc = 0x2a82f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2a82fc:
    // 0x2a82fc: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2a82fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2a8300:
    // 0x2a8300: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2a8300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2a8304:
    // 0x2a8304: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2a8304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_2a8308:
    // 0x2a8308: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2a8308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2a830c:
    // 0x2a830c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2a830cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2a8310:
    // 0x2a8310: 0xc105df6  jal         func_4177D8
label_2a8314:
    if (ctx->pc == 0x2A8314u) {
        ctx->pc = 0x2A8314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8310u;
        // 0x2a8314: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8318u;
        goto label_2a8318;
    }
    ctx->pc = 0x2A8310u;
    SET_GPR_U32(ctx, 31, 0x2A8318u);
    ctx->pc = 0x2A8314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8310u;
    // 0x2a8314: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4177D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4177D8u, 0x2A8310u, 0x2A8318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8318u;
label_2a8318:
    // 0x2a8318: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a8318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a831c:
    // 0x2a831c: 0x1220002a  beqz        $s1, . + 4 + (0x2A << 2)
label_2a8320:
    if (ctx->pc == 0x2A8320u) {
        ctx->pc = 0x2A8320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A831Cu;
        // 0x2a8320: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8324u;
        goto label_2a8324;
    }
    ctx->pc = 0x2A831Cu;
    {
        const bool branch_taken_0x2a831c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A831Cu;
        // 0x2a8320: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a831c) {
            ctx->pc = 0x2A83C8u;
            goto label_2a83c8;
        }
    }
    ctx->pc = 0x2A8324u;
label_2a8324:
    // 0x2a8324: 0x86100002  lh          $s0, 0x2($s0)
    ctx->pc = 0x2a8324u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2a8328:
    // 0x2a8328: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2a8328u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2a832c:
    // 0x2a832c: 0xc10587a  jal         func_4161E8
label_2a8330:
    if (ctx->pc == 0x2A8330u) {
        ctx->pc = 0x2A8330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A832Cu;
        // 0x2a8330: 0x2148021  addu        $s0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8334u;
        goto label_2a8334;
    }
    ctx->pc = 0x2A832Cu;
    SET_GPR_U32(ctx, 31, 0x2A8334u);
    ctx->pc = 0x2A8330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A832Cu;
    // 0x2a8330: 0x2148021  addu        $s0, $s0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2A832Cu, 0x2A8334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8334u;
label_2a8334:
    // 0x2a8334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a8334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a8338:
    // 0x2a8338: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a8338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a833c:
    // 0x2a833c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a833cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8340:
    // 0x2a8340: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a8340u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8344:
    // 0x2a8344: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a8344u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8348:
    // 0x2a8348: 0xc09381e  jal         func_24E078
label_2a834c:
    if (ctx->pc == 0x2A834Cu) {
        ctx->pc = 0x2A834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8348u;
        // 0x2a834c: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8350u;
        goto label_2a8350;
    }
    ctx->pc = 0x2A8348u;
    SET_GPR_U32(ctx, 31, 0x2A8350u);
    ctx->pc = 0x2A834Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8348u;
    // 0x2a834c: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E078u, 0x2A8348u, 0x2A8350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8350u;
label_2a8350:
    // 0x2a8350: 0x1455001e  bne         $v0, $s5, . + 4 + (0x1E << 2)
label_2a8354:
    if (ctx->pc == 0x2A8354u) {
        ctx->pc = 0x2A8354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8350u;
        // 0x2a8354: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8358u;
        goto label_2a8358;
    }
    ctx->pc = 0x2A8350u;
    {
        const bool branch_taken_0x2a8350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x2A8354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8350u;
        // 0x2a8354: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8350) {
            ctx->pc = 0x2A83CCu;
            goto label_2a83cc;
        }
    }
    ctx->pc = 0x2A8358u;
label_2a8358:
    // 0x2a8358: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2a8358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a835c:
    // 0x2a835c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a835cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a8360:
    // 0x2a8360: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a8360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a8364:
    // 0x2a8364: 0x40f809  jalr        $v0
label_2a8368:
    if (ctx->pc == 0x2A8368u) {
        ctx->pc = 0x2A8368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8364u;
        // 0x2a8368: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A836Cu;
        goto label_2a836c;
    }
    ctx->pc = 0x2A8364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A836Cu);
        ctx->pc = 0x2A8368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8364u;
        // 0x2a8368: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8364u, 0x2A836Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A836Cu;
label_2a836c:
    // 0x2a836c: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x2a836cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2a8370:
    // 0x2a8370: 0xc10586e  jal         func_4161B8
label_2a8374:
    if (ctx->pc == 0x2A8374u) {
        ctx->pc = 0x2A8374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8370u;
        // 0x2a8374: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8378u;
        goto label_2a8378;
    }
    ctx->pc = 0x2A8370u;
    SET_GPR_U32(ctx, 31, 0x2A8378u);
    ctx->pc = 0x2A8374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8370u;
    // 0x2a8374: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161B8u, 0x2A8370u, 0x2A8378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8378u;
label_2a8378:
    // 0x2a8378: 0xae510030  sw          $s1, 0x30($s2)
    ctx->pc = 0x2a8378u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 17));
label_2a837c:
    // 0x2a837c: 0xc10587a  jal         func_4161E8
label_2a8380:
    if (ctx->pc == 0x2A8380u) {
        ctx->pc = 0x2A8380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A837Cu;
        // 0x2a8380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A8384u;
        goto label_2a8384;
    }
    ctx->pc = 0x2A837Cu;
    SET_GPR_U32(ctx, 31, 0x2A8384u);
    ctx->pc = 0x2A8380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A837Cu;
    // 0x2a8380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2A837Cu, 0x2A8384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8384u;
label_2a8384:
    // 0x2a8384: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2a8384u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2a8388:
    // 0x2a8388: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x2a8388u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_2a838c:
    // 0x2a838c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a838cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a8390:
    // 0x2a8390: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a8390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a8394:
    // 0x2a8394: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a8394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a8398:
    // 0x2a8398: 0xae42004c  sw          $v0, 0x4C($s2)
    ctx->pc = 0x2a8398u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 2));
label_2a839c:
    // 0x2a839c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a839cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a83a0:
    // 0x2a83a0: 0x7e430020  sq          $v1, 0x20($s2)
    ctx->pc = 0x2a83a0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 3));
label_2a83a4:
    // 0x2a83a4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2a83a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2a83a8:
    // 0x2a83a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a83a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a83ac:
    // 0x2a83ac: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a83acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a83b0:
    // 0x2a83b0: 0x8cc9bd30  lw          $t1, -0x42D0($a2)
    ctx->pc = 0x2a83b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294950192)));
label_2a83b4:
    // 0x2a83b4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2a83b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a83b8:
    // 0x2a83b8: 0xc088178  jal         func_2205E0
label_2a83bc:
    if (ctx->pc == 0x2A83BCu) {
        ctx->pc = 0x2A83BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A83B8u;
        // 0x2a83bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A83C0u;
        goto label_2a83c0;
    }
    ctx->pc = 0x2A83B8u;
    SET_GPR_U32(ctx, 31, 0x2A83C0u);
    ctx->pc = 0x2A83BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A83B8u;
    // 0x2a83bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2A83B8u, 0x2A83C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A83C0u;
label_2a83c0:
    // 0x2a83c0: 0x10000004  b           . + 4 + (0x4 << 2)
label_2a83c4:
    if (ctx->pc == 0x2A83C4u) {
        ctx->pc = 0x2A83C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A83C0u;
        // 0x2a83c4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A83C8u;
        goto label_2a83c8;
    }
    ctx->pc = 0x2A83C0u;
    {
        const bool branch_taken_0x2a83c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A83C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A83C0u;
        // 0x2a83c4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a83c0) {
            ctx->pc = 0x2A83D4u;
            goto label_2a83d4;
        }
    }
    ctx->pc = 0x2A83C8u;
label_2a83c8:
    // 0x2a83c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a83c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a83cc:
    // 0x2a83cc: 0xa2420051  sb          $v0, 0x51($s2)
    ctx->pc = 0x2a83ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 81), (uint8_t)GPR_U32(ctx, 2));
label_2a83d0:
    // 0x2a83d0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2a83d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2a83d4:
    // 0x2a83d4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2a83d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2a83d8:
    // 0x2a83d8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2a83d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2a83dc:
    // 0x2a83dc: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2a83dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2a83e0:
    // 0x2a83e0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2a83e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2a83e4:
    // 0x2a83e4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a83e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2a83e8:
    // 0x2a83e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a83e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2a83ec:
    // 0x2a83ec: 0x3e00008  jr          $ra
label_2a83f0:
    if (ctx->pc == 0x2A83F0u) {
        ctx->pc = 0x2A83F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A83ECu;
        // 0x2a83f0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A83F4u;
        goto label_2a83f4;
    }
    ctx->pc = 0x2A83ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A83F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A83ECu;
        // 0x2a83f0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A83ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A83F4u;
label_2a83f4:
    // 0x2a83f4: 0x0  nop
    ctx->pc = 0x2a83f4u;
    // NOP
    ctx->pc = 0x2a83f8u;
}
