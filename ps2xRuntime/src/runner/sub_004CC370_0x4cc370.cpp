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

// Function: sub_004CC370
// Address: 0x4cc370 - 0x4cc738
void sub_004CC370_0x4cc370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CC370_0x4cc370");
#endif

    switch (ctx->pc) {
        case 0x4cc418u: goto label_4cc418;
        case 0x4cc434u: goto label_4cc434;
        case 0x4cc458u: goto label_4cc458;
        case 0x4cc4e8u: goto label_4cc4e8;
        case 0x4cc5a0u: goto label_4cc5a0;
        case 0x4cc5a8u: goto label_4cc5a8;
        case 0x4cc5bcu: goto label_4cc5bc;
        case 0x4cc5e0u: goto label_4cc5e0;
        case 0x4cc600u: goto label_4cc600;
        case 0x4cc610u: goto label_4cc610;
        case 0x4cc618u: goto label_4cc618;
        case 0x4cc620u: goto label_4cc620;
        case 0x4cc650u: goto label_4cc650;
        case 0x4cc6d0u: goto label_4cc6d0;
        case 0x4cc6e8u: goto label_4cc6e8;
        default: break;
    }

    ctx->pc = 0x4cc370u;

    // 0x4cc370: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4cc370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4cc374: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4cc374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4cc378: 0x8c433960  lw          $v1, 0x3960($v0)
    ctx->pc = 0x4cc378u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x533960u));
    // 0x4cc37c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x4cc37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x4cc380: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x4cc380u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cc384: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x4cc384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x4cc388: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x4cc388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4cc38c: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x4cc38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x4cc390: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x4cc390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x4cc394: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4cc394u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cc398: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x4cc398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x4cc39c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x4cc39cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cc3a0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x4cc3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x4cc3a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4cc3a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cc3a8: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x4cc3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x4cc3ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4cc3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4cc3b0: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x4cc3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x4cc3b4: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x4cc3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x4cc3b8: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x4cc3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x4cc3bc: 0x14a300d1  bne         $a1, $v1, . + 4 + (0xD1 << 2)
    ctx->pc = 0x4CC3BCu;
    {
        const bool branch_taken_0x4cc3bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x4CC3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC3BCu;
        // 0x4cc3c0: 0xac453960  sw          $a1, 0x3960($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 14688), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc3bc) {
            ctx->pc = 0x4CC704u;
            goto label_4cc704;
        }
    }
    ctx->pc = 0x4CC3C4u;
    // 0x4cc3c4: 0x126000c5  beqz        $s3, . + 4 + (0xC5 << 2)
    ctx->pc = 0x4CC3C4u;
    {
        const bool branch_taken_0x4cc3c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC3C4u;
        // 0x4cc3c8: 0x3262003f  andi        $v0, $s3, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc3c4) {
            ctx->pc = 0x4CC6DCu;
            goto label_4cc6dc;
        }
    }
    ctx->pc = 0x4CC3CCu;
    // 0x4cc3cc: 0x144000c4  bnez        $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x4CC3CCu;
    {
        const bool branch_taken_0x4cc3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CC3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC3CCu;
        // 0x4cc3d0: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc3cc) {
            ctx->pc = 0x4CC6E0u;
            goto label_4cc6e0;
        }
    }
    ctx->pc = 0x4CC3D4u;
    // 0x4cc3d4: 0x32830001  andi        $v1, $s4, 0x1
    ctx->pc = 0x4cc3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x4cc3d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4cc3d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cc3dc: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x4cc3dcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x4cc3e0: 0x2e260011  sltiu       $a2, $s1, 0x11
    ctx->pc = 0x4cc3e0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x4cc3e4: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x4cc3e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cc3e8: 0x32850002  andi        $a1, $s4, 0x2
    ctx->pc = 0x4cc3e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
    // 0x4cc3ec: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x4cc3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4cc3f0: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x4cc3f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4cc3f4: 0x86880b  movn        $s1, $a0, $a2
    ctx->pc = 0x4cc3f4u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
    // 0x4cc3f8: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x4cc3f8u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x4cc3fc: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x4cc3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x4cc400: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4cc400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4cc404: 0x119300  sll         $s2, $s1, 12
    ctx->pc = 0x4cc404u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 12));
    // 0x4cc408: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x4cc408u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cc40c: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x4cc40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4cc410: 0xc132336  jal         func_4C8CD8
    ctx->pc = 0x4CC410u;
    SET_GPR_U32(ctx, 31, 0x4CC418u);
    ctx->pc = 0x4CC414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CC410u;
    // 0x4cc414: 0xac714804  sw          $s1, 0x4804($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 18436), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8CD8u, 0x4CC410u, 0x4CC418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC418u;
