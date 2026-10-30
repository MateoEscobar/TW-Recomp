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

// Function: sub_004BD5D0
// Address: 0x4bd5d0 - 0x4bdf20
void sub_004BD5D0_0x4bd5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BD5D0_0x4bd5d0");
#endif

    switch (ctx->pc) {
        case 0x4bd680u: goto label_4bd680;
        case 0x4bd6f0u: goto label_4bd6f0;
        case 0x4bd710u: goto label_4bd710;
        case 0x4bd76cu: goto label_4bd76c;
        case 0x4bd7a0u: goto label_4bd7a0;
        case 0x4bd7e8u: goto label_4bd7e8;
        case 0x4bd800u: goto label_4bd800;
        case 0x4bd8d0u: goto label_4bd8d0;
        case 0x4bd974u: goto label_4bd974;
        case 0x4bd9a0u: goto label_4bd9a0;
        case 0x4bd9e0u: goto label_4bd9e0;
        case 0x4bda28u: goto label_4bda28;
        case 0x4bda68u: goto label_4bda68;
        case 0x4bdaf8u: goto label_4bdaf8;
        case 0x4bdb24u: goto label_4bdb24;
        case 0x4bdbb4u: goto label_4bdbb4;
        case 0x4bdbd8u: goto label_4bdbd8;
        case 0x4bdc10u: goto label_4bdc10;
        case 0x4bdc38u: goto label_4bdc38;
        case 0x4bdcf0u: goto label_4bdcf0;
        case 0x4bdd40u: goto label_4bdd40;
        case 0x4bdd90u: goto label_4bdd90;
        case 0x4bdde0u: goto label_4bdde0;
        case 0x4bde30u: goto label_4bde30;
        case 0x4bde88u: goto label_4bde88;
        default: break;
    }

    ctx->pc = 0x4bd5d0u;

    // 0x4bd5d0: 0x24ccfffd  addiu       $t4, $a2, -0x3
    ctx->pc = 0x4bd5d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
    // 0x4bd5d4: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x4bd5d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4bd5d8: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x4bd5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x4bd5dc: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x4bd5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x4bd5e0: 0x16c502a  slt         $t2, $t3, $t4
    ctx->pc = 0x4bd5e0u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x4bd5e4: 0xffb601c0  sd          $s6, 0x1C0($sp)
    ctx->pc = 0x4bd5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 22));
    // 0x4bd5e8: 0x18a100b  movn        $v0, $t4, $t2
    ctx->pc = 0x4bd5e8u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 12));
    // 0x4bd5ec: 0xafa80144  sw          $t0, 0x144($sp)
    ctx->pc = 0x4bd5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 8));
    // 0x4bd5f0: 0x2b0c3  sra         $s6, $v0, 3
    ctx->pc = 0x4bd5f0u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 2), 3));
    // 0x4bd5f4: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4bd5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4bd5f8: 0x246318e0  addiu       $v1, $v1, 0x18E0
    ctx->pc = 0x4bd5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6368));
    // 0x4bd5fc: 0x176582a  slt         $t3, $t3, $s6
    ctx->pc = 0x4bd5fcu;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x4bd600: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x4bd600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4bd604: 0xffb701d0  sd          $s7, 0x1D0($sp)
    ctx->pc = 0x4bd604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 23));
    // 0x4bd608: 0xffb20180  sd          $s2, 0x180($sp)
    ctx->pc = 0x4bd608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 18));
    // 0x4bd60c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4bd60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4bd610: 0xffb10170  sd          $s1, 0x170($sp)
    ctx->pc = 0x4bd610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 17));
    // 0x4bd614: 0xbb00a  movz        $s6, $zero, $t3
    ctx->pc = 0x4bd614u;
    if (GPR_U64(ctx, 11) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
    // 0x4bd618: 0xffbf01f0  sd          $ra, 0x1F0($sp)
    ctx->pc = 0x4bd618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 31));
    // 0x4bd61c: 0x26c30001  addiu       $v1, $s6, 0x1
    ctx->pc = 0x4bd61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x4bd620: 0xffbe01e0  sd          $fp, 0x1E0($sp)
    ctx->pc = 0x4bd620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 30));
    // 0x4bd624: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x4bd624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x4bd628: 0xffb501b0  sd          $s5, 0x1B0($sp)
    ctx->pc = 0x4bd628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 21));
    // 0x4bd62c: 0x24f1ffff  addiu       $s1, $a3, -0x1
    ctx->pc = 0x4bd62cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4bd630: 0xffb30190  sd          $s3, 0x190($sp)
    ctx->pc = 0x4bd630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 19));
    // 0x4bd634: 0xc39023  subu        $s2, $a2, $v1
    ctx->pc = 0x4bd634u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4bd638: 0xffb00160  sd          $s0, 0x160($sp)
    ctx->pc = 0x4bd638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 16));
    // 0x4bd63c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x4bd63cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd640: 0xe7b40200  swc1        $f20, 0x200($sp)
    ctx->pc = 0x4bd640u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x4bd644: 0x2d12823  subu        $a1, $s6, $s1
    ctx->pc = 0x4bd644u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x4bd648: 0xffb401a0  sd          $s4, 0x1A0($sp)
    ctx->pc = 0x4bd648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 20));
    // 0x4bd64c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4bd64cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd650: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x4bd650u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4bd654: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x4bd654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
    // 0x4bd658: 0x2343821  addu        $a3, $s1, $s4
    ctx->pc = 0x4bd658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x4bd65c: 0x4e00019  bltz        $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x4BD65Cu;
    {
        const bool branch_taken_0x4bd65c = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x4BD660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD65Cu;
        // 0x4bd660: 0xafa90148  sw          $t1, 0x148($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd65c) {
            ctx->pc = 0x4BD6C4u;
            goto label_4bd6c4;
        }
    }
    ctx->pc = 0x4BD664u;
    // 0x4bd664: 0x2a820000  slti        $v0, $s4, 0x0
    ctx->pc = 0x4bd664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4bd668: 0x29030003  slti        $v1, $t0, 0x3
    ctx->pc = 0x4bd668u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x4bd66c: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x4bd66cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
    // 0x4bd670: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x4bd670u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4bd674: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x4bd674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
    // 0x4bd678: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x4bd678u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x4bd67c: 0x0  nop
    ctx->pc = 0x4bd67cu;
    // NOP
label_4bd680:
    // 0x4bd680: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4bd680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4bd684: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4BD684u;
    {
        const bool branch_taken_0x4bd684 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x4BD688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD684u;
        // 0x4bd688: 0x1221821  addu        $v1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd684) {
            ctx->pc = 0x4BD6A8u;
            goto label_4bd6a8;
        }
    }
    ctx->pc = 0x4BD68Cu;
    // 0x4bd68c: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x4bd68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x4bd690: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x4bd690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4bd694: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4bd694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4bd698: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4bd698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4bd69c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4bd69cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4bd6a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4BD6A0u;
    {
        const bool branch_taken_0x4bd6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD6A0u;
        // 0x4bd6a4: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd6a0) {
            ctx->pc = 0x4BD6ACu;
            goto label_4bd6ac;
        }
    }
    ctx->pc = 0x4BD6A8u;
