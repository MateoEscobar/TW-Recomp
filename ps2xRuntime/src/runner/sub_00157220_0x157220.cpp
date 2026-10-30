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

// Function: sub_00157220
// Address: 0x157220 - 0x1573e8
void sub_00157220_0x157220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157220_0x157220");
#endif

    switch (ctx->pc) {
        case 0x157220u: goto label_157220;
        case 0x157224u: goto label_157224;
        case 0x157228u: goto label_157228;
        case 0x15722cu: goto label_15722c;
        case 0x157230u: goto label_157230;
        case 0x157234u: goto label_157234;
        case 0x157238u: goto label_157238;
        case 0x15723cu: goto label_15723c;
        case 0x157240u: goto label_157240;
        case 0x157244u: goto label_157244;
        case 0x157248u: goto label_157248;
        case 0x15724cu: goto label_15724c;
        case 0x157250u: goto label_157250;
        case 0x157254u: goto label_157254;
        case 0x157258u: goto label_157258;
        case 0x15725cu: goto label_15725c;
        case 0x157260u: goto label_157260;
        case 0x157264u: goto label_157264;
        case 0x157268u: goto label_157268;
        case 0x15726cu: goto label_15726c;
        case 0x157270u: goto label_157270;
        case 0x157274u: goto label_157274;
        case 0x157278u: goto label_157278;
        case 0x15727cu: goto label_15727c;
        case 0x157280u: goto label_157280;
        case 0x157284u: goto label_157284;
        case 0x157288u: goto label_157288;
        case 0x15728cu: goto label_15728c;
        case 0x157290u: goto label_157290;
        case 0x157294u: goto label_157294;
        case 0x157298u: goto label_157298;
        case 0x15729cu: goto label_15729c;
        case 0x1572a0u: goto label_1572a0;
        case 0x1572a4u: goto label_1572a4;
        case 0x1572a8u: goto label_1572a8;
        case 0x1572acu: goto label_1572ac;
        case 0x1572b0u: goto label_1572b0;
        case 0x1572b4u: goto label_1572b4;
        case 0x1572b8u: goto label_1572b8;
        case 0x1572bcu: goto label_1572bc;
        case 0x1572c0u: goto label_1572c0;
        case 0x1572c4u: goto label_1572c4;
        case 0x1572c8u: goto label_1572c8;
        case 0x1572ccu: goto label_1572cc;
        case 0x1572d0u: goto label_1572d0;
        case 0x1572d4u: goto label_1572d4;
        case 0x1572d8u: goto label_1572d8;
        case 0x1572dcu: goto label_1572dc;
        case 0x1572e0u: goto label_1572e0;
        case 0x1572e4u: goto label_1572e4;
        case 0x1572e8u: goto label_1572e8;
        case 0x1572ecu: goto label_1572ec;
        case 0x1572f0u: goto label_1572f0;
        case 0x1572f4u: goto label_1572f4;
        case 0x1572f8u: goto label_1572f8;
        case 0x1572fcu: goto label_1572fc;
        case 0x157300u: goto label_157300;
        case 0x157304u: goto label_157304;
        case 0x157308u: goto label_157308;
        case 0x15730cu: goto label_15730c;
        case 0x157310u: goto label_157310;
        case 0x157314u: goto label_157314;
        case 0x157318u: goto label_157318;
        case 0x15731cu: goto label_15731c;
        case 0x157320u: goto label_157320;
        case 0x157324u: goto label_157324;
        case 0x157328u: goto label_157328;
        case 0x15732cu: goto label_15732c;
        case 0x157330u: goto label_157330;
        case 0x157334u: goto label_157334;
        case 0x157338u: goto label_157338;
        case 0x15733cu: goto label_15733c;
        case 0x157340u: goto label_157340;
        case 0x157344u: goto label_157344;
        case 0x157348u: goto label_157348;
        case 0x15734cu: goto label_15734c;
        case 0x157350u: goto label_157350;
        case 0x157354u: goto label_157354;
        case 0x157358u: goto label_157358;
        case 0x15735cu: goto label_15735c;
        case 0x157360u: goto label_157360;
        case 0x157364u: goto label_157364;
        case 0x157368u: goto label_157368;
        case 0x15736cu: goto label_15736c;
        case 0x157370u: goto label_157370;
        case 0x157374u: goto label_157374;
        case 0x157378u: goto label_157378;
        case 0x15737cu: goto label_15737c;
        case 0x157380u: goto label_157380;
        case 0x157384u: goto label_157384;
        case 0x157388u: goto label_157388;
        case 0x15738cu: goto label_15738c;
        case 0x157390u: goto label_157390;
        case 0x157394u: goto label_157394;
        case 0x157398u: goto label_157398;
        case 0x15739cu: goto label_15739c;
        case 0x1573a0u: goto label_1573a0;
        case 0x1573a4u: goto label_1573a4;
        case 0x1573a8u: goto label_1573a8;
        case 0x1573acu: goto label_1573ac;
        case 0x1573b0u: goto label_1573b0;
        case 0x1573b4u: goto label_1573b4;
        case 0x1573b8u: goto label_1573b8;
        case 0x1573bcu: goto label_1573bc;
        case 0x1573c0u: goto label_1573c0;
        case 0x1573c4u: goto label_1573c4;
        case 0x1573c8u: goto label_1573c8;
        case 0x1573ccu: goto label_1573cc;
        case 0x1573d0u: goto label_1573d0;
        case 0x1573d4u: goto label_1573d4;
        case 0x1573d8u: goto label_1573d8;
        case 0x1573dcu: goto label_1573dc;
        case 0x1573e0u: goto label_1573e0;
        case 0x1573e4u: goto label_1573e4;
        default: break;
    }

    ctx->pc = 0x157220u;