label_4cc418:
    // 0x4cc418: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4cc418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cc41c: 0x120000b2  beqz        $s0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x4CC41Cu;
    {
        const bool branch_taken_0x4cc41c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC41Cu;
        // 0x4cc420: 0x2122821  addu        $a1, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc41c) {
            ctx->pc = 0x4CC6E8u;
            goto label_4cc6e8;
        }
    }
    ctx->pc = 0x4CC424u;
    // 0x4cc424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4cc424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cc428: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x4cc428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4cc42c: 0xc10f644  jal         func_43D910
    ctx->pc = 0x4CC42Cu;
    SET_GPR_U32(ctx, 31, 0x4CC434u);
    ctx->pc = 0x4CC430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CC42Cu;
    // 0x4cc430: 0x3c1e0071  lui         $fp, 0x71 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)113 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x4CC42Cu, 0x4CC434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC434u;
label_4cc434:
    // 0x4cc434: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4cc434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4cc438: 0x26681000  addiu       $t0, $s3, 0x1000
    ctx->pc = 0x4cc438u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 4096));
    // 0x4cc43c: 0x3c070053  lui         $a3, 0x53
    ctx->pc = 0x4cc43cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)83 << 16));
    // 0x4cc440: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4cc440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4cc444: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4cc444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4cc448: 0xac504808  sw          $s0, 0x4808($v0)
    ctx->pc = 0x4cc448u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x714808u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x714808u, _value); } while (0);
    // 0x4cc44c: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4CC44Cu;
    {
        const bool branch_taken_0x4cc44c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC44Cu;
        // 0x4cc450: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc44c) {
            ctx->pc = 0x4CC474u;
            goto label_4cc474;
        }
    }
    ctx->pc = 0x4CC454u;
    // 0x4cc454: 0x24464808  addiu       $a2, $v0, 0x4808
    ctx->pc = 0x4cc454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 18440));
label_4cc458:
    // 0x4cc458: 0xacd00000  sw          $s0, 0x0($a2)
    ctx->pc = 0x4cc458u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 16));
    // 0x4cc45c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4cc45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4cc460: 0x26101000  addiu       $s0, $s0, 0x1000
    ctx->pc = 0x4cc460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4096));
    // 0x4cc464: 0xb1102b  sltu        $v0, $a1, $s1
    ctx->pc = 0x4cc464u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x4cc468: 0x0  nop
    ctx->pc = 0x4cc468u;
    // NOP
    // 0x4cc46c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4CC46Cu;
    {
        const bool branch_taken_0x4cc46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CC470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC46Cu;
        // 0x4cc470: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc46c) {
            ctx->pc = 0x4CC458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cc458;
        }
    }
    ctx->pc = 0x4CC474u;
label_4cc474:
    // 0x4cc474: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x4cc474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cc478: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x4CC478u;
    {
        const bool branch_taken_0x4cc478 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC478u;
        // 0x4cc47c: 0xafd34a80  sw          $s3, 0x4A80($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 19072), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc478) {
            ctx->pc = 0x4CC494u;
            goto label_4cc494;
        }
    }
    ctx->pc = 0x4CC480u;
    // 0x4cc480: 0xac654a88  sw          $a1, 0x4A88($v1)
    ctx->pc = 0x4cc480u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 19080), GPR_U32(ctx, 5));
    // 0x4cc484: 0xacf039c0  sw          $s0, 0x39C0($a3)
    ctx->pc = 0x4cc484u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 14784), GPR_U32(ctx, 16));
    // 0x4cc488: 0x26651800  addiu       $a1, $s3, 0x1800
    ctx->pc = 0x4cc488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 6144));
    // 0x4cc48c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4CC48Cu;
    {
        const bool branch_taken_0x4cc48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC48Cu;
        // 0x4cc490: 0x26100800  addiu       $s0, $s0, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc48c) {
            ctx->pc = 0x4CC49Cu;
            goto label_4cc49c;
        }
    }
    ctx->pc = 0x4CC494u;
label_4cc494:
    // 0x4cc494: 0xace039c0  sw          $zero, 0x39C0($a3)
    ctx->pc = 0x4cc494u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 14784), GPR_U32(ctx, 0));
    // 0x4cc498: 0xac604a88  sw          $zero, 0x4A88($v1)
    ctx->pc = 0x4cc498u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 19080), GPR_U32(ctx, 0));
