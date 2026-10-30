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

// Function: sub_001EF150
// Address: 0x1ef150 - 0x1ef3f8
void sub_001EF150_0x1ef150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF150_0x1ef150");
#endif

    switch (ctx->pc) {
        case 0x1ef1b0u: goto label_1ef1b0;
        case 0x1ef1b8u: goto label_1ef1b8;
        case 0x1ef1c8u: goto label_1ef1c8;
        case 0x1ef1d0u: goto label_1ef1d0;
        case 0x1ef1d8u: goto label_1ef1d8;
        case 0x1ef1e4u: goto label_1ef1e4;
        case 0x1ef214u: goto label_1ef214;
        case 0x1ef2a0u: goto label_1ef2a0;
        case 0x1ef2b8u: goto label_1ef2b8;
        case 0x1ef328u: goto label_1ef328;
        case 0x1ef334u: goto label_1ef334;
        case 0x1ef344u: goto label_1ef344;
        case 0x1ef358u: goto label_1ef358;
        case 0x1ef360u: goto label_1ef360;
        case 0x1ef370u: goto label_1ef370;
        case 0x1ef380u: goto label_1ef380;
        case 0x1ef388u: goto label_1ef388;
        case 0x1ef3b4u: goto label_1ef3b4;
        default: break;
    }

    ctx->pc = 0x1ef150u;

    // 0x1ef150: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1ef150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1ef154: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1ef154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x1ef158: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1ef158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x1ef15c: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1ef15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x1ef160: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1ef160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x1ef164: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ef164u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef168: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x1ef168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x1ef16c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1ef16cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef170: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x1ef170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x1ef174: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1ef174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x1ef178: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1ef178u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef17c: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1ef17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x1ef180: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1ef180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1ef184: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ef184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ef188: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x1ef188u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1ef18c: 0x8e8201dc  lw          $v0, 0x1DC($s4)
    ctx->pc = 0x1ef18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 476)));
    // 0x1ef190: 0x3c29018  mult        $s2, $fp, $v0
    ctx->pc = 0x1ef190u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x1ef194: 0x242b821  addu        $s7, $s2, $v0
    ctx->pc = 0x1ef194u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1ef198: 0x257102b  sltu        $v0, $s2, $s7
    ctx->pc = 0x1ef198u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x1ef19c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1EF19Cu;
    {
        const bool branch_taken_0x1ef19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF19Cu;
        // 0x1ef1a0: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef19c) {
            ctx->pc = 0x1EF1F4u;
            goto label_1ef1f4;
        }
    }
    ctx->pc = 0x1EF1A4u;
    // 0x1ef1a4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1ef1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1ef1a8: 0x24420094  addiu       $v0, $v0, 0x94
    ctx->pc = 0x1ef1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x1ef1ac: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x1ef1acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1ef1b0:
    // 0x1ef1b0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x1EF1B0u;
    SET_GPR_U32(ctx, 31, 0x1EF1B8u);
    ctx->pc = 0x1EF1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF1B0u;
    // 0x1ef1b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1EF1B0u, 0x1EF1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF1B8u;
label_1ef1b8:
    // 0x1ef1b8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1EF1B8u;
    {
        const bool branch_taken_0x1ef1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef1b8) {
            ctx->pc = 0x1EF1BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF1B8u;
            // 0x1ef1bc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF1E8u;
            goto label_1ef1e8;
        }
    }
    ctx->pc = 0x1EF1C0u;
    // 0x1ef1c0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1EF1C0u;
    SET_GPR_U32(ctx, 31, 0x1EF1C8u);
    ctx->pc = 0x1EF1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF1C0u;
    // 0x1ef1c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1EF1C0u, 0x1EF1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF1C8u;
label_1ef1c8:
    // 0x1ef1c8: 0xc089c70  jal         func_2271C0
    ctx->pc = 0x1EF1C8u;
    SET_GPR_U32(ctx, 31, 0x1EF1D0u);
    ctx->pc = 0x1EF1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF1C8u;
    // 0x1ef1cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2271C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2271C0u, 0x1EF1C8u, 0x1EF1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF1D0u;
