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

// Function: sub_00302118
// Address: 0x302118 - 0x302340
void sub_00302118_0x302118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302118_0x302118");
#endif

    switch (ctx->pc) {
        case 0x302154u: goto label_302154;
        case 0x302168u: goto label_302168;
        case 0x3021d0u: goto label_3021d0;
        case 0x302210u: goto label_302210;
        case 0x302218u: goto label_302218;
        case 0x302224u: goto label_302224;
        case 0x30224cu: goto label_30224c;
        case 0x302254u: goto label_302254;
        case 0x302270u: goto label_302270;
        case 0x3022a8u: goto label_3022a8;
        case 0x3022b0u: goto label_3022b0;
        default: break;
    }

    ctx->pc = 0x302118u;

    // 0x302118: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x302118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x30211c: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x30211cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x302120: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x302120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x302124: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x302124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302128: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x302128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x30212c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x30212cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302130: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x302130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x302134: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x302134u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302138: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x302138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x30213c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x30213cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302140: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x302140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x302144: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x302144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x302148: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x302148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x30214c: 0xc0c080e  jal         func_302038
    ctx->pc = 0x30214Cu;
    SET_GPR_U32(ctx, 31, 0x302154u);
    ctx->pc = 0x302150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30214Cu;
    // 0x302150: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302038u, 0x30214Cu, 0x302154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302154u;
label_302154:
    // 0x302154: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x302154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302158: 0x1443006f  bne         $v0, $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x302158u;
    {
        const bool branch_taken_0x302158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30215Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302158u;
        // 0x30215c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302158) {
            ctx->pc = 0x302318u;
            goto label_302318;
        }
    }
    ctx->pc = 0x302160u;
    // 0x302160: 0xc087502  jal         func_21D408
    ctx->pc = 0x302160u;
    SET_GPR_U32(ctx, 31, 0x302168u);
    ctx->pc = 0x302164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302160u;
    // 0x302164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x302160u, 0x302168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302168u;
label_302168:
    // 0x302168: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x302168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x30216c: 0x8c6505f4  lw          $a1, 0x5F4($v1)
    ctx->pc = 0x30216cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1524)));
    // 0x302170: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x302170u;
    {
        const bool branch_taken_0x302170 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x302174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302170u;
        // 0x302174: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302170) {
            ctx->pc = 0x302198u;
            goto label_302198;
        }
    }
    ctx->pc = 0x302178u;
    // 0x302178: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x302178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x30217c: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x30217cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x302180: 0x24027530  addiu       $v0, $zero, 0x7530
    ctx->pc = 0x302180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
    // 0x302184: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x302184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x302188: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x302188u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30218c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x30218cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x302190: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x302190u;
    {
        const bool branch_taken_0x302190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x302194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302190u;
        // 0x302194: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302190) {
            ctx->pc = 0x3021A0u;
            goto label_3021a0;
        }
    }
    ctx->pc = 0x302198u;
label_302198:
    // 0x302198: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x302198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30219c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30219cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3021a0:
    // 0x3021a0: 0x54c2005d  bnel        $a2, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x3021A0u;
    {
        const bool branch_taken_0x3021a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x3021a0) {
            ctx->pc = 0x3021A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3021A0u;
            // 0x3021a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x302318u;
            goto label_302318;
        }
    }
    ctx->pc = 0x3021A8u;
    // 0x3021a8: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x3021a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x3021ac: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3021acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3021b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3021b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3021b4: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x3021b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3021b8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x3021b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3021bc: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3021bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3021c0: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x3021c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3021c4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x3021c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x3021c8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3021c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3021cc: 0x0  nop
    ctx->pc = 0x3021ccu;
    // NOP
