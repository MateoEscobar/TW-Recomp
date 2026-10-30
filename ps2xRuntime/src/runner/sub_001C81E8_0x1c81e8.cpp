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

// Function: sub_001C81E8
// Address: 0x1c81e8 - 0x1c82e8
void sub_001C81E8_0x1c81e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C81E8_0x1c81e8");
#endif

    switch (ctx->pc) {
        case 0x1c81e8u: goto label_1c81e8;
        case 0x1c81ecu: goto label_1c81ec;
        case 0x1c81f0u: goto label_1c81f0;
        case 0x1c81f4u: goto label_1c81f4;
        case 0x1c81f8u: goto label_1c81f8;
        case 0x1c81fcu: goto label_1c81fc;
        case 0x1c8200u: goto label_1c8200;
        case 0x1c8204u: goto label_1c8204;
        case 0x1c8208u: goto label_1c8208;
        case 0x1c820cu: goto label_1c820c;
        case 0x1c8210u: goto label_1c8210;
        case 0x1c8214u: goto label_1c8214;
        case 0x1c8218u: goto label_1c8218;
        case 0x1c821cu: goto label_1c821c;
        case 0x1c8220u: goto label_1c8220;
        case 0x1c8224u: goto label_1c8224;
        case 0x1c8228u: goto label_1c8228;
        case 0x1c822cu: goto label_1c822c;
        case 0x1c8230u: goto label_1c8230;
        case 0x1c8234u: goto label_1c8234;
        case 0x1c8238u: goto label_1c8238;
        case 0x1c823cu: goto label_1c823c;
        case 0x1c8240u: goto label_1c8240;
        case 0x1c8244u: goto label_1c8244;
        case 0x1c8248u: goto label_1c8248;
        case 0x1c824cu: goto label_1c824c;
        case 0x1c8250u: goto label_1c8250;
        case 0x1c8254u: goto label_1c8254;
        case 0x1c8258u: goto label_1c8258;
        case 0x1c825cu: goto label_1c825c;
        case 0x1c8260u: goto label_1c8260;
        case 0x1c8264u: goto label_1c8264;
        case 0x1c8268u: goto label_1c8268;
        case 0x1c826cu: goto label_1c826c;
        case 0x1c8270u: goto label_1c8270;
        case 0x1c8274u: goto label_1c8274;
        case 0x1c8278u: goto label_1c8278;
        case 0x1c827cu: goto label_1c827c;
        case 0x1c8280u: goto label_1c8280;
        case 0x1c8284u: goto label_1c8284;
        case 0x1c8288u: goto label_1c8288;
        case 0x1c828cu: goto label_1c828c;
        case 0x1c8290u: goto label_1c8290;
        case 0x1c8294u: goto label_1c8294;
        case 0x1c8298u: goto label_1c8298;
        case 0x1c829cu: goto label_1c829c;
        case 0x1c82a0u: goto label_1c82a0;
        case 0x1c82a4u: goto label_1c82a4;
        case 0x1c82a8u: goto label_1c82a8;
        case 0x1c82acu: goto label_1c82ac;
        case 0x1c82b0u: goto label_1c82b0;
        case 0x1c82b4u: goto label_1c82b4;
        case 0x1c82b8u: goto label_1c82b8;
        case 0x1c82bcu: goto label_1c82bc;
        case 0x1c82c0u: goto label_1c82c0;
        case 0x1c82c4u: goto label_1c82c4;
        case 0x1c82c8u: goto label_1c82c8;
        case 0x1c82ccu: goto label_1c82cc;
        case 0x1c82d0u: goto label_1c82d0;
        case 0x1c82d4u: goto label_1c82d4;
        case 0x1c82d8u: goto label_1c82d8;
        case 0x1c82dcu: goto label_1c82dc;
        case 0x1c82e0u: goto label_1c82e0;
        case 0x1c82e4u: goto label_1c82e4;
        default: break;
    }

    ctx->pc = 0x1c81e8u;

label_1c81e8:
    // 0x1c81e8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1c81e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1c81ec:
    // 0x1c81ec: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1c81ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_1c81f0:
    // 0x1c81f0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1c81f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_1c81f4:
    // 0x1c81f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c81f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c81f8:
    // 0x1c81f8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1c81f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_1c81fc:
    // 0x1c81fc: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1c81fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1c8200:
    // 0x1c8200: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1c8200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_1c8204:
    // 0x1c8204: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1c8204u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c8208:
    // 0x1c8208: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1c8208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1c820c:
    // 0x1c820c: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x1c820cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1c8210:
    // 0x1c8210: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1c8210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1c8214:
    // 0x1c8214: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1c8214u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c8218:
    // 0x1c8218: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c8218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1c821c:
    // 0x1c821c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1c821cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c8220:
    // 0x1c8220: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c8220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c8224:
    // 0x1c8224: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1c8224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1c8228:
    // 0x1c8228: 0x1000000d  b           . + 4 + (0xD << 2)