label_1ef1d0:
    // 0x1ef1d0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1EF1D0u;
    SET_GPR_U32(ctx, 31, 0x1EF1D8u);
    ctx->pc = 0x1EF1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF1D0u;
    // 0x1ef1d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1EF1D0u, 0x1EF1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF1D8u;
label_1ef1d8:
    // 0x1ef1d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ef1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef1dc: 0xc0871f2  jal         func_21C7C8
    ctx->pc = 0x1EF1DCu;
    SET_GPR_U32(ctx, 31, 0x1EF1E4u);
    ctx->pc = 0x1EF1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF1DCu;
    // 0x1ef1e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C7C8u, 0x1EF1DCu, 0x1EF1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF1E4u;
label_1ef1e4:
    // 0x1ef1e4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ef1e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1ef1e8:
    // 0x1ef1e8: 0x237102b  sltu        $v0, $s1, $s7
    ctx->pc = 0x1ef1e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x1ef1ec: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1EF1ECu;
    {
        const bool branch_taken_0x1ef1ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF1ECu;
        // 0x1ef1f0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef1ec) {
            ctx->pc = 0x1EF1B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef1b0;
        }
    }
    ctx->pc = 0x1EF1F4u;
label_1ef1f4:
    // 0x1ef1f4: 0x1e1840  sll         $v1, $fp, 1
    ctx->pc = 0x1ef1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
    // 0x1ef1f8: 0x26820134  addiu       $v0, $s4, 0x134
    ctx->pc = 0x1ef1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 308));
    // 0x1ef1fc: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x1ef1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x1ef200: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ef200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef204: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x1ef204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x1ef208: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ef208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ef20c: 0xc05a916  jal         func_16A458
    ctx->pc = 0x1EF20Cu;
    SET_GPR_U32(ctx, 31, 0x1EF214u);
    ctx->pc = 0x1EF210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF20Cu;
    // 0x1ef210: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A458u, 0x1EF20Cu, 0x1EF214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF214u;
label_1ef214:
    // 0x1ef214: 0x5c40006c  bgtzl       $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x1EF214u;
    {
        const bool branch_taken_0x1ef214 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1ef214) {
            ctx->pc = 0x1EF218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF214u;
            // 0x1ef218: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF3C8u;
            goto label_1ef3c8;
        }
    }
    ctx->pc = 0x1EF21Cu;
    // 0x1ef21c: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x1ef21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x1ef220: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x1ef220u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef224: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x1ef224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x1ef228: 0x26830170  addiu       $v1, $s4, 0x170
    ctx->pc = 0x1ef228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 368));
    // 0x1ef22c: 0x277102b  sltu        $v0, $s3, $s7
    ctx->pc = 0x1ef22cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x1ef230: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x1EF230u;
    {
        const bool branch_taken_0x1ef230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF230u;
        // 0x1ef234: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef230) {
            ctx->pc = 0x1EF3A8u;
            goto label_1ef3a8;
        }
    }
    ctx->pc = 0x1EF238u;
    // 0x1ef238: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1ef238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ef23c: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1ef23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1ef240: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x1ef240u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ef244: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x1ef244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1ef248: 0x3c20018  mult        $zero, $fp, $v0
    ctx->pc = 0x1ef248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1ef24c: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x1ef24cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1ef250: 0x26820140  addiu       $v0, $s4, 0x140
    ctx->pc = 0x1ef250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
    // 0x1ef254: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x1ef254u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x1ef258: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ef258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ef25c: 0xafb50024  sw          $s5, 0x24($sp)
    ctx->pc = 0x1ef25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 21));
    // 0x1ef260: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1ef260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x1ef264: 0x26850148  addiu       $a1, $s4, 0x148
    ctx->pc = 0x1ef264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 328));
    // 0x1ef268: 0x2012  mflo        $a0
    ctx->pc = 0x1ef268u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1ef26c: 0x246200c4  addiu       $v0, $v1, 0xC4
    ctx->pc = 0x1ef26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 196));
    // 0x1ef270: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1ef270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1ef274: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1ef274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1ef278: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x1ef278u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1ef27c: 0x246300bc  addiu       $v1, $v1, 0xBC
    ctx->pc = 0x1ef27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 188));
    // 0x1ef280: 0x24840094  addiu       $a0, $a0, 0x94
    ctx->pc = 0x1ef280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 148));
    // 0x1ef284: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ef284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ef288: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ef288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ef28c: 0xafa5002c  sw          $a1, 0x2C($sp)
    ctx->pc = 0x1ef28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 5));
    // 0x1ef290: 0x948821  addu        $s1, $a0, $s4
    ctx->pc = 0x1ef290u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x1ef294: 0x74a821  addu        $s5, $v1, $s4
    ctx->pc = 0x1ef294u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1ef298: 0x549021  addu        $s2, $v0, $s4
    ctx->pc = 0x1ef298u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1ef29c: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x1ef29cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1ef2a0:
    // 0x1ef2a0: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1ef2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x1ef2a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ef2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef2a8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1ef2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1ef2ac: 0x24467018  addiu       $a2, $v0, 0x7018
    ctx->pc = 0x1ef2acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 28696));
    // 0x1ef2b0: 0xc10ca04  jal         func_432810
    ctx->pc = 0x1EF2B0u;
    SET_GPR_U32(ctx, 31, 0x1EF2B8u);
    ctx->pc = 0x1EF2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF2B0u;
    // 0x1ef2b4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1EF2B0u, 0x1EF2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF2B8u;