label_157220:
    // 0x157220: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x157220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_157224:
    // 0x157224: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x157224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_157228:
    // 0x157228: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x157228u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_15722c:
    // 0x15722c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x15722cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_157230:
    // 0x157230: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x157230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_157234:
    // 0x157234: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x157234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_157238:
    // 0x157238: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x157238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_15723c:
    // 0x15723c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x15723cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_157240:
    // 0x157240: 0xc05587e  jal         func_1561F8
label_157244:
    if (ctx->pc == 0x157244u) {
        ctx->pc = 0x157244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157240u;
        // 0x157244: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157248u;
        goto label_157248;
    }
    ctx->pc = 0x157240u;
    SET_GPR_U32(ctx, 31, 0x157248u);
    ctx->pc = 0x157244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157240u;
    // 0x157244: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1561F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1561F8u, 0x157240u, 0x157248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157248u;
label_157248:
    // 0x157248: 0xc055888  jal         func_156220
label_15724c:
    if (ctx->pc == 0x15724Cu) {
        ctx->pc = 0x15724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157248u;
        // 0x15724c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157250u;
        goto label_157250;
    }
    ctx->pc = 0x157248u;
    SET_GPR_U32(ctx, 31, 0x157250u);
    ctx->pc = 0x15724Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157248u;
    // 0x15724c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156220u, 0x157248u, 0x157250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157250u;
label_157250:
    // 0x157250: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x157250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_157254:
    // 0x157254: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x157254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_157258:
    // 0x157258: 0x90640410  lbu         $a0, 0x410($v1)
    ctx->pc = 0x157258u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1040)));
label_15725c:
    // 0x15725c: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_157260:
    if (ctx->pc == 0x157260u) {
        ctx->pc = 0x157260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15725Cu;
        // 0x157260: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x157264u;
        goto label_157264;
    }
    ctx->pc = 0x15725Cu;
    {
        const bool branch_taken_0x15725c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x157260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15725Cu;
        // 0x157260: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15725c) {
            ctx->pc = 0x15727Cu;
            goto label_15727c;
        }
    }
    ctx->pc = 0x157264u;
label_157264:
    // 0x157264: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x157264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_157268:
    // 0x157268: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x157268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15726c:
    // 0x15726c: 0xc0e8c52  jal         func_3A3148