label_1c822c:
    if (ctx->pc == 0x1C822Cu) {
        ctx->pc = 0x1C822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8228u;
        // 0x1c822c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8230u;
        goto label_1c8230;
    }
    ctx->pc = 0x1C8228u;
    {
        const bool branch_taken_0x1c8228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8228u;
        // 0x1c822c: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8228) {
            ctx->pc = 0x1C8260u;
            goto label_1c8260;
        }
    }
    ctx->pc = 0x1C8230u;
label_1c8230:
    // 0x1c8230: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c8230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1c8234:
    // 0x1c8234: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x1c8234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1c8238:
    // 0x1c8238: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x1c8238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_1c823c:
    // 0x1c823c: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x1c823cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_1c8240:
    // 0x1c8240: 0x8c650024  lw          $a1, 0x24($v1)
    ctx->pc = 0x1c8240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1c8244:
    // 0x1c8244: 0xa0f809  jalr        $a1
label_1c8248:
    if (ctx->pc == 0x1C8248u) {
        ctx->pc = 0x1C8248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8244u;
        // 0x1c8248: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C824Cu;
        goto label_1c824c;
    }
    ctx->pc = 0x1C8244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1C824Cu);
        ctx->pc = 0x1C8248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8244u;
        // 0x1c8248: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8244u, 0x1C824Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C824Cu;
label_1c824c:
    // 0x1c824c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c824cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1c8250:
    // 0x1c8250: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c8250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c8254:
    // 0x1c8254: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1c8254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1c8258:
    // 0x1c8258: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c8258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c825c:
    // 0x1c825c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1c825cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1c8260:
    // 0x1c8260: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1c8260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1c8264:
    // 0x1c8264: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1c8264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1c8268:
    // 0x1c8268: 0x1462fff1  bne         $v1, $v0, . + 4 + (-0xF << 2)
label_1c826c:
    if (ctx->pc == 0x1C826Cu) {
        ctx->pc = 0x1C826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8268u;
        // 0x1c826c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8270u;
        goto label_1c8270;
    }
    ctx->pc = 0x1C8268u;
    {
        const bool branch_taken_0x1c8268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8268u;
        // 0x1c826c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8268) {
            ctx->pc = 0x1C8230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8230;
        }
    }
    ctx->pc = 0x1C8270u;
label_1c8270:
    // 0x1c8270: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1c8270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1c8274:
    // 0x1c8274: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c8274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c8278:
    // 0x1c8278: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1c8278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1c827c:
    // 0x1c827c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c827cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c8280:
    // 0x1c8280: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1c8280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c8284:
    // 0x1c8284: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c8284u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c8288:
    // 0x1c8288: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x1c8288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_1c828c:
    // 0x1c828c: 0xc139c7e  jal         func_4E71F8
label_1c8290:
    if (ctx->pc == 0x1C8290u) {
        ctx->pc = 0x1C8290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C828Cu;
        // 0x1c8290: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C8294u;
        goto label_1c8294;
    }
    ctx->pc = 0x1C828Cu;
    SET_GPR_U32(ctx, 31, 0x1C8294u);
    ctx->pc = 0x1C8290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C828Cu;
    // 0x1c8290: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E71F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E71F8u, 0x1C828Cu, 0x1C8294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8294u;
label_1c8294:
    // 0x1c8294: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c8294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c8298:
    // 0x1c8298: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c8298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c829c:
    // 0x1c829c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1c829cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1c82a0:
    // 0x1c82a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c82a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c82a4:
    // 0x1c82a4: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1c82a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1c82a8:
    // 0x1c82a8: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x1c82a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1c82ac:
    // 0x1c82ac: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x1c82acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_1c82b0:
    // 0x1c82b0: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1c82b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_1c82b4:
    // 0x1c82b4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1c82b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1c82b8:
    // 0x1c82b8: 0x60f809  jalr        $v1
label_1c82bc:
    if (ctx->pc == 0x1C82BCu) {
        ctx->pc = 0x1C82BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82B8u;
        // 0x1c82bc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C82C0u;
        goto label_1c82c0;
    }
    ctx->pc = 0x1C82B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C82C0u);
        ctx->pc = 0x1C82BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82B8u;
        // 0x1c82bc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C82B8u, 0x1C82C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C82C0u;
label_1c82c0:
    // 0x1c82c0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1c82c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1c82c4:
    // 0x1c82c4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1c82c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1c82c8:
    // 0x1c82c8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1c82c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1c82cc:
    // 0x1c82cc: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1c82ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1c82d0:
    // 0x1c82d0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1c82d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c82d4:
    // 0x1c82d4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1c82d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c82d8:
    // 0x1c82d8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c82d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1c82dc:
    // 0x1c82dc: 0x3e00008  jr          $ra
label_1c82e0:
    if (ctx->pc == 0x1C82E0u) {
        ctx->pc = 0x1C82E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82DCu;
        // 0x1c82e0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C82E4u;
        goto label_1c82e4;
    }
    ctx->pc = 0x1C82DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C82E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82DCu;
        // 0x1c82e0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C82DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C82E4u;
label_1c82e4:
    // 0x1c82e4: 0x0  nop
    ctx->pc = 0x1c82e4u;
    // NOP
    ctx->pc = 0x1c82e8u;
}