label_1ef2b8:
    // 0x1ef2b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ef2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef2bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ef2bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef2c0: 0x8e8201dc  lw          $v0, 0x1DC($s4)
    ctx->pc = 0x1ef2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 476)));
    // 0x1ef2c4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ef2c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef2c8: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x1ef2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1ef2cc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1ef2ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef2d0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1ef2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ef2d4: 0x3c21018  mult        $v0, $fp, $v0
    ctx->pc = 0x1ef2d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ef2d8: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x1ef2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ef2dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ef2dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef2e0: 0xc640fff8  lwc1        $f0, -0x8($s2)
    ctx->pc = 0x1ef2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef2e4: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1ef2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ef2e8: 0xc641fffc  lwc1        $f1, -0x4($s2)
    ctx->pc = 0x1ef2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef2ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ef2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef2f0: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1ef2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ef2f4: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x1ef2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1ef2f8: 0x84690000  lh          $t1, 0x0($v1)
    ctx->pc = 0x1ef2f8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ef2fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ef2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ef300: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1ef300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1ef304: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1ef304u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1ef308: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1ef308u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1ef30c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ef30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef310: 0xe6d4000c  swc1        $f20, 0xC($s6)
    ctx->pc = 0x1ef310u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
    // 0x1ef314: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ef314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ef318: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x1ef318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1ef31c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1ef31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1ef320: 0xc08cf58  jal         func_233D60
    ctx->pc = 0x1EF320u;
    SET_GPR_U32(ctx, 31, 0x1EF328u);
    ctx->pc = 0x1EF324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF320u;
    // 0x1ef324: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233D60u, 0x1EF320u, 0x1EF328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF328u;
label_1ef328:
    // 0x1ef328: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1ef328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1ef32c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x1EF32Cu;
    SET_GPR_U32(ctx, 31, 0x1EF334u);
    ctx->pc = 0x1EF330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF32Cu;
    // 0x1ef330: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1EF32Cu, 0x1EF334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF334u;
label_1ef334:
    // 0x1ef334: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1EF334u;
    {
        const bool branch_taken_0x1ef334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef334) {
            ctx->pc = 0x1EF338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF334u;
            // 0x1ef338: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF394u;
            goto label_1ef394;
        }
    }
    ctx->pc = 0x1EF33Cu;
    // 0x1ef33c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1EF33Cu;
    SET_GPR_U32(ctx, 31, 0x1EF344u);
    ctx->pc = 0x1EF340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF33Cu;
    // 0x1ef340: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1EF33Cu, 0x1EF344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF344u;