label_4bd6a8:
    // 0x4bd6a8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4bd6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_4bd6ac:
    // 0x4bd6ac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4bd6acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4bd6b0: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x4bd6b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x4bd6b4: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x4BD6B4u;
    {
        const bool branch_taken_0x4bd6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD6B4u;
        // 0x4bd6b8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd6b4) {
            ctx->pc = 0x4BD680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bd680;
        }
    }
    ctx->pc = 0x4BD6BCu;
    // 0x4bd6bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4BD6BCu;
    {
        const bool branch_taken_0x4bd6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD6BCu;
        // 0x4bd6c0: 0x8fa80154  lw          $t0, 0x154($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd6bc) {
            ctx->pc = 0x4BD6E0u;
            goto label_4bd6e0;
        }
    }
    ctx->pc = 0x4BD6C4u;
label_4bd6c4:
    // 0x4bd6c4: 0x8fa60144  lw          $a2, 0x144($sp)
    ctx->pc = 0x4bd6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x4bd6c8: 0x2a850000  slti        $a1, $s4, 0x0
    ctx->pc = 0x4bd6c8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4bd6cc: 0xafa50154  sw          $a1, 0x154($sp)
    ctx->pc = 0x4bd6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 5));
    // 0x4bd6d0: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x4bd6d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x4bd6d4: 0x28c60003  slti        $a2, $a2, 0x3
    ctx->pc = 0x4bd6d4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x4bd6d8: 0xafa60150  sw          $a2, 0x150($sp)
    ctx->pc = 0x4bd6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 6));
    // 0x4bd6dc: 0x8fa80154  lw          $t0, 0x154($sp)
    ctx->pc = 0x4bd6dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_4bd6e0:
    // 0x4bd6e0: 0x15000021  bnez        $t0, . + 4 + (0x21 << 2)
    ctx->pc = 0x4BD6E0u;
    {
        const bool branch_taken_0x4bd6e0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BD6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD6E0u;
        // 0x4bd6e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd6e0) {
            ctx->pc = 0x4BD768u;
            goto label_4bd768;
        }
    }
    ctx->pc = 0x4BD6E8u;
    // 0x4bd6e8: 0x2a2b0000  slti        $t3, $s1, 0x0
    ctx->pc = 0x4bd6e8u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4bd6ec: 0x0  nop
    ctx->pc = 0x4bd6ecu;
    // NOP
label_4bd6f0:
    // 0x4bd6f0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4bd6f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4bd6f4: 0x15600015  bnez        $t3, . + 4 + (0x15 << 2)
    ctx->pc = 0x4BD6F4u;
    {
        const bool branch_taken_0x4bd6f4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BD6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD6F4u;
        // 0x4bd6f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd6f4) {
            ctx->pc = 0x4BD74Cu;
            goto label_4bd74c;
        }
    }
    ctx->pc = 0x4BD6FCu;
    // 0x4bd6fc: 0x2262021  addu        $a0, $s1, $a2
    ctx->pc = 0x4bd6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x4bd700: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x4bd700u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4bd704: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x4bd704u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4bd708: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x4bd708u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4bd70c: 0x0  nop
    ctx->pc = 0x4bd70cu;
    // NOP
label_4bd710:
    // 0x4bd710: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x4bd710u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4bd714: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x4bd714u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x4bd718: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4bd718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4bd71c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4bd71cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4bd720: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x4bd720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4bd724: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4bd724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4bd728: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x4bd728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4bd72c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4bd72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4bd730: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x4bd730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4bd734: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x4bd734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x4bd738: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4bd738u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4bd73c: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4BD73Cu;
    {
        const bool branch_taken_0x4bd73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD73Cu;
        // 0x4bd740: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd73c) {
            ctx->pc = 0x4BD710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bd710;
        }
    }
    ctx->pc = 0x4BD744u;
    // 0x4bd744: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4BD744u;
    {
        const bool branch_taken_0x4bd744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD744u;
        // 0x4bd748: 0x2a71821  addu        $v1, $s5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd744) {
            ctx->pc = 0x4BD758u;
            goto label_4bd758;
        }
    }
    ctx->pc = 0x4BD74Cu;
label_4bd74c:
    // 0x4bd74c: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x4bd74cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4bd750: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x4bd750u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4bd754: 0x2a71821  addu        $v1, $s5, $a3
    ctx->pc = 0x4bd754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_4bd758:
    // 0x4bd758: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4bd758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd75c: 0x286102a  slt         $v0, $s4, $a2
    ctx->pc = 0x4bd75cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x4bd760: 0x1040ffe3  beqz        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x4BD760u;
    {
        const bool branch_taken_0x4bd760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD760u;
        // 0x4bd764: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd760) {
            ctx->pc = 0x4BD6F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bd6f0;
        }
    }
    ctx->pc = 0x4BD768u;
label_4bd768:
    // 0x4bd768: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x4bd768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4bd76c:
    // 0x4bd76c: 0x10f080  sll         $fp, $s0, 2
    ctx->pc = 0x4bd76cu;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x4bd770: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4bd770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd774: 0x2be1021  addu        $v0, $s5, $fp
    ctx->pc = 0x4bd774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 30)));
    // 0x4bd778: 0x1a000018  blez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x4BD778u;
    {
        const bool branch_taken_0x4bd778 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x4BD77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD778u;
        // 0x4bd77c: 0xc4540000  lwc1        $f20, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd778) {
            ctx->pc = 0x4BD7DCu;
            goto label_4bd7dc;
        }
    }
    ctx->pc = 0x4BD780u;
    // 0x4bd780: 0x27c2fffc  addiu       $v0, $fp, -0x4
    ctx->pc = 0x4bd780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967292));
    // 0x4bd784: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x4bd784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x4bd788: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x4bd788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4bd78c: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x4bd78cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x4bd790: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x4bd790u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4bd794: 0x552021  addu        $a0, $v0, $s5
    ctx->pc = 0x4bd794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x4bd798: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x4bd798u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd79c: 0x0  nop
    ctx->pc = 0x4bd79cu;
    // NOP
label_4bd7a0:
    // 0x4bd7a0: 0x4604a002  mul.s       $f0, $f20, $f4
    ctx->pc = 0x4bd7a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x4bd7a4: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x4bd7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4bd7a8: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x4bd7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x4bd7ac: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x4bd7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4bd7b0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4bd7b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x4bd7b4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x4bd7b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4bd7b8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4bd7b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4bd7bc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4bd7bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x4bd7c0: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x4bd7c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x4bd7c4: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x4bd7c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x4bd7c8: 0x46020d00  add.s       $f20, $f1, $f2
    ctx->pc = 0x4bd7c8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4bd7cc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4bd7ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4bd7d0: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x4bd7d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x4bd7d4: 0x1ca0fff2  bgtz        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x4BD7D4u;
    {
        const bool branch_taken_0x4bd7d4 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x4BD7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD7D4u;
        // 0x4bd7d8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd7d4) {
            ctx->pc = 0x4BD7A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bd7a0;
        }
    }
    ctx->pc = 0x4BD7DCu;
label_4bd7dc:
    // 0x4bd7dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4bd7dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x4bd7e0: 0xc12f98c  jal         func_4BE630
    ctx->pc = 0x4BD7E0u;
    SET_GPR_U32(ctx, 31, 0x4BD7E8u);
    ctx->pc = 0x4BD7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BD7E0u;
    // 0x4bd7e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE630u, 0x4BD7E0u, 0x4BD7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BD7E8u;