label_4cc49c:
    // 0x4cc49c: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x4CC49Cu;
    {
        const bool branch_taken_0x4cc49c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC49Cu;
        // 0x4cc4a0: 0x24e239c0  addiu       $v0, $a3, 0x39C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 14784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc49c) {
            ctx->pc = 0x4CC4B4u;
            goto label_4cc4b4;
        }
    }
    ctx->pc = 0x4CC4A4u;
    // 0x4cc4a4: 0x24634a88  addiu       $v1, $v1, 0x4A88
    ctx->pc = 0x4cc4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19080));
    // 0x4cc4a8: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x4cc4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x4cc4ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4CC4ACu;
    {
        const bool branch_taken_0x4cc4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC4ACu;
        // 0x4cc4b0: 0xac650004  sw          $a1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc4ac) {
            ctx->pc = 0x4CC4C0u;
            goto label_4cc4c0;
        }
    }
    ctx->pc = 0x4CC4B4u;
label_4cc4b4:
    // 0x4cc4b4: 0x24634a88  addiu       $v1, $v1, 0x4A88
    ctx->pc = 0x4cc4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19080));
    // 0x4cc4b8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x4cc4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x4cc4bc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x4cc4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_4cc4c0:
    // 0x4cc4c0: 0x8fc24a80  lw          $v0, 0x4A80($fp)
    ctx->pc = 0x4cc4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 19072)));
    // 0x4cc4c4: 0x24051bb8  addiu       $a1, $zero, 0x1BB8
    ctx->pc = 0x4cc4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7096));
    // 0x4cc4c8: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4cc4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4cc4cc: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x4cc4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x4cc4d0: 0x24632180  addiu       $v1, $v1, 0x2180
    ctx->pc = 0x4cc4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8576));
    // 0x4cc4d4: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x4cc4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x4cc4d8: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x4cc4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x4cc4dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4cc4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4cc4e0: 0xc10f518  jal         func_43D460
    ctx->pc = 0x4CC4E0u;
    SET_GPR_U32(ctx, 31, 0x4CC4E8u);
    ctx->pc = 0x4CC4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CC4E0u;
    // 0x4cc4e4: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D460u, 0x4CC4E0u, 0x4CC4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC4E8u;