label_157270:
    if (ctx->pc == 0x157270u) {
        ctx->pc = 0x157270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15726Cu;
        // 0x157270: 0x8c442c7c  lw          $a0, 0x2C7C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157274u;
        goto label_157274;
    }
    ctx->pc = 0x15726Cu;
    SET_GPR_U32(ctx, 31, 0x157274u);
    ctx->pc = 0x157270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15726Cu;
    // 0x157270: 0x8c442c7c  lw          $a0, 0x2C7C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3148u, 0x15726Cu, 0x157274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157274u;
label_157274:
    // 0x157274: 0x10000004  b           . + 4 + (0x4 << 2)
label_157278:
    if (ctx->pc == 0x157278u) {
        ctx->pc = 0x157278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157274u;
        // 0x157278: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15727Cu;
        goto label_15727c;
    }
    ctx->pc = 0x157274u;
    {
        const bool branch_taken_0x157274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157274u;
        // 0x157278: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157274) {
            ctx->pc = 0x157288u;
            goto label_157288;
        }
    }
    ctx->pc = 0x15727Cu;
label_15727c:
    // 0x15727c: 0xc05152a  jal         func_1454A8
label_157280:
    if (ctx->pc == 0x157280u) {
        ctx->pc = 0x157284u;
        goto label_157284;
    }
    ctx->pc = 0x15727Cu;
    SET_GPR_U32(ctx, 31, 0x157284u);
    ctx->pc = 0x1454A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1454A8u, 0x15727Cu, 0x157284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157284u;
label_157284:
    // 0x157284: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x157284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_157288:
    // 0x157288: 0xc0558b2  jal         func_1562C8
label_15728c:
    if (ctx->pc == 0x15728Cu) {
        ctx->pc = 0x15728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157288u;
        // 0x15728c: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157290u;
        goto label_157290;
    }
    ctx->pc = 0x157288u;
    SET_GPR_U32(ctx, 31, 0x157290u);
    ctx->pc = 0x15728Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157288u;
    // 0x15728c: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1562C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1562C8u, 0x157288u, 0x157290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157290u;
label_157290:
    // 0x157290: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x157290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_157294:
    // 0x157294: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x157294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_157298:
    // 0x157298: 0x8c43536c  lw          $v1, 0x536C($v0)
    ctx->pc = 0x157298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21356)));
label_15729c:
    // 0x15729c: 0x5464000f  bnel        $v1, $a0, . + 4 + (0xF << 2)
label_1572a0:
    if (ctx->pc == 0x1572A0u) {
        ctx->pc = 0x1572A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15729Cu;
        // 0x1572a0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1572A4u;
        goto label_1572a4;
    }
    ctx->pc = 0x15729Cu;
    {
        const bool branch_taken_0x15729c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x15729c) {
            ctx->pc = 0x1572A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15729Cu;
            // 0x1572a0: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1572DCu;
            goto label_1572dc;
        }
    }
    ctx->pc = 0x1572A4u;
label_1572a4:
    // 0x1572a4: 0x8e8247c4  lw          $v0, 0x47C4($s4)
    ctx->pc = 0x1572a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18372)));
label_1572a8:
    // 0x1572a8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1572a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1572ac:
    // 0x1572ac: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x1572acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_1572b0:
    // 0x1572b0: 0xc0d4456  jal         func_351158
label_1572b4:
    if (ctx->pc == 0x1572B4u) {
        ctx->pc = 0x1572B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1572B0u;
        // 0x1572b4: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1572B8u;
        goto label_1572b8;
    }
    ctx->pc = 0x1572B0u;
    SET_GPR_U32(ctx, 31, 0x1572B8u);
    ctx->pc = 0x1572B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1572B0u;
    // 0x1572b4: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351158u, 0x1572B0u, 0x1572B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1572B8u;
label_1572b8:
    // 0x1572b8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x1572b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_1572bc:
    // 0x1572bc: 0xc0e8c6a  jal         func_3A31A8