label_4bd7e8:
    // 0x4bd7e8: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x4bd7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x4bd7ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x4bd7ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4bd7f0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4bd7f0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x4bd7f4: 0xafa0014c  sw          $zero, 0x14C($sp)
    ctx->pc = 0x4bd7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
    // 0x4bd7f8: 0xc12e2d6  jal         func_4B8B58
    ctx->pc = 0x4BD7F8u;
    SET_GPR_U32(ctx, 31, 0x4BD800u);
    ctx->pc = 0x4BD7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BD7F8u;
    // 0x4bd7fc: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8B58u, 0x4BD7F8u, 0x4BD800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BD800u;
label_4bd800:
    // 0x4bd800: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x4bd800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x4bd804: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4bd804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4bd808: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4bd808u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4bd80c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x4bd80cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x4bd810: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4bd810u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4bd814: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x4bd814u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x4bd818: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x4bd818u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bd81c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4bd81cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4bd820: 0x1a400011  blez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x4BD820u;
    {
        const bool branch_taken_0x4bd820 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x4BD824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD820u;
        // 0x4bd824: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd820) {
            ctx->pc = 0x4BD868u;
            goto label_4bd868;
        }
    }
    ctx->pc = 0x4BD828u;
    // 0x4bd828: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x4bd828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x4bd82c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x4bd82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4bd830: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4bd830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4bd834: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x4bd834u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x4bd838: 0x3a22821  addu        $a1, $sp, $v0
    ctx->pc = 0x4bd838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x4bd83c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x4bd83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4bd840: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4bd840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4bd844: 0x922023  subu        $a0, $a0, $s2
    ctx->pc = 0x4bd844u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x4bd848: 0x623007  srav        $a2, $v0, $v1
    ctx->pc = 0x4bd848u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4bd84c: 0x661804  sllv        $v1, $a2, $v1
    ctx->pc = 0x4bd84cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x4bd850: 0x2669821  addu        $s3, $s3, $a2
    ctx->pc = 0x4bd850u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x4bd854: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4bd854u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4bd858: 0x822007  srav        $a0, $v0, $a0
    ctx->pc = 0x4bd858u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x4bd85c: 0xafa4014c  sw          $a0, 0x14C($sp)
    ctx->pc = 0x4bd85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 4));
    // 0x4bd860: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4BD860u;
    {
        const bool branch_taken_0x4bd860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD860u;
        // 0x4bd864: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd860) {
            ctx->pc = 0x4BD8A4u;
            goto label_4bd8a4;
        }
    }
    ctx->pc = 0x4BD868u;
label_4bd868:
    // 0x4bd868: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x4BD868u;
    {
        const bool branch_taken_0x4bd868 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BD86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD868u;
        // 0x4bd86c: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd868) {
            ctx->pc = 0x4BD888u;
            goto label_4bd888;
        }
    }
    ctx->pc = 0x4BD870u;
    // 0x4bd870: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4bd870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4bd874: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x4bd874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x4bd878: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4bd878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4bd87c: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x4bd87cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x4bd880: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4BD880u;
    {
        const bool branch_taken_0x4bd880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD880u;
        // 0x4bd884: 0xafa4014c  sw          $a0, 0x14C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd880) {
            ctx->pc = 0x4BD8A4u;
            goto label_4bd8a4;
        }
    }
    ctx->pc = 0x4BD888u;
label_4bd888:
    // 0x4bd888: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4bd888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x4bd88c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bd88cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bd890: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x4bd890u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4bd894: 0x0  nop
    ctx->pc = 0x4bd894u;
    // NOP
    // 0x4bd898: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x4BD898u;
    {
        const bool branch_taken_0x4bd898 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4BD89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD898u;
        // 0x4bd89c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd898) {
            ctx->pc = 0x4BD8A4u;
            goto label_4bd8a4;
        }
    }
    ctx->pc = 0x4BD8A0u;
    // 0x4bd8a0: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x4bd8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
label_4bd8a4:
    // 0x4bd8a4: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x4bd8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x4bd8a8: 0x18600033  blez        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x4BD8A8u;
    {
        const bool branch_taken_0x4bd8a8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x4bd8a8) {
            ctx->pc = 0x4BD978u;
            goto label_4bd978;
        }
    }
    ctx->pc = 0x4BD8B0u;
    // 0x4bd8b0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4bd8b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x4bd8b4: 0x1a000011  blez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4BD8B4u;
    {
        const bool branch_taken_0x4bd8b4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x4BD8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD8B4u;
        // 0x4bd8b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd8b4) {
            ctx->pc = 0x4BD8FCu;
            goto label_4bd8fc;
        }
    }
    ctx->pc = 0x4BD8BCu;
    // 0x4bd8bc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x4bd8bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4bd8c0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x4bd8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x4bd8c4: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x4bd8c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd8c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4bd8c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd8cc: 0x0  nop
    ctx->pc = 0x4bd8ccu;
    // NOP
label_4bd8d0:
    // 0x4bd8d0: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BD8D0u;
    {
        const bool branch_taken_0x4bd8d0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BD8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD8D0u;
        // 0x4bd8d4: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd8d0) {
            ctx->pc = 0x4BD8E8u;
            goto label_4bd8e8;
        }
    }
    ctx->pc = 0x4BD8D8u;
    // 0x4bd8d8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BD8D8u;
    {
        const bool branch_taken_0x4bd8d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD8D8u;
        // 0x4bd8dc: 0x1051023  subu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd8d8) {
            ctx->pc = 0x4BD8F0u;
            goto label_4bd8f0;
        }
    }
    ctx->pc = 0x4BD8E0u;
    // 0x4bd8e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4BD8E0u;
    {
        const bool branch_taken_0x4bd8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD8E0u;
        // 0x4bd8e4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd8e0) {
            ctx->pc = 0x4BD8ECu;
            goto label_4bd8ec;
        }
    }
    ctx->pc = 0x4BD8E8u;
label_4bd8e8:
    // 0x4bd8e8: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x4bd8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4bd8ec:
    // 0x4bd8ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4bd8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4bd8f0:
    // 0x4bd8f0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4bd8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4bd8f4: 0x14c0fff6  bnez        $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x4BD8F4u;
    {
        const bool branch_taken_0x4bd8f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BD8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD8F4u;
        // 0x4bd8f8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd8f4) {
            ctx->pc = 0x4BD8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bd8d0;
        }
    }
    ctx->pc = 0x4BD8FCu;
label_4bd8fc:
    // 0x4bd8fc: 0x1a400013  blez        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x4BD8FCu;
    {
        const bool branch_taken_0x4bd8fc = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x4BD900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD8FCu;
        // 0x4bd900: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd8fc) {
            ctx->pc = 0x4BD94Cu;
            goto label_4bd94c;
        }
    }
    ctx->pc = 0x4BD904u;
    // 0x4bd904: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BD904u;
    {
        const bool branch_taken_0x4bd904 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x4BD908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD904u;
        // 0x4bd908: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd904) {
            ctx->pc = 0x4BD91Cu;
            goto label_4bd91c;
        }
    }
    ctx->pc = 0x4BD90Cu;
    // 0x4bd90c: 0x12420009  beq         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4BD90Cu;
    {
        const bool branch_taken_0x4bd90c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x4BD910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD90Cu;
        // 0x4bd910: 0x8fa4014c  lw          $a0, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd90c) {
            ctx->pc = 0x4BD934u;
            goto label_4bd934;
        }
    }
    ctx->pc = 0x4BD914u;
    // 0x4bd914: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4BD914u;
    {
        const bool branch_taken_0x4bd914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bd914) {
            ctx->pc = 0x4BD954u;
            goto label_4bd954;
        }
    }
    ctx->pc = 0x4BD91Cu;