label_4cc4e8:
    // 0x4cc4e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4cc4e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cc4ec: 0x1240007b  beqz        $s2, . + 4 + (0x7B << 2)
    ctx->pc = 0x4CC4ECu;
    {
        const bool branch_taken_0x4cc4ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC4ECu;
        // 0x4cc4f0: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc4ec) {
            ctx->pc = 0x4CC6DCu;
            goto label_4cc6dc;
        }
    }
    ctx->pc = 0x4CC4F4u;
    // 0x4cc4f4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4cc4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4cc4f8: 0xac4046a8  sw          $zero, 0x46A8($v0)
    ctx->pc = 0x4cc4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18088), GPR_U32(ctx, 0));
    // 0x4cc4fc: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x4cc4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x4cc500: 0xac6046a4  sw          $zero, 0x46A4($v1)
    ctx->pc = 0x4cc500u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7146A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7146A4u, _value); } while (0);
    // 0x4cc504: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x4cc504u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
    // 0x4cc508: 0xaca047c8  sw          $zero, 0x47C8($a1)
    ctx->pc = 0x4cc508u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7147C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7147C8u, _value); } while (0);
    // 0x4cc50c: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x4cc50cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x4cc510: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4cc510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4cc514: 0xacc047cc  sw          $zero, 0x47CC($a2)
    ctx->pc = 0x4cc514u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7147CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7147CCu, _value); } while (0);
    // 0x4cc518: 0x248446b8  addiu       $a0, $a0, 0x46B8
    ctx->pc = 0x4cc518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18104));
    // 0x4cc51c: 0x244246d8  addiu       $v0, $v0, 0x46D8
    ctx->pc = 0x4cc51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18136));
    // 0x4cc520: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x4cc520u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7146D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7146D4u, _value); } while (0);
    // 0x4cc524: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x4cc524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x4cc528: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4cc528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4cc52c: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x4cc52cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7146F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7146F0u, _value); } while (0);
    // 0x4cc530: 0x24a546f8  addiu       $a1, $a1, 0x46F8
    ctx->pc = 0x4cc530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18168));
    // 0x4cc534: 0x24634720  addiu       $v1, $v1, 0x4720
    ctx->pc = 0x4cc534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18208));
    // 0x4cc538: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x4cc538u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x71471Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x71471Cu, _value); } while (0);
    // 0x4cc53c: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x4cc53cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
    // 0x4cc540: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x4cc540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x4cc544: 0xac650020  sw          $a1, 0x20($v1)
    ctx->pc = 0x4cc544u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x714740u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x714740u, _value); } while (0);
    // 0x4cc548: 0x24c647d0  addiu       $a2, $a2, 0x47D0
    ctx->pc = 0x4cc548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18384));
    // 0x4cc54c: 0x248447e8  addiu       $a0, $a0, 0x47E8
    ctx->pc = 0x4cc54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18408));
    // 0x4cc550: 0xacc40014  sw          $a0, 0x14($a2)
    ctx->pc = 0x4cc550u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7147E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7147E4u, _value); } while (0);
    // 0x4cc554: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4cc554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4cc558: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4cc558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4cc55c: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x4cc55cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x7147F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7147F8u, _value); } while (0);
    // 0x4cc560: 0x24424748  addiu       $v0, $v0, 0x4748
    ctx->pc = 0x4cc560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18248));
    // 0x4cc564: 0x24634788  addiu       $v1, $v1, 0x4788
    ctx->pc = 0x4cc564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18312));
    // 0x4cc568: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x4cc568u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x714764u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x714764u, _value); } while (0);
    // 0x4cc56c: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x4cc56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x4cc570: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x4cc570u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7147A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7147A0u, _value); } while (0);
    // 0x4cc574: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x4cc574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x4cc578: 0xac44003c  sw          $a0, 0x3C($v0)
    ctx->pc = 0x4cc578u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x714784u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x714784u, _value); } while (0);
    // 0x4cc57c: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x4cc57cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x4cc580: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4cc580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4cc584: 0xac660038  sw          $a2, 0x38($v1)
    ctx->pc = 0x4cc584u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x7147C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7147C0u, _value); } while (0);
    // 0x4cc588: 0x16c20010  bne         $s6, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4CC588u;
    {
        const bool branch_taken_0x4cc588 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x4CC58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC588u;
        // 0x4cc58c: 0xaca24698  sw          $v0, 0x4698($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 18072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc588) {
            ctx->pc = 0x4CC5CCu;
            goto label_4cc5cc;
        }
    }
    ctx->pc = 0x4CC590u;
    // 0x4cc590: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4cc590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4cc594: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4cc594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4cc598: 0xc10fe72  jal         func_43F9C8
    ctx->pc = 0x4CC598u;
    SET_GPR_U32(ctx, 31, 0x4CC5A0u);
    ctx->pc = 0x4CC59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CC598u;
    // 0x4cc59c: 0xac62469c  sw          $v0, 0x469C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 18076), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F9C8u, 0x4CC598u, 0x4CC5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC5A0u;
label_4cc5a0:
    // 0x4cc5a0: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x4CC5A0u;
    SET_GPR_U32(ctx, 31, 0x4CC5A8u);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x4CC5A0u, 0x4CC5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC5A8u;
label_4cc5a8:
    // 0x4cc5a8: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x4cc5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x4cc5ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4cc5acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cc5b0: 0x248445d0  addiu       $a0, $a0, 0x45D0
    ctx->pc = 0x4cc5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17872));
    // 0x4cc5b4: 0xc10ff20  jal         func_43FC80
    ctx->pc = 0x4CC5B4u;
    SET_GPR_U32(ctx, 31, 0x4CC5BCu);
    ctx->pc = 0x4CC5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CC5B4u;
    // 0x4cc5b8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43FC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43FC80u, 0x4CC5B4u, 0x4CC5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC5BCu;
label_4cc5bc:
    // 0x4cc5bc: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4cc5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4cc5c0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x4cc5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4cc5c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4CC5C4u;
    {
        const bool branch_taken_0x4cc5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC5C4u;
        // 0x4cc5c8: 0xac6246a0  sw          $v0, 0x46A0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 18080), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc5c4) {
            ctx->pc = 0x4CC5E8u;
            goto label_4cc5e8;
        }
    }
    ctx->pc = 0x4CC5CCu;