label_1ef344:
    // 0x1ef344: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1EF344u;
    {
        const bool branch_taken_0x1ef344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef344) {
            ctx->pc = 0x1EF348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF344u;
            // 0x1ef348: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF394u;
            goto label_1ef394;
        }
    }
    ctx->pc = 0x1EF34Cu;
    // 0x1ef34c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1ef34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ef350: 0xc0a48cc  jal         func_292330
    ctx->pc = 0x1EF350u;
    SET_GPR_U32(ctx, 31, 0x1EF358u);
    ctx->pc = 0x1EF354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF350u;
    // 0x1ef354: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292330u, 0x1EF350u, 0x1EF358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF358u;
label_1ef358:
    // 0x1ef358: 0xc0e409a  jal         func_390268
    ctx->pc = 0x1EF358u;
    SET_GPR_U32(ctx, 31, 0x1EF360u);
    ctx->pc = 0x1EF35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF358u;
    // 0x1ef35c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1EF358u, 0x1EF360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF360u;
label_1ef360:
    // 0x1ef360: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1ef360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ef364: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ef364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef368: 0xc08d3be  jal         func_234EF8
    ctx->pc = 0x1EF368u;
    SET_GPR_U32(ctx, 31, 0x1EF370u);
    ctx->pc = 0x1EF36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF368u;
    // 0x1ef36c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234EF8u, 0x1EF368u, 0x1EF370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF370u;
label_1ef370:
    // 0x1ef370: 0xa2000284  sb          $zero, 0x284($s0)
    ctx->pc = 0x1ef370u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 644), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ef374: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ef374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef378: 0xc086c2e  jal         func_21B0B8
    ctx->pc = 0x1EF378u;
    SET_GPR_U32(ctx, 31, 0x1EF380u);
    ctx->pc = 0x1EF37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF378u;
    // 0x1ef37c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B0B8u, 0x1EF378u, 0x1EF380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF380u;
label_1ef380:
    // 0x1ef380: 0xc087438  jal         func_21D0E0
    ctx->pc = 0x1EF380u;
    SET_GPR_U32(ctx, 31, 0x1EF388u);
    ctx->pc = 0x1EF384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF380u;
    // 0x1ef384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D0E0u, 0x1EF380u, 0x1EF388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF388u;
label_1ef388:
    // 0x1ef388: 0x8fa6002c  lw          $a2, 0x2C($sp)
    ctx->pc = 0x1ef388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ef38c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1ef38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1ef390: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ef390u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1ef394:
    // 0x1ef394: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1ef394u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1ef398: 0x26b5000c  addiu       $s5, $s5, 0xC
    ctx->pc = 0x1ef398u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x1ef39c: 0x277102b  sltu        $v0, $s3, $s7
    ctx->pc = 0x1ef39cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x1ef3a0: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x1EF3A0u;
    {
        const bool branch_taken_0x1ef3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF3A0u;
        // 0x1ef3a4: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef3a0) {
            ctx->pc = 0x1EF2A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef2a0;
        }
    }
    ctx->pc = 0x1EF3A8u;
label_1ef3a8:
    // 0x1ef3a8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ef3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1ef3ac: 0xc06254a  jal         func_189528
    ctx->pc = 0x1EF3ACu;
    SET_GPR_U32(ctx, 31, 0x1EF3B4u);
    ctx->pc = 0x1EF3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF3ACu;
    // 0x1ef3b0: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189528u, 0x1EF3ACu, 0x1EF3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF3B4u;
label_1ef3b4:
    // 0x1ef3b4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1ef3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ef3b8: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1ef3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1ef3bc: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1ef3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ef3c0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1ef3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1ef3c4: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1ef3c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1ef3c8:
    // 0x1ef3c8: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1ef3c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1ef3cc: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1ef3ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ef3d0: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1ef3d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ef3d4: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x1ef3d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ef3d8: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1ef3d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ef3dc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1ef3dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ef3e0: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x1ef3e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ef3e4: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x1ef3e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ef3e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ef3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ef3ec: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x1ef3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ef3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF3F0u;
        // 0x1ef3f4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF3F8u;
}