label_4bd91c:
    // 0x4bd91c: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x4bd91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x4bd920: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4bd920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4bd924: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x4bd924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x4bd928: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4bd928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bd92c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4BD92Cu;
    {
        const bool branch_taken_0x4bd92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD92Cu;
        // 0x4bd930: 0x3063007f  andi        $v1, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd92c) {
            ctx->pc = 0x4BD948u;
            goto label_4bd948;
        }
    }
    ctx->pc = 0x4BD934u;
label_4bd934:
    // 0x4bd934: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x4bd934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x4bd938: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4bd938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4bd93c: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x4bd93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x4bd940: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4bd940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bd944: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x4bd944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_4bd948:
    // 0x4bd948: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4bd948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4bd94c:
    // 0x4bd94c: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x4bd94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x4bd950: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4bd950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4bd954:
    // 0x4bd954: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4BD954u;
    {
        const bool branch_taken_0x4bd954 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4bd954) {
            ctx->pc = 0x4BD978u;
            goto label_4bd978;
        }
    }
    ctx->pc = 0x4BD95Cu;
    // 0x4bd95c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4bd95cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4bd960: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x4bd960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4bd964: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x4BD964u;
    {
        const bool branch_taken_0x4bd964 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BD968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD964u;
        // 0x4bd968: 0x46146501  sub.s       $f20, $f12, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd964) {
            ctx->pc = 0x4BD978u;
            goto label_4bd978;
        }
    }
    ctx->pc = 0x4BD96Cu;
    // 0x4bd96c: 0xc12f98c  jal         func_4BE630
    ctx->pc = 0x4BD96Cu;
    SET_GPR_U32(ctx, 31, 0x4BD974u);
    ctx->pc = 0x4BD970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BD96Cu;
    // 0x4bd970: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE630u, 0x4BD96Cu, 0x4BD974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BD974u;
label_4bd974:
    // 0x4bd974: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x4bd974u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_4bd978:
    // 0x4bd978: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4bd978u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bd97c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x4bd97cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4bd980: 0x0  nop
    ctx->pc = 0x4bd980u;
    // NOP
    // 0x4bd984: 0x45000053  bc1f        . + 4 + (0x53 << 2)
    ctx->pc = 0x4BD984u;
    {
        const bool branch_taken_0x4bd984 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4BD988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD984u;
        // 0x4bd988: 0x2606ffff  addiu       $a2, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd984) {
            ctx->pc = 0x4BDAD4u;
            goto label_4bdad4;
        }
    }
    ctx->pc = 0x4BD98Cu;
    // 0x4bd98c: 0xd4102a  slt         $v0, $a2, $s4
    ctx->pc = 0x4bd98cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x4bd990: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4BD990u;
    {
        const bool branch_taken_0x4bd990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BD994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD990u;
        // 0x4bd994: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd990) {
            ctx->pc = 0x4BD9BCu;
            goto label_4bd9bc;
        }
    }
    ctx->pc = 0x4BD998u;
    // 0x4bd998: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4bd998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4bd99c: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x4bd99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_4bd9a0:
    // 0x4bd9a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4bd9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4bd9a4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4bd9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4bd9a8: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x4bd9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x4bd9ac: 0xd4102a  slt         $v0, $a2, $s4
    ctx->pc = 0x4bd9acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x4bd9b0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4bd9b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x4bd9b4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4BD9B4u;
    {
        const bool branch_taken_0x4bd9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bd9b4) {
            ctx->pc = 0x4BD9A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bd9a0;
        }
    }
    ctx->pc = 0x4BD9BCu;
label_4bd9bc:
    // 0x4bd9bc: 0x14a00042  bnez        $a1, . + 4 + (0x42 << 2)
    ctx->pc = 0x4BD9BCu;
    {
        const bool branch_taken_0x4bd9bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BD9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD9BCu;
        // 0x4bd9c0: 0x2682ffff  addiu       $v0, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd9bc) {
            ctx->pc = 0x4BDAC8u;
            goto label_4bdac8;
        }
    }
    ctx->pc = 0x4BD9C4u;
    // 0x4bd9c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4bd9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4bd9c8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x4bd9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x4bd9cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4bd9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4bd9d0: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x4BD9D0u;
    {
        const bool branch_taken_0x4bd9d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BD9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD9D0u;
        // 0x4bd9d4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd9d0) {
            ctx->pc = 0x4BDA04u;
            goto label_4bda04;
        }
    }
    ctx->pc = 0x4BD9D8u;
    // 0x4bd9d8: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x4bd9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4bd9dc: 0x0  nop
    ctx->pc = 0x4bd9dcu;
    // NOP
label_4bd9e0:
    // 0x4bd9e0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4bd9e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4bd9e4: 0x2881023  subu        $v0, $s4, $t0
    ctx->pc = 0x4bd9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x4bd9e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4bd9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4bd9ec: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x4bd9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x4bd9f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4bd9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4bd9f4: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4BD9F4u;
    {
        const bool branch_taken_0x4bd9f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bd9f4) {
            ctx->pc = 0x4BD9E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bd9e0;
        }
    }
    ctx->pc = 0x4BD9FCu;
    // 0x4bd9fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4BD9FCu;
    {
        const bool branch_taken_0x4bd9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BDA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BD9FCu;
        // 0x4bda00: 0x2082021  addu        $a0, $s0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd9fc) {
            ctx->pc = 0x4BDA0Cu;
            goto label_4bda0c;
        }
    }
    ctx->pc = 0x4BDA04u;
label_4bda04:
    // 0x4bda04: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x4bda04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4bda08: 0x2082021  addu        $a0, $s0, $t0
    ctx->pc = 0x4bda08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_4bda0c:
    // 0x4bda0c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x4bda0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bda10: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x4bda10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x4bda14: 0x1440ff55  bnez        $v0, . + 4 + (-0xAB << 2)
    ctx->pc = 0x4BDA14u;
    {
        const bool branch_taken_0x4bda14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BDA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDA14u;
        // 0x4bda18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bda14) {
            ctx->pc = 0x4BD76Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bd76c;
        }
    }
    ctx->pc = 0x4BDA1Cu;
    // 0x4bda1c: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x4bda1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4bda20: 0x2a2b0000  slti        $t3, $s1, 0x0
    ctx->pc = 0x4bda20u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4bda24: 0x0  nop
    ctx->pc = 0x4bda24u;
    // NOP
label_4bda28:
    // 0x4bda28: 0x8fa50148  lw          $a1, 0x148($sp)
    ctx->pc = 0x4bda28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x4bda2c: 0x2c61021  addu        $v0, $s6, $a2
    ctx->pc = 0x4bda2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x4bda30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4bda30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4bda34: 0x2265021  addu        $t2, $s1, $a2
    ctx->pc = 0x4bda34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x4bda38: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4bda38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4bda3c: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x4bda3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x4bda40: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4bda40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4bda44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4bda44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4bda48: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x4bda48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x4bda4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4bda4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bda50: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4bda50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4bda54: 0x15600013  bnez        $t3, . + 4 + (0x13 << 2)
    ctx->pc = 0x4BDA54u;
    {
        const bool branch_taken_0x4bda54 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BDA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDA54u;
        // 0x4bda58: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bda54) {
            ctx->pc = 0x4BDAA4u;
            goto label_4bdaa4;
        }
    }
    ctx->pc = 0x4BDA5Cu;
    // 0x4bda5c: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x4bda5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4bda60: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x4bda60u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4bda64: 0x0  nop
    ctx->pc = 0x4bda64u;
    // NOP