label_1572c0:
    if (ctx->pc == 0x1572C0u) {
        ctx->pc = 0x1572C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1572BCu;
        // 0x1572c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1572C4u;
        goto label_1572c4;
    }
    ctx->pc = 0x1572BCu;
    SET_GPR_U32(ctx, 31, 0x1572C4u);
    ctx->pc = 0x1572C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1572BCu;
    // 0x1572c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A31A8u, 0x1572BCu, 0x1572C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1572C4u;
label_1572c4:
    // 0x1572c4: 0xc0926e6  jal         func_249B98
label_1572c8:
    if (ctx->pc == 0x1572C8u) {
        ctx->pc = 0x1572CCu;
        goto label_1572cc;
    }
    ctx->pc = 0x1572C4u;
    SET_GPR_U32(ctx, 31, 0x1572CCu);
    ctx->pc = 0x249B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249B98u, 0x1572C4u, 0x1572CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1572CCu;
label_1572cc:
    // 0x1572cc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x1572ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_1572d0:
    // 0x1572d0: 0xc0e8c6a  jal         func_3A31A8
label_1572d4:
    if (ctx->pc == 0x1572D4u) {
        ctx->pc = 0x1572D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1572D0u;
        // 0x1572d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1572D8u;
        goto label_1572d8;
    }
    ctx->pc = 0x1572D0u;
    SET_GPR_U32(ctx, 31, 0x1572D8u);
    ctx->pc = 0x1572D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1572D0u;
    // 0x1572d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A31A8u, 0x1572D0u, 0x1572D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1572D8u;
label_1572d8:
    // 0x1572d8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1572d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1572dc:
    // 0x1572dc: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1572dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_1572e0:
    // 0x1572e0: 0x8e04cd4c  lw          $a0, -0x32B4($s0)
    ctx->pc = 0x1572e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
label_1572e4:
    // 0x1572e4: 0xc062a60  jal         func_18A980
label_1572e8:
    if (ctx->pc == 0x1572E8u) {
        ctx->pc = 0x1572E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1572E4u;
        // 0x1572e8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1572ECu;
        goto label_1572ec;
    }
    ctx->pc = 0x1572E4u;
    SET_GPR_U32(ctx, 31, 0x1572ECu);
    ctx->pc = 0x1572E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1572E4u;
    // 0x1572e8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A980u, 0x1572E4u, 0x1572ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1572ECu;
label_1572ec:
    // 0x1572ec: 0x8e25cdb4  lw          $a1, -0x324C($s1)
    ctx->pc = 0x1572ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954420)));
label_1572f0:
    // 0x1572f0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1572f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1572f4:
    // 0x1572f4: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1572f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1572f8:
    // 0x1572f8: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1572f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1572fc:
    // 0x1572fc: 0x60f809  jalr        $v1
label_157300:
    if (ctx->pc == 0x157300u) {
        ctx->pc = 0x157300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1572FCu;
        // 0x157300: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157304u;
        goto label_157304;
    }
    ctx->pc = 0x1572FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x157304u);
        ctx->pc = 0x157300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1572FCu;
        // 0x157300: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1572FCu, 0x157304u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x157304u;
label_157304:
    // 0x157304: 0xc103e28  jal         func_40F8A0
label_157308:
    if (ctx->pc == 0x157308u) {
        ctx->pc = 0x157308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157304u;
        // 0x157308: 0x8e8447c4  lw          $a0, 0x47C4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15730Cu;
        goto label_15730c;
    }
    ctx->pc = 0x157304u;
    SET_GPR_U32(ctx, 31, 0x15730Cu);
    ctx->pc = 0x157308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157304u;
    // 0x157308: 0x8e8447c4  lw          $a0, 0x47C4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18372)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F8A0u, 0x157304u, 0x15730Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15730Cu;
label_15730c:
    // 0x15730c: 0xc06181a  jal         func_186068