label_3021d0:
    // 0x3021d0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3021d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x3021d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3021d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3021d8: 0x0  nop
    ctx->pc = 0x3021d8u;
    // NOP
    // 0x3021dc: 0x0  nop
    ctx->pc = 0x3021dcu;
    // NOP
    // 0x3021e0: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3021E0u;
    {
        const bool branch_taken_0x3021e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x3021E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3021E0u;
        // 0x3021e4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3021e0) {
            ctx->pc = 0x3021D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3021d0;
        }
    }
    ctx->pc = 0x3021E8u;
    // 0x3021e8: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x3021E8u;
    {
        const bool branch_taken_0x3021e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3021ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3021E8u;
        // 0x3021ec: 0x3c07002a  lui         $a3, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3021e8) {
            ctx->pc = 0x30221Cu;
            goto label_30221c;
        }
    }
    ctx->pc = 0x3021F0u;
    // 0x3021f0: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x3021f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x3021f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3021f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3021f8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x3021f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3021fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3021fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302200: 0x24e7c160  addiu       $a3, $a3, -0x3EA0
    ctx->pc = 0x302200u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951264));
    // 0x302204: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x302204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302208: 0xc0a71b4  jal         func_29C6D0
    ctx->pc = 0x302208u;
    SET_GPR_U32(ctx, 31, 0x302210u);
    ctx->pc = 0x30220Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302208u;
    // 0x30220c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C6D0u, 0x302208u, 0x302210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302210u;
label_302210:
    // 0x302210: 0xc136b80  jal         func_4DAE00
    ctx->pc = 0x302210u;
    SET_GPR_U32(ctx, 31, 0x302218u);
    ctx->pc = 0x302214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302210u;
    // 0x302214: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x302210u, 0x302218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302218u;
label_302218:
    // 0x302218: 0x24520001  addiu       $s2, $v0, 0x1
    ctx->pc = 0x302218u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_30221c:
    // 0x30221c: 0xc13782a  jal         func_4DE0A8
    ctx->pc = 0x30221Cu;
    SET_GPR_U32(ctx, 31, 0x302224u);
    ctx->pc = 0x302220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30221Cu;
    // 0x302220: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0A8u, 0x30221Cu, 0x302224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302224u;
label_302224:
    // 0x302224: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x302224u;
    {
        const bool branch_taken_0x302224 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x302228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302224u;
        // 0x302228: 0x3c07002a  lui         $a3, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302224) {
            ctx->pc = 0x30225Cu;
            goto label_30225c;
        }
    }
    ctx->pc = 0x30222Cu;
    // 0x30222c: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x30222cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x302230: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x302230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x302234: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x302234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302238: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x302238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30223c: 0x24e7c160  addiu       $a3, $a3, -0x3EA0
    ctx->pc = 0x30223cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951264));
    // 0x302240: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x302240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302244: 0xc0a71b4  jal         func_29C6D0
    ctx->pc = 0x302244u;
    SET_GPR_U32(ctx, 31, 0x30224Cu);
    ctx->pc = 0x302248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302244u;
    // 0x302248: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C6D0u, 0x302244u, 0x30224Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30224Cu;
label_30224c:
    // 0x30224c: 0xc136b80  jal         func_4DAE00
    ctx->pc = 0x30224Cu;
    SET_GPR_U32(ctx, 31, 0x302254u);
    ctx->pc = 0x302250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30224Cu;
    // 0x302250: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x30224Cu, 0x302254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302254u;
label_302254:
    // 0x302254: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x302254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x302258: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x302258u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30225c:
    // 0x30225c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x30225cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x302260: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x302260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302264: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x302264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x302268: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x302268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30226c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x30226cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_302270:
    // 0x302270: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x302270u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x302274: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x302274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x302278: 0x0  nop
    ctx->pc = 0x302278u;
    // NOP
    // 0x30227c: 0x0  nop
    ctx->pc = 0x30227cu;
    // NOP
    // 0x302280: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x302280u;
    {
        const bool branch_taken_0x302280 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x302284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302280u;
        // 0x302284: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302280) {
            ctx->pc = 0x302270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_302270;
        }
    }
    ctx->pc = 0x302288u;
    // 0x302288: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x302288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x30228c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30228cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x302290: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x302290u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x302294: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x302294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302298: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x302298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30229c: 0x24e7c2e8  addiu       $a3, $a3, -0x3D18
    ctx->pc = 0x30229cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951656));
    // 0x3022a0: 0xc0a71b4  jal         func_29C6D0
    ctx->pc = 0x3022A0u;
    SET_GPR_U32(ctx, 31, 0x3022A8u);
    ctx->pc = 0x3022A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3022A0u;
    // 0x3022a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C6D0u, 0x3022A0u, 0x3022A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3022A8u;