label_4bda68:
    // 0x4bda68: 0x1451023  subu        $v0, $t2, $a1
    ctx->pc = 0x4bda68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x4bda6c: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x4bda6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x4bda70: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4bda70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4bda74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4bda74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4bda78: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x4bda78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4bda7c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4bda7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4bda80: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x4bda80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4bda84: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4bda84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4bda88: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x4bda88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4bda8c: 0x225102a  slt         $v0, $s1, $a1
    ctx->pc = 0x4bda8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x4bda90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4bda90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4bda94: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4BDA94u;
    {
        const bool branch_taken_0x4bda94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BDA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDA94u;
        // 0x4bda98: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bda94) {
            ctx->pc = 0x4BDA68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bda68;
        }
    }
    ctx->pc = 0x4BDA9Cu;
    // 0x4bda9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4BDA9Cu;
    {
        const bool branch_taken_0x4bda9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BDAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDA9Cu;
        // 0x4bdaa0: 0x2a71821  addu        $v1, $s5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bda9c) {
            ctx->pc = 0x4BDAB0u;
            goto label_4bdab0;
        }
    }
    ctx->pc = 0x4BDAA4u;
label_4bdaa4:
    // 0x4bdaa4: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x4bdaa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4bdaa8: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x4bdaa8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4bdaac: 0x2a71821  addu        $v1, $s5, $a3
    ctx->pc = 0x4bdaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_4bdab0:
    // 0x4bdab0: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4bdab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bdab4: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x4bdab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x4bdab8: 0x1040ffdb  beqz        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x4BDAB8u;
    {
        const bool branch_taken_0x4bdab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BDABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDAB8u;
        // 0x4bdabc: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bdab8) {
            ctx->pc = 0x4BDA28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bda28;
        }
    }
    ctx->pc = 0x4BDAC0u;
    // 0x4bdac0: 0x1000ff2a  b           . + 4 + (-0xD6 << 2)
    ctx->pc = 0x4BDAC0u;
    {
        const bool branch_taken_0x4bdac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BDAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDAC0u;
        // 0x4bdac4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bdac0) {
            ctx->pc = 0x4BD76Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bd76c;
        }
    }
    ctx->pc = 0x4BDAC8u;
label_4bdac8:
    // 0x4bdac8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4bdac8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bdacc: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x4bdaccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4bdad0: 0x0  nop
    ctx->pc = 0x4bdad0u;
    // NOP
label_4bdad4:
    // 0x4bdad4: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x4BDAD4u;
    {
        const bool branch_taken_0x4bdad4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4BDAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDAD4u;
        // 0x4bdad8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bdad4) {
            ctx->pc = 0x4BDB1Cu;
            goto label_4bdb1c;
        }
    }
    ctx->pc = 0x4BDADCu;
    // 0x4bdadc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x4bdadcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x4bdae0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x4bdae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x4bdae4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x4bdae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x4bdae8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4bdae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4bdaec: 0x1480002c  bnez        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x4BDAECu;
    {
        const bool branch_taken_0x4bdaec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BDAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDAECu;
        // 0x4bdaf0: 0x2652fff8  addiu       $s2, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bdaec) {
            ctx->pc = 0x4BDBA0u;
            goto label_4bdba0;
        }
    }
    ctx->pc = 0x4BDAF4u;
    // 0x4bdaf4: 0x32710007  andi        $s1, $s3, 0x7
    ctx->pc = 0x4bdaf4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
label_4bdaf8:
    // 0x4bdaf8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x4bdaf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x4bdafc: 0x2652fff8  addiu       $s2, $s2, -0x8
    ctx->pc = 0x4bdafcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    // 0x4bdb00: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x4bdb00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x4bdb04: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x4bdb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x4bdb08: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4bdb08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4bdb0c: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4BDB0Cu;
    {
        const bool branch_taken_0x4bdb0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bdb0c) {
            ctx->pc = 0x4BDAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bdaf8;
        }
    }
    ctx->pc = 0x4BDB14u;
    // 0x4bdb14: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x4BDB14u;
    {
        const bool branch_taken_0x4bdb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bdb14) {
            ctx->pc = 0x4BDBA4u;
            goto label_4bdba4;
        }
    }
    ctx->pc = 0x4BDB1Cu;
label_4bdb1c:
    // 0x4bdb1c: 0xc12f98c  jal         func_4BE630
    ctx->pc = 0x4BDB1Cu;
    SET_GPR_U32(ctx, 31, 0x4BDB24u);
    ctx->pc = 0x4BDB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BDB1Cu;
    // 0x4bdb20: 0x122023  negu        $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE630u, 0x4BDB1Cu, 0x4BDB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BDB24u;
label_4bdb24:
    // 0x4bdb24: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x4bdb24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x4bdb28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4bdb28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4bdb2c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4bdb2cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x4bdb30: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x4bdb30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4bdb34: 0x0  nop
    ctx->pc = 0x4bdb34u;
    // NOP
    // 0x4bdb38: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x4BDB38u;
    {
        const bool branch_taken_0x4bdb38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4BDB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDB38u;
        // 0x4bdb3c: 0x3be2021  addu        $a0, $sp, $fp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bdb38) {
            ctx->pc = 0x4BDB8Cu;
            goto label_4bdb8c;
        }
    }
    ctx->pc = 0x4BDB40u;
    // 0x4bdb40: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x4bdb40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x4bdb44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4bdb44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4bdb48: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4bdb48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4bdb4c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x4bdb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x4bdb50: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x4bdb50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x4bdb54: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x4bdb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x4bdb58: 0x32710007  andi        $s1, $s3, 0x7
    ctx->pc = 0x4bdb58u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x4bdb5c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4bdb5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x4bdb60: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x4bdb60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4bdb64: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4bdb64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4bdb68: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4bdb68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x4bdb6c: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x4bdb6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x4bdb70: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x4bdb70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x4bdb74: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4bdb74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4bdb78: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x4bdb78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x4bdb7c: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4bdb7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4bdb80: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x4bdb80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x4bdb84: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4BDB84u;
    {
        const bool branch_taken_0x4bdb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BDB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDB84u;
        // 0x4bdb88: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bdb84) {
            ctx->pc = 0x4BDBA4u;
            goto label_4bdba4;
        }
    }
    ctx->pc = 0x4BDB8Cu;
label_4bdb8c:
    // 0x4bdb8c: 0x3be1021  addu        $v0, $sp, $fp
    ctx->pc = 0x4bdb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 30)));
    // 0x4bdb90: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4bdb90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4bdb94: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x4bdb94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x4bdb98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4BDB98u;
    {
        const bool branch_taken_0x4bdb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BDB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDB98u;
        // 0x4bdb9c: 0x32710007  andi        $s1, $s3, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bdb98) {
            ctx->pc = 0x4BDBA4u;
            goto label_4bdba4;
        }
    }
    ctx->pc = 0x4BDBA0u;
label_4bdba0:
    // 0x4bdba0: 0x32710007  andi        $s1, $s3, 0x7
    ctx->pc = 0x4bdba0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
label_4bdba4:
    // 0x4bdba4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4bdba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4bdba8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x4bdba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4bdbac: 0xc12f98c  jal         func_4BE630
    ctx->pc = 0x4BDBACu;
    SET_GPR_U32(ctx, 31, 0x4BDBB4u);
    ctx->pc = 0x4BDBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BDBACu;
    // 0x4bdbb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BE630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BE630u, 0x4BDBACu, 0x4BDBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BDBB4u;