label_4cc5cc:
    // 0x4cc5cc: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x4cc5ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    // 0x4cc5d0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4cc5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4cc5d4: 0xac40469c  sw          $zero, 0x469C($v0)
    ctx->pc = 0x4cc5d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x71469Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x71469Cu, _value); } while (0);
    // 0x4cc5d8: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x4CC5D8u;
    SET_GPR_U32(ctx, 31, 0x4CC5E0u);
    ctx->pc = 0x4CC5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CC5D8u;
    // 0x4cc5dc: 0xae1646a0  sw          $s6, 0x46A0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 18080), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x4CC5D8u, 0x4CC5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC5E0u;
label_4cc5e0:
    // 0x4cc5e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4cc5e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cc5e4: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x4cc5e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4cc5e8:
    // 0x4cc5e8: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x4cc5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
    // 0x4cc5ec: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x4cc5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
    // 0x4cc5f0: 0x8c6446a0  lw          $a0, 0x46A0($v1)
    ctx->pc = 0x4cc5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18080)));
    // 0x4cc5f4: 0x24a5c008  addiu       $a1, $a1, -0x3FF8
    ctx->pc = 0x4cc5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950920));
    // 0x4cc5f8: 0xc10ff26  jal         func_43FC98
    ctx->pc = 0x4CC5F8u;
    SET_GPR_U32(ctx, 31, 0x4CC600u);
    ctx->pc = 0x4CC5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CC5F8u;
    // 0x4cc5fc: 0x24c64694  addiu       $a2, $a2, 0x4694 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18068));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43FC98u, 0x4CC5F8u, 0x4CC600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC600u;
label_4cc600:
    // 0x4cc600: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4CC600u;
    {
        const bool branch_taken_0x4cc600 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC600u;
        // 0x4cc604: 0x32930010  andi        $s3, $s4, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc600) {
            ctx->pc = 0x4CC610u;
            goto label_4cc610;
        }
    }
    ctx->pc = 0x4CC608u;
    // 0x4cc608: 0xc110cc4  jal         func_443310
    ctx->pc = 0x4CC608u;
    SET_GPR_U32(ctx, 31, 0x4CC610u);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x4CC608u, 0x4CC610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC610u;
label_4cc610:
    // 0x4cc610: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x4cc610u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4cc614: 0x27b0000f  addiu       $s0, $sp, 0xF
    ctx->pc = 0x4cc614u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 15));
label_4cc618:
    // 0x4cc618: 0xc10f510  jal         func_43D440
    ctx->pc = 0x4CC618u;
    SET_GPR_U32(ctx, 31, 0x4CC620u);
    ctx->pc = 0x4CC61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CC618u;
    // 0x4cc61c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D440u, 0x4CC618u, 0x4CC620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC620u;