label_157310:
    if (ctx->pc == 0x157310u) {
        ctx->pc = 0x157310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15730Cu;
        // 0x157310: 0x8e04cd4c  lw          $a0, -0x32B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157314u;
        goto label_157314;
    }
    ctx->pc = 0x15730Cu;
    SET_GPR_U32(ctx, 31, 0x157314u);
    ctx->pc = 0x157310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15730Cu;
    // 0x157310: 0x8e04cd4c  lw          $a0, -0x32B4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186068u, 0x15730Cu, 0x157314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157314u;
label_157314:
    // 0x157314: 0xc055902  jal         func_156408
label_157318:
    if (ctx->pc == 0x157318u) {
        ctx->pc = 0x157318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157314u;
        // 0x157318: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15731Cu;
        goto label_15731c;
    }
    ctx->pc = 0x157314u;
    SET_GPR_U32(ctx, 31, 0x15731Cu);
    ctx->pc = 0x157318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157314u;
    // 0x157318: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156408u, 0x157314u, 0x15731Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15731Cu;
label_15731c:
    // 0x15731c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15731cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_157320:
    // 0x157320: 0xc055996  jal         func_156658
label_157324:
    if (ctx->pc == 0x157324u) {
        ctx->pc = 0x157324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157320u;
        // 0x157324: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157328u;
        goto label_157328;
    }
    ctx->pc = 0x157320u;
    SET_GPR_U32(ctx, 31, 0x157328u);
    ctx->pc = 0x157324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157320u;
    // 0x157324: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156658u, 0x157320u, 0x157328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157328u;
label_157328:
    // 0x157328: 0xc055f08  jal         func_157C20
label_15732c:
    if (ctx->pc == 0x15732Cu) {
        ctx->pc = 0x15732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157328u;
        // 0x15732c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157330u;
        goto label_157330;
    }
    ctx->pc = 0x157328u;
    SET_GPR_U32(ctx, 31, 0x157330u);
    ctx->pc = 0x15732Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157328u;
    // 0x15732c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C20u, 0x157328u, 0x157330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157330u;
label_157330:
    // 0x157330: 0xc061748  jal         func_185D20
label_157334:
    if (ctx->pc == 0x157334u) {
        ctx->pc = 0x157334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157330u;
        // 0x157334: 0x8e04cd4c  lw          $a0, -0x32B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157338u;
        goto label_157338;
    }
    ctx->pc = 0x157330u;
    SET_GPR_U32(ctx, 31, 0x157338u);
    ctx->pc = 0x157334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157330u;
    // 0x157334: 0x8e04cd4c  lw          $a0, -0x32B4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185D20u, 0x157330u, 0x157338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157338u;
label_157338:
    // 0x157338: 0x8e25cdb4  lw          $a1, -0x324C($s1)
    ctx->pc = 0x157338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954420)));
label_15733c:
    // 0x15733c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x15733cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_157340:
    // 0x157340: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x157340u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_157344:
    // 0x157344: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x157344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_157348:
    // 0x157348: 0x60f809  jalr        $v1
label_15734c:
    if (ctx->pc == 0x15734Cu) {
        ctx->pc = 0x15734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157348u;
        // 0x15734c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157350u;
        goto label_157350;
    }
    ctx->pc = 0x157348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x157350u);
        ctx->pc = 0x15734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157348u;
        // 0x15734c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157348u, 0x157350u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x157350u;
label_157350:
    // 0x157350: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x157350u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_157354:
    // 0x157354: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x157354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_157358:
    // 0x157358: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x157358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15735c:
    // 0x15735c: 0xc047e6c  jal         func_11F9B0
label_157360:
    if (ctx->pc == 0x157360u) {
        ctx->pc = 0x157360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15735Cu;
        // 0x157360: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157364u;
        goto label_157364;
    }
    ctx->pc = 0x15735Cu;
    SET_GPR_U32(ctx, 31, 0x157364u);
    ctx->pc = 0x157360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15735Cu;
    // 0x157360: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x15735Cu, 0x157364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157364u;
label_157364:
    // 0x157364: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x157364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_157368:
    // 0x157368: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x157368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15736c:
    // 0x15736c: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x15736cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_157370:
    // 0x157370: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x157370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_157374:
    // 0x157374: 0xc0f809  jalr        $a2