label_4bdbb4:
    // 0x4bdbb4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4bdbb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bdbb8: 0x4c00011  bltz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x4BDBB8u;
    {
        const bool branch_taken_0x4bdbb8 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x4BDBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDBB8u;
        // 0x4bdbbc: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bdbb8) {
            ctx->pc = 0x4BDC00u;
            goto label_4bdc00;
        }
    }
    ctx->pc = 0x4BDBC0u;
    // 0x4bdbc0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4bdbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4bdbc4: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x4bdbc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x4bdbc8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4bdbc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4bdbcc: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x4bdbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x4bdbd0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x4bdbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x4bdbd4: 0x0  nop
    ctx->pc = 0x4bdbd4u;
    // NOP
label_4bdbd8:
    // 0x4bdbd8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x4bdbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4bdbdc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4bdbdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4bdbe0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4bdbe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4bdbe4: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x4bdbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x4bdbe8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x4bdbe8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x4bdbec: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x4bdbecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x4bdbf0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x4bdbf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x4bdbf4: 0x4c1fff8  bgez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4BDBF4u;
    {
        const bool branch_taken_0x4bdbf4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x4BDBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDBF4u;
        // 0x4bdbf8: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bdbf4) {
            ctx->pc = 0x4BDBD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bdbd8;
        }
    }
    ctx->pc = 0x4BDBFCu;
    // 0x4bdbfc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4bdbfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bdc00:
    // 0x4bdc00: 0x4c20027  bltzl       $a2, . + 4 + (0x27 << 2)
    ctx->pc = 0x4BDC00u;
    {
        const bool branch_taken_0x4bdc00 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x4bdc00) {
            ctx->pc = 0x4BDC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BDC00u;
            // 0x4bdc04: 0x8fa30150  lw          $v1, 0x150($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BDCA0u;
            goto label_4bdca0;
        }
    }
    ctx->pc = 0x4BDC08u;
    // 0x4bdc08: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x4bdc08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x4bdc0c: 0x0  nop
    ctx->pc = 0x4bdc0cu;
    // NOP
label_4bdc10:
    // 0x4bdc10: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x4bdc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x4bdc14: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4bdc14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4bdc18: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x4BDC18u;
    {
        const bool branch_taken_0x4bdc18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BDC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDC18u;
        // 0x4bdc1c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bdc18) {
            ctx->pc = 0x4BDC80u;
            goto label_4bdc80;
        }
    }
    ctx->pc = 0x4BDC20u;
    // 0x4bdc20: 0x2064823  subu        $t1, $s0, $a2
    ctx->pc = 0x4bdc20u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x4bdc24: 0x5200017  bltz        $t1, . + 4 + (0x17 << 2)
    ctx->pc = 0x4BDC24u;
    {
        const bool branch_taken_0x4bdc24 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x4BDC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDC24u;
        // 0x4bdc28: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bdc24) {
            ctx->pc = 0x4BDC84u;
            goto label_4bdc84;
        }
    }
    ctx->pc = 0x4BDC2Cu;
    // 0x4bdc2c: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x4bdc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4bdc30: 0x3c0b0059  lui         $t3, 0x59
    ctx->pc = 0x4bdc30u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)89 << 16));
    // 0x4bdc34: 0x0  nop
    ctx->pc = 0x4bdc34u;
    // NOP
label_4bdc38:
    // 0x4bdc38: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x4bdc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x4bdc3c: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x4bdc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4bdc40: 0x256218f0  addiu       $v0, $t3, 0x18F0
    ctx->pc = 0x4bdc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 6384));
    // 0x4bdc44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4bdc44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4bdc48: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4bdc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4bdc4c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x4bdc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x4bdc50: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x4bdc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4bdc54: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4bdc54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4bdc58: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x4bdc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4bdc5c: 0x288102a  slt         $v0, $s4, $t0
    ctx->pc = 0x4bdc5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x4bdc60: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4bdc60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4bdc64: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4BDC64u;
    {
        const bool branch_taken_0x4bdc64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BDC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDC64u;
        // 0x4bdc68: 0x46001080  add.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bdc64) {
            ctx->pc = 0x4BDC88u;
            goto label_4bdc88;
        }
    }
    ctx->pc = 0x4BDC6Cu;
    // 0x4bdc6c: 0x148102a  slt         $v0, $t2, $t0
    ctx->pc = 0x4bdc6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x4bdc70: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x4BDC70u;
    {
        const bool branch_taken_0x4bdc70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BDC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDC70u;
        // 0x4bdc74: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bdc70) {
            ctx->pc = 0x4BDC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bdc38;
        }
    }
    ctx->pc = 0x4BDC78u;
    // 0x4bdc78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4BDC78u;
    {
        const bool branch_taken_0x4bdc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BDC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDC78u;
        // 0x4bdc7c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bdc78) {
            ctx->pc = 0x4BDC90u;
            goto label_4bdc90;
        }
    }
    ctx->pc = 0x4BDC80u;
label_4bdc80:
    // 0x4bdc80: 0x2064823  subu        $t1, $s0, $a2
    ctx->pc = 0x4bdc80u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_4bdc84:
    // 0x4bdc84: 0x24c5ffff  addiu       $a1, $a2, -0x1
    ctx->pc = 0x4bdc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_4bdc88:
    // 0x4bdc88: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x4bdc88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x4bdc8c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x4bdc8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4bdc90:
    // 0x4bdc90: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x4bdc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4bdc94: 0x4c1ffde  bgez        $a2, . + 4 + (-0x22 << 2)
    ctx->pc = 0x4BDC94u;
    {
        const bool branch_taken_0x4bdc94 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x4BDC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDC94u;
        // 0x4bdc98: 0xe4420000  swc1        $f2, 0x0($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bdc94) {
            ctx->pc = 0x4BDC10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bdc10;
        }
    }
    ctx->pc = 0x4BDC9Cu;
    // 0x4bdc9c: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x4bdc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_4bdca0:
    // 0x4bdca0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4BDCA0u;
    {
        const bool branch_taken_0x4bdca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BDCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDCA0u;
        // 0x4bdca4: 0x8fa40144  lw          $a0, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bdca0) {
            ctx->pc = 0x4BDCC0u;
            goto label_4bdcc0;
        }
    }
    ctx->pc = 0x4BDCA8u;
    // 0x4bdca8: 0x5c80001f  bgtzl       $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x4BDCA8u;
    {
        const bool branch_taken_0x4bdca8 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x4bdca8) {
            ctx->pc = 0x4BDCACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BDCA8u;
            // 0x4bdcac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BDD28u;
            goto label_4bdd28;
        }
    }
    ctx->pc = 0x4BDCB0u;
    // 0x4bdcb0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4BDCB0u;
    {
        const bool branch_taken_0x4bdcb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BDCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDCB0u;
        // 0x4bdcb4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bdcb0) {
            ctx->pc = 0x4BDCD8u;
            goto label_4bdcd8;
        }
    }
    ctx->pc = 0x4BDCB8u;
    // 0x4bdcb8: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x4BDCB8u;
    {
        const bool branch_taken_0x4bdcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BDCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDCB8u;
        // 0x4bdcbc: 0xdfbf01f0  ld          $ra, 0x1F0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bdcb8) {
            ctx->pc = 0x4BDEECu;
            goto label_4bdeec;
        }
    }
    ctx->pc = 0x4BDCC0u;