label_3022a8:
    // 0x3022a8: 0xc136b80  jal         func_4DAE00
    ctx->pc = 0x3022A8u;
    SET_GPR_U32(ctx, 31, 0x3022B0u);
    ctx->pc = 0x3022ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3022A8u;
    // 0x3022ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x3022A8u, 0x3022B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3022B0u;
label_3022b0:
    // 0x3022b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3022b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3022b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3022b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3022b8: 0x244001a  div         $zero, $s2, $a0
    ctx->pc = 0x3022b8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3022bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3022bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3022c0: 0x62282a  slt         $a1, $v1, $v0
    ctx->pc = 0x3022c0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3022c4: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3022C4u;
    {
        const bool branch_taken_0x3022c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3022c4) {
            ctx->pc = 0x3022C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3022C4u;
            // 0x3022c8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3022CCu;
            goto label_3022cc;
        }
    }
    ctx->pc = 0x3022CCu;
label_3022cc:
    // 0x3022cc: 0x5100a  movz        $v0, $zero, $a1
    ctx->pc = 0x3022ccu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x3022d0: 0x3012  mflo        $a2
    ctx->pc = 0x3022d0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x3022d4: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x3022d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3022d8: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x3022d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3022dc: 0x3300a  movz        $a2, $zero, $v1
    ctx->pc = 0x3022dcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x3022e0: 0x18c0000c  blez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x3022E0u;
    {
        const bool branch_taken_0x3022e0 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x3022E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3022E0u;
        // 0x3022e4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3022e0) {
            ctx->pc = 0x302314u;
            goto label_302314;
        }
    }
    ctx->pc = 0x3022E8u;
    // 0x3022e8: 0x16c20008  bne         $s6, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3022E8u;
    {
        const bool branch_taken_0x3022e8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x3022ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3022E8u;
        // 0x3022ec: 0x2a430004  slti        $v1, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3022e8) {
            ctx->pc = 0x30230Cu;
            goto label_30230c;
        }
    }
    ctx->pc = 0x3022F0u;
    // 0x3022f0: 0x2a42000c  slti        $v0, $s2, 0xC
    ctx->pc = 0x3022f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x3022f4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3022F4u;
    {
        const bool branch_taken_0x3022f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3022F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3022F4u;
        // 0x3022f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3022f4) {
            ctx->pc = 0x302318u;
            goto label_302318;
        }
    }
    ctx->pc = 0x3022FCu;
    // 0x3022fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3022fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302300: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x302300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x302304: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x302304u;
    {
        const bool branch_taken_0x302304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x302308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302304u;
        // 0x302308: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302304) {
            ctx->pc = 0x302318u;
            goto label_302318;
        }
    }
    ctx->pc = 0x30230Cu;
label_30230c:
    // 0x30230c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x30230Cu;
    {
        const bool branch_taken_0x30230c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x302310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30230Cu;
        // 0x302310: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30230c) {
            ctx->pc = 0x302318u;
            goto label_302318;
        }
    }
    ctx->pc = 0x302314u;
label_302314:
    // 0x302314: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x302314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_302318:
    // 0x302318: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x302318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x30231c: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x30231cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x302320: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x302320u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x302324: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x302324u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x302328: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x302328u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30232c: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x30232cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x302330: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x302330u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x302334: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x302334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x302338: 0x3e00008  jr          $ra
    ctx->pc = 0x302338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302338u;
        // 0x30233c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302340u;
}