label_4cc620:
    // 0x4cc620: 0x0  nop
    ctx->pc = 0x4cc620u;
    // NOP
    // 0x4cc624: 0x0  nop
    ctx->pc = 0x4cc624u;
    // NOP
    // 0x4cc628: 0x0  nop
    ctx->pc = 0x4cc628u;
    // NOP
    // 0x4cc62c: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4CC62Cu;
    {
        const bool branch_taken_0x4cc62c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4CC630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC62Cu;
        // 0x4cc630: 0x2c0182d  daddu       $v1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc62c) {
            ctx->pc = 0x4CC618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cc618;
        }
    }
    ctx->pc = 0x4CC634u;
    // 0x4cc634: 0xa3a0000f  sb          $zero, 0xF($sp)
    ctx->pc = 0x4cc634u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x4cc638: 0x337c2  srl         $a2, $v1, 31
    ctx->pc = 0x4cc638u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x4cc63c: 0x31023  negu        $v0, $v1
    ctx->pc = 0x4cc63cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4cc640: 0x46180b  movn        $v1, $v0, $a2
    ctx->pc = 0x4cc640u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x4cc644: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4cc644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cc648: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x4cc648u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cc64c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x4cc64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4cc650:
    // 0x4cc650: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x4cc650u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x4cc654: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x4cc654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4cc658: 0x1010  mfhi        $v0
    ctx->pc = 0x4cc658u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x4cc65c: 0x1812  mflo        $v1
    ctx->pc = 0x4cc65cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x4cc660: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x4cc660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x4cc664: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4CC664u;
    {
        const bool branch_taken_0x4cc664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CC668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC664u;
        // 0x4cc668: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc664) {
            ctx->pc = 0x4CC650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4cc650;
        }
    }
    ctx->pc = 0x4CC66Cu;
    // 0x4cc66c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x4CC66Cu;
    {
        const bool branch_taken_0x4cc66c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC66Cu;
        // 0x4cc670: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc66c) {
            ctx->pc = 0x4CC67Cu;
            goto label_4cc67c;
        }
    }
    ctx->pc = 0x4CC674u;
    // 0x4cc674: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x4cc674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4cc678: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x4cc678u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_4cc67c:
    // 0x4cc67c: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4CC67Cu;
    {
        const bool branch_taken_0x4cc67c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc67c) {
            ctx->pc = 0x4CC680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CC67Cu;
            // 0x4cc680: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CC694u;
            goto label_4cc694;
        }
    }
    ctx->pc = 0x4CC684u;
    // 0x4cc684: 0x24a2fff1  addiu       $v0, $a1, -0xF
    ctx->pc = 0x4cc684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967281));
    // 0x4cc688: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x4cc688u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4cc68c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4cc68cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4cc690: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4cc690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_4cc694:
    // 0x4cc694: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x4cc694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4cc698: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x4CC698u;
    {
        const bool branch_taken_0x4cc698 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC698u;
        // 0x4cc69c: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc698) {
            ctx->pc = 0x4CC6A4u;
            goto label_4cc6a4;
        }
    }
    ctx->pc = 0x4CC6A0u;
    // 0x4cc6a0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x4cc6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4cc6a4:
    // 0x4cc6a4: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x4cc6a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x4cc6a8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x4cc6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4cc6ac: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4cc6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x4cc6b0: 0x8fc44a80  lw          $a0, 0x4A80($fp)
    ctx->pc = 0x4cc6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 19072)));
    // 0x4cc6b4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x4cc6b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cc6b8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4cc6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4cc6bc: 0xac4046ac  sw          $zero, 0x46AC($v0)
    ctx->pc = 0x4cc6bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7146ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7146ACu, _value); } while (0);
    // 0x4cc6c0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x4cc6c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x4cc6c4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x4cc6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4cc6c8: 0xc110b5c  jal         func_442D70
    ctx->pc = 0x4CC6C8u;
    SET_GPR_U32(ctx, 31, 0x4CC6D0u);
    ctx->pc = 0x4CC6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CC6C8u;
    // 0x4cc6cc: 0x24a50003  addiu       $a1, $a1, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442D70u, 0x4CC6C8u, 0x4CC6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC6D0u;
label_4cc6d0:
    // 0x4cc6d0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4cc6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4cc6d4: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4CC6D4u;
    {
        const bool branch_taken_0x4cc6d4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4CC6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC6D4u;
        // 0x4cc6d8: 0xac624690  sw          $v0, 0x4690($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 18064), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc6d4) {
            ctx->pc = 0x4CC704u;
            goto label_4cc704;
        }
    }
    ctx->pc = 0x4CC6DCu;
label_4cc6dc:
    // 0x4cc6dc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4cc6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4cc6e0:
    // 0x4cc6e0: 0xc132364  jal         func_4C8D90
    ctx->pc = 0x4CC6E0u;
    SET_GPR_U32(ctx, 31, 0x4CC6E8u);
    ctx->pc = 0x4CC6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CC6E0u;
    // 0x4cc6e4: 0x8c444808  lw          $a0, 0x4808($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18440)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8D90u, 0x4CC6E0u, 0x4CC6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CC6E8u;
label_4cc6e8:
    // 0x4cc6e8: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4cc6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4cc6ec: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x4cc6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
    // 0x4cc6f0: 0x8c433960  lw          $v1, 0x3960($v0)
    ctx->pc = 0x4cc6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x533960u));
    // 0x4cc6f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4cc6f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cc6f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4cc6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4cc6fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4CC6FCu;
    {
        const bool branch_taken_0x4cc6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC6FCu;
        // 0x4cc700: 0xac833960  sw          $v1, 0x3960($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 14688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc6fc) {
            ctx->pc = 0x4CC708u;
            goto label_4cc708;
        }
    }
    ctx->pc = 0x4CC704u;
label_4cc704:
    // 0x4cc704: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4cc704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4cc708:
    // 0x4cc708: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x4cc708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4cc70c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x4cc70cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4cc710: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x4cc710u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4cc714: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x4cc714u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4cc718: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x4cc718u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4cc71c: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x4cc71cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4cc720: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x4cc720u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4cc724: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x4cc724u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4cc728: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x4cc728u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4cc72c: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x4cc72cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x4cc730: 0x3e00008  jr          $ra
    ctx->pc = 0x4CC730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CC734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC730u;
        // 0x4cc734: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CC730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CC738u;
}