label_4bdcc0:
    // 0x4bdcc0: 0x8fa50144  lw          $a1, 0x144($sp)
    ctx->pc = 0x4bdcc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x4bdcc4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4bdcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4bdcc8: 0x10a20040  beq         $a1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x4BDCC8u;
    {
        const bool branch_taken_0x4bdcc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x4BDCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDCC8u;
        // 0x4bdccc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bdcc8) {
            ctx->pc = 0x4BDDCCu;
            goto label_4bddcc;
        }
    }
    ctx->pc = 0x4BDCD0u;
    // 0x4bdcd0: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x4BDCD0u;
    {
        const bool branch_taken_0x4bdcd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BDCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDCD0u;
        // 0x4bdcd4: 0xdfbf01f0  ld          $ra, 0x1F0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bdcd0) {
            ctx->pc = 0x4BDEECu;
            goto label_4bdeec;
        }
    }
    ctx->pc = 0x4BDCD8u;
label_4bdcd8:
    // 0x4bdcd8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4bdcd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bdcdc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4bdcdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4bdce0: 0x4c2000b  bltzl       $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x4BDCE0u;
    {
        const bool branch_taken_0x4bdce0 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x4bdce0) {
            ctx->pc = 0x4BDCE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BDCE0u;
            // 0x4bdce4: 0xe6e20000  swc1        $f2, 0x0($s7) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BDD10u;
            goto label_4bdd10;
        }
    }
    ctx->pc = 0x4BDCE8u;
    // 0x4bdce8: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x4bdce8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x4bdcec: 0x0  nop
    ctx->pc = 0x4bdcecu;
    // NOP
label_4bdcf0:
    // 0x4bdcf0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4bdcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4bdcf4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x4bdcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4bdcf8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4bdcf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4bdcfc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4bdcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4bdd00: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x4bdd00u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x4bdd04: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4BDD04u;
    {
        const bool branch_taken_0x4bdd04 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x4bdd04) {
            ctx->pc = 0x4BDCF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bdcf0;
        }
    }
    ctx->pc = 0x4BDD0Cu;
    // 0x4bdd0c: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x4bdd0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_4bdd10:
    // 0x4bdd10: 0x8fa6014c  lw          $a2, 0x14C($sp)
    ctx->pc = 0x4bdd10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x4bdd14: 0x10c00074  beqz        $a2, . + 4 + (0x74 << 2)
    ctx->pc = 0x4BDD14u;
    {
        const bool branch_taken_0x4bdd14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BDD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDD14u;
        // 0x4bdd18: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bdd14) {
            ctx->pc = 0x4BDEE8u;
            goto label_4bdee8;
        }
    }
    ctx->pc = 0x4BDD1Cu;
    // 0x4bdd1c: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x4bdd1cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x4bdd20: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x4BDD20u;
    {
        const bool branch_taken_0x4bdd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BDD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDD20u;
        // 0x4bdd24: 0xe6e00000  swc1        $f0, 0x0($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bdd20) {
            ctx->pc = 0x4BDEE8u;
            goto label_4bdee8;
        }
    }
    ctx->pc = 0x4BDD28u;
label_4bdd28:
    // 0x4bdd28: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4bdd28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4bdd2c: 0x4c0000d  bltz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x4BDD2Cu;
    {
        const bool branch_taken_0x4bdd2c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x4BDD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDD2Cu;
        // 0x4bdd30: 0xc7a300a0  lwc1        $f3, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bdd2c) {
            ctx->pc = 0x4BDD64u;
            goto label_4bdd64;
        }
    }
    ctx->pc = 0x4BDD34u;
    // 0x4bdd34: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x4bdd34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x4bdd38: 0x28c30001  slti        $v1, $a2, 0x1
    ctx->pc = 0x4bdd38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x4bdd3c: 0x0  nop
    ctx->pc = 0x4bdd3cu;
    // NOP
label_4bdd40:
    // 0x4bdd40: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4bdd40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4bdd44: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x4bdd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4bdd48: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4bdd48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4bdd4c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4bdd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4bdd50: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x4bdd50u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x4bdd54: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4BDD54u;
    {
        const bool branch_taken_0x4bdd54 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x4bdd54) {
            ctx->pc = 0x4BDD40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bdd40;
        }
    }
    ctx->pc = 0x4BDD5Cu;
    // 0x4bdd5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4BDD5Cu;
    {
        const bool branch_taken_0x4bdd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BDD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDD5Cu;
        // 0x4bdd60: 0xe6e20000  swc1        $f2, 0x0($s7) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bdd5c) {
            ctx->pc = 0x4BDD6Cu;
            goto label_4bdd6c;
        }
    }
    ctx->pc = 0x4BDD64u;
label_4bdd64:
    // 0x4bdd64: 0x28c30001  slti        $v1, $a2, 0x1
    ctx->pc = 0x4bdd64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x4bdd68: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x4bdd68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_4bdd6c:
    // 0x4bdd6c: 0x8fa8014c  lw          $t0, 0x14C($sp)
    ctx->pc = 0x4bdd6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x4bdd70: 0x51000004  beql        $t0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4BDD70u;
    {
        const bool branch_taken_0x4bdd70 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bdd70) {
            ctx->pc = 0x4BDD74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BDD70u;
            // 0x4bdd74: 0x46021881  sub.s       $f2, $f3, $f2 (Delay Slot)
            ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BDD84u;
            goto label_4bdd84;
        }
    }
    ctx->pc = 0x4BDD78u;
    // 0x4bdd78: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x4bdd78u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x4bdd7c: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x4bdd7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x4bdd80: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x4bdd80u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_4bdd84:
    // 0x4bdd84: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4BDD84u;
    {
        const bool branch_taken_0x4bdd84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BDD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDD84u;
        // 0x4bdd88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bdd84) {
            ctx->pc = 0x4BDDB0u;
            goto label_4bddb0;
        }
    }
    ctx->pc = 0x4BDD8Cu;
    // 0x4bdd8c: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x4bdd8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4bdd90:
    // 0x4bdd90: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4bdd90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4bdd94: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x4bdd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4bdd98: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4bdd98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4bdd9c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4bdd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4bdda0: 0x206182a  slt         $v1, $s0, $a2
    ctx->pc = 0x4bdda0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x4bdda4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x4bdda4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x4bdda8: 0x1060fff9  beqz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4BDDA8u;
    {
        const bool branch_taken_0x4bdda8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bdda8) {
            ctx->pc = 0x4BDD90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bdd90;
        }
    }
    ctx->pc = 0x4BDDB0u;
label_4bddb0:
    // 0x4bddb0: 0xe6e20004  swc1        $f2, 0x4($s7)
    ctx->pc = 0x4bddb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x4bddb4: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x4bddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x4bddb8: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x4BDDB8u;
    {
        const bool branch_taken_0x4bddb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BDDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDDB8u;
        // 0x4bddbc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bddb8) {
            ctx->pc = 0x4BDEE8u;
            goto label_4bdee8;
        }
    }
    ctx->pc = 0x4BDDC0u;
    // 0x4bddc0: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x4bddc0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x4bddc4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x4BDDC4u;
    {
        const bool branch_taken_0x4bddc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BDDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDDC4u;
        // 0x4bddc8: 0xe6e00004  swc1        $f0, 0x4($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bddc4) {
            ctx->pc = 0x4BDEE8u;
            goto label_4bdee8;
        }
    }
    ctx->pc = 0x4BDDCCu;