label_157378:
    if (ctx->pc == 0x157378u) {
        ctx->pc = 0x157378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157374u;
        // 0x157378: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15737Cu;
        goto label_15737c;
    }
    ctx->pc = 0x157374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x15737Cu);
        ctx->pc = 0x157378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157374u;
        // 0x157378: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157374u, 0x15737Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15737Cu;
label_15737c:
    // 0x15737c: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x15737cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_157380:
    // 0x157380: 0x2e640002  sltiu       $a0, $s3, 0x2
    ctx->pc = 0x157380u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_157384:
    // 0x157384: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x157384u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
label_157388:
    // 0x157388: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x157388u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15738c:
    // 0x15738c: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x15738cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_157390:
    // 0x157390: 0x1480fff1  bnez        $a0, . + 4 + (-0xF << 2)
label_157394:
    if (ctx->pc == 0x157394u) {
        ctx->pc = 0x157394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157390u;
        // 0x157394: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157398u;
        goto label_157398;
    }
    ctx->pc = 0x157390u;
    {
        const bool branch_taken_0x157390 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x157394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157390u;
        // 0x157394: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157390) {
            ctx->pc = 0x157358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157358;
        }
    }
    ctx->pc = 0x157398u;
label_157398:
    // 0x157398: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x157398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15739c:
    // 0x15739c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15739cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1573a0:
    // 0x1573a0: 0xc043e04  jal         func_10F810
label_1573a4:
    if (ctx->pc == 0x1573A4u) {
        ctx->pc = 0x1573A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1573A0u;
        // 0x1573a4: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1573A8u;
        goto label_1573a8;
    }
    ctx->pc = 0x1573A0u;
    SET_GPR_U32(ctx, 31, 0x1573A8u);
    ctx->pc = 0x1573A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1573A0u;
    // 0x1573a4: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F810u, 0x1573A0u, 0x1573A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1573A8u;
label_1573a8:
    // 0x1573a8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1573a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_1573ac:
    // 0x1573ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1573acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1573b0:
    // 0x1573b0: 0xc0552b8  jal         func_154AE0
label_1573b4:
    if (ctx->pc == 0x1573B4u) {
        ctx->pc = 0x1573B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1573B0u;
        // 0x1573b4: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1573B8u;
        goto label_1573b8;
    }
    ctx->pc = 0x1573B0u;
    SET_GPR_U32(ctx, 31, 0x1573B8u);
    ctx->pc = 0x1573B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1573B0u;
    // 0x1573b4: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x1573B0u, 0x1573B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1573B8u;
label_1573b8:
    // 0x1573b8: 0xc055880  jal         func_156200
label_1573bc:
    if (ctx->pc == 0x1573BCu) {
        ctx->pc = 0x1573BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1573B8u;
        // 0x1573bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1573C0u;
        goto label_1573c0;
    }
    ctx->pc = 0x1573B8u;
    SET_GPR_U32(ctx, 31, 0x1573C0u);
    ctx->pc = 0x1573BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1573B8u;
    // 0x1573bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156200u, 0x1573B8u, 0x1573C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1573C0u;
label_1573c0:
    // 0x1573c0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1573c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1573c4:
    // 0x1573c4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1573c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1573c8:
    // 0x1573c8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1573c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1573cc:
    // 0x1573cc: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1573ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1573d0:
    // 0x1573d0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1573d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1573d4:
    // 0x1573d4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1573d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1573d8:
    // 0x1573d8: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1573d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1573dc:
    // 0x1573dc: 0x3e00008  jr          $ra
label_1573e0:
    if (ctx->pc == 0x1573E0u) {
        ctx->pc = 0x1573E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1573DCu;
        // 0x1573e0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1573E4u;
        goto label_1573e4;
    }
    ctx->pc = 0x1573DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1573E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1573DCu;
        // 0x1573e0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1573DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1573E4u;
label_1573e4:
    // 0x1573e4: 0x0  nop
    ctx->pc = 0x1573e4u;
    // NOP
    ctx->pc = 0x1573e8u;
}