label_4bddcc:
    // 0x4bddcc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4bddccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bddd0: 0x18c00013  blez        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x4BDDD0u;
    {
        const bool branch_taken_0x4bddd0 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x4BDDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDDD0u;
        // 0x4bddd4: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bddd0) {
            ctx->pc = 0x4BDE20u;
            goto label_4bde20;
        }
    }
    ctx->pc = 0x4BDDD8u;
    // 0x4bddd8: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x4bddd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x4bdddc: 0x0  nop
    ctx->pc = 0x4bdddcu;
    // NOP
label_4bdde0:
    // 0x4bdde0: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x4bdde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4bdde4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4bdde4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4bdde8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x4bdde8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4bddec: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x4bddecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4bddf0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x4bddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x4bddf4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x4bddf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4bddf8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x4bddf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4bddfc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4bddfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bde00: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x4bde00u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4bde04: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x4bde04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x4bde08: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4bde08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4bde0c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x4bde0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x4bde10: 0x1cc0fff3  bgtz        $a2, . + 4 + (-0xD << 2)
    ctx->pc = 0x4BDE10u;
    {
        const bool branch_taken_0x4bde10 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x4BDE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDE10u;
        // 0x4bde14: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bde10) {
            ctx->pc = 0x4BDDE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bdde0;
        }
    }
    ctx->pc = 0x4BDE18u;
    // 0x4bde18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4bde18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bde1c: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x4bde1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_4bde20:
    // 0x4bde20: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x4BDE20u;
    {
        const bool branch_taken_0x4bde20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bde20) {
            ctx->pc = 0x4BDE24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BDE20u;
            // 0x4bde24: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BDE70u;
            goto label_4bde70;
        }
    }
    ctx->pc = 0x4BDE28u;
    // 0x4bde28: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x4bde28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x4bde2c: 0x0  nop
    ctx->pc = 0x4bde2cu;
    // NOP
label_4bde30:
    // 0x4bde30: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x4bde30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4bde34: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4bde34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4bde38: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x4bde38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4bde3c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x4bde3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4bde40: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x4bde40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x4bde44: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x4bde44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4bde48: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x4bde48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4bde4c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4bde4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bde50: 0x28c50002  slti        $a1, $a2, 0x2
    ctx->pc = 0x4bde50u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4bde54: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x4bde54u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4bde58: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x4bde58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x4bde5c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4bde5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4bde60: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x4bde60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x4bde64: 0x10a0fff2  beqz        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x4BDE64u;
    {
        const bool branch_taken_0x4bde64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BDE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDE64u;
        // 0x4bde68: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bde64) {
            ctx->pc = 0x4BDE30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bde30;
        }
    }
    ctx->pc = 0x4BDE6Cu;
    // 0x4bde6c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4bde6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bde70:
    // 0x4bde70: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4bde70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4bde74: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x4bde74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4bde78: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4BDE78u;
    {
        const bool branch_taken_0x4bde78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BDE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDE78u;
        // 0x4bde7c: 0xc7a300a0  lwc1        $f3, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bde78) {
            ctx->pc = 0x4BDEB0u;
            goto label_4bdeb0;
        }
    }
    ctx->pc = 0x4BDE80u;
    // 0x4bde80: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x4bde80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x4bde84: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x4bde84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4bde88:
    // 0x4bde88: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4bde88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4bde8c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x4bde8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4bde90: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4bde90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4bde94: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4bde94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4bde98: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x4bde98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4bde9c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x4bde9cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x4bdea0: 0x1060fff9  beqz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4BDEA0u;
    {
        const bool branch_taken_0x4bdea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bdea0) {
            ctx->pc = 0x4BDE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bde88;
        }
    }
    ctx->pc = 0x4BDEA8u;
    // 0x4bdea8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4BDEA8u;
    {
        const bool branch_taken_0x4bdea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BDEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDEA8u;
        // 0x4bdeac: 0x8fa3014c  lw          $v1, 0x14C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bdea8) {
            ctx->pc = 0x4BDEB8u;
            goto label_4bdeb8;
        }
    }
    ctx->pc = 0x4BDEB0u;
label_4bdeb0:
    // 0x4bdeb0: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x4bdeb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4bdeb4: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x4bdeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_4bdeb8:
    // 0x4bdeb8: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BDEB8u;
    {
        const bool branch_taken_0x4bdeb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bdeb8) {
            ctx->pc = 0x4BDEBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BDEB8u;
            // 0x4bdebc: 0x46001807  neg.s       $f0, $f3 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BDED0u;
            goto label_4bded0;
        }
    }
    ctx->pc = 0x4BDEC0u;
    // 0x4bdec0: 0xe6e20008  swc1        $f2, 0x8($s7)
    ctx->pc = 0x4bdec0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x4bdec4: 0xe6e30000  swc1        $f3, 0x0($s7)
    ctx->pc = 0x4bdec4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x4bdec8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4BDEC8u;
    {
        const bool branch_taken_0x4bdec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BDECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDEC8u;
        // 0x4bdecc: 0xe6e10004  swc1        $f1, 0x4($s7) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bdec8) {
            ctx->pc = 0x4BDEE4u;
            goto label_4bdee4;
        }
    }
    ctx->pc = 0x4BDED0u;
label_4bded0:
    // 0x4bded0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x4bded0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x4bded4: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x4bded4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x4bded8: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x4bded8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x4bdedc: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x4bdedcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x4bdee0: 0xe6e20008  swc1        $f2, 0x8($s7)
    ctx->pc = 0x4bdee0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_4bdee4:
    // 0x4bdee4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4bdee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4bdee8:
    // 0x4bdee8: 0xdfbf01f0  ld          $ra, 0x1F0($sp)
    ctx->pc = 0x4bdee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 496)));
label_4bdeec:
    // 0x4bdeec: 0xdfbe01e0  ld          $fp, 0x1E0($sp)
    ctx->pc = 0x4bdeecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x4bdef0: 0xdfb701d0  ld          $s7, 0x1D0($sp)
    ctx->pc = 0x4bdef0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x4bdef4: 0xdfb601c0  ld          $s6, 0x1C0($sp)
    ctx->pc = 0x4bdef4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x4bdef8: 0xdfb501b0  ld          $s5, 0x1B0($sp)
    ctx->pc = 0x4bdef8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x4bdefc: 0xdfb401a0  ld          $s4, 0x1A0($sp)
    ctx->pc = 0x4bdefcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x4bdf00: 0xdfb30190  ld          $s3, 0x190($sp)
    ctx->pc = 0x4bdf00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x4bdf04: 0xdfb20180  ld          $s2, 0x180($sp)
    ctx->pc = 0x4bdf04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x4bdf08: 0xdfb10170  ld          $s1, 0x170($sp)
    ctx->pc = 0x4bdf08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x4bdf0c: 0xdfb00160  ld          $s0, 0x160($sp)
    ctx->pc = 0x4bdf0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x4bdf10: 0xc7b40200  lwc1        $f20, 0x200($sp)
    ctx->pc = 0x4bdf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4bdf14: 0x3e00008  jr          $ra
    ctx->pc = 0x4BDF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BDF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BDF14u;
        // 0x4bdf18: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BDF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BDF1Cu;
    // 0x4bdf1c: 0x0  nop
    ctx->pc = 0x4bdf1cu;
    // NOP
    ctx->pc = 0x4bdf20u;
}
