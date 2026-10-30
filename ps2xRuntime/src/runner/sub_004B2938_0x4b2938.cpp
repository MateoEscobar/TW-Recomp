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

// Function: sub_004B2938
// Address: 0x4b2938 - 0x4b2ad0
void sub_004B2938_0x4b2938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B2938_0x4b2938");
#endif

    switch (ctx->pc) {
        case 0x4b2990u: goto label_4b2990;
        case 0x4b29bcu: goto label_4b29bc;
        case 0x4b29d0u: goto label_4b29d0;
        case 0x4b29f4u: goto label_4b29f4;
        case 0x4b2a30u: goto label_4b2a30;
        case 0x4b2a4cu: goto label_4b2a4c;
        case 0x4b2a80u: goto label_4b2a80;
        default: break;
    }

    ctx->pc = 0x4b2938u;

    // 0x4b2938: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4b2938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x4b293c: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x4b293cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x4b2940: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x4b2940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x4b2944: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x4b2944u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2948: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x4b2948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x4b294c: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x4b294cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2950: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x4b2950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x4b2954: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x4b2954u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2958: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4b2958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4b295c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x4b295cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2960: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x4b2960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x4b2964: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x4b2964u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2968: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4b2968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4b296c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4b296cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2970: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4b2970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x4b2974: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x4b2974u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2978: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b2978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4b297c: 0x12c00037  beqz        $s6, . + 4 + (0x37 << 2)
    ctx->pc = 0x4B297Cu;
    {
        const bool branch_taken_0x4b297c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B297Cu;
        // 0x4b2980: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b297c) {
            ctx->pc = 0x4B2A5Cu;
            goto label_4b2a5c;
        }
    }
    ctx->pc = 0x4B2984u;
    // 0x4b2984: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x4B2984u;
    {
        const bool branch_taken_0x4b2984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2984u;
        // 0x4b2988: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2984) {
            ctx->pc = 0x4B2A5Cu;
            goto label_4b2a5c;
        }
    }
    ctx->pc = 0x4B298Cu;
    // 0x4b298c: 0x0  nop
    ctx->pc = 0x4b298cu;
    // NOP
label_4b2990:
    // 0x4b2990: 0x54b7000c  bnel        $a1, $s7, . + 4 + (0xC << 2)
    ctx->pc = 0x4B2990u;
    {
        const bool branch_taken_0x4b2990 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 23));
        if (branch_taken_0x4b2990) {
            ctx->pc = 0x4B2994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B2990u;
            // 0x4b2994: 0xa2450000  sb          $a1, 0x0($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B29C4u;
            goto label_4b29c4;
        }
    }
    ctx->pc = 0x4B2998u;
    // 0x4b2998: 0x1aa00004  blez        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B2998u;
    {
        const bool branch_taken_0x4b2998 = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x4b2998) {
            ctx->pc = 0x4B29ACu;
            goto label_4b29ac;
        }
    }
    ctx->pc = 0x4B29A0u;
    // 0x4b29a0: 0xa2450000  sb          $a1, 0x0($s2)
    ctx->pc = 0x4b29a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x4b29a4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x4B29A4u;
    {
        const bool branch_taken_0x4b29a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B29A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B29A4u;
        // 0x4b29a8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b29a4) {
            ctx->pc = 0x4B2A98u;
            goto label_4b2a98;
        }
    }
    ctx->pc = 0x4B29ACu;
label_4b29ac:
    // 0x4b29ac: 0x6a1003b  bgez        $s5, . + 4 + (0x3B << 2)
    ctx->pc = 0x4B29ACu;
    {
        const bool branch_taken_0x4b29ac = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x4B29B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B29ACu;
        // 0x4b29b0: 0x25e1023  subu        $v0, $s2, $fp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b29ac) {
            ctx->pc = 0x4B2A9Cu;
            goto label_4b2a9c;
        }
    }
    ctx->pc = 0x4B29B4u;
    // 0x4b29b4: 0xc12c4fe  jal         func_4B13F8
    ctx->pc = 0x4B29B4u;
    SET_GPR_U32(ctx, 31, 0x4B29BCu);
    ctx->pc = 0x4B29B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B29B4u;
    // 0x4b29b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B13F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B13F8u, 0x4B29B4u, 0x4B29BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B29BCu;
label_4b29bc:
    // 0x4b29bc: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x4B29BCu;
    {
        const bool branch_taken_0x4b29bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B29C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B29BCu;
        // 0x4b29c0: 0x25e1023  subu        $v0, $s2, $fp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b29bc) {
            ctx->pc = 0x4B2A9Cu;
            goto label_4b2a9c;
        }
    }
    ctx->pc = 0x4B29C4u;
label_4b29c4:
    // 0x4b29c4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x4b29c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x4b29c8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x4B29C8u;
    {
        const bool branch_taken_0x4b29c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B29CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B29C8u;
        // 0x4b29cc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b29c8) {
            ctx->pc = 0x4B2A5Cu;
            goto label_4b2a5c;
        }
    }
    ctx->pc = 0x4B29D0u;
label_4b29d0:
    // 0x4b29d0: 0x6803c  dsll32      $s0, $a2, 0
    ctx->pc = 0x4b29d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) << (32 + 0));
    // 0x4b29d4: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x4b29d4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x4b29d8: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x4b29d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x4b29dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B29DCu;
    {
        const bool branch_taken_0x4b29dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B29E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B29DCu;
        // 0x4b29e0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b29dc) {
            ctx->pc = 0x4B29ECu;
            goto label_4b29ec;
        }
    }
    ctx->pc = 0x4B29E4u;
    // 0x4b29e4: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x4b29e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x4b29e8: 0x2803f  dsra32      $s0, $v0, 0
    ctx->pc = 0x4b29e8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 2) >> (32 + 0));
label_4b29ec:
    // 0x4b29ec: 0xc10c130  jal         func_4304C0
    ctx->pc = 0x4B29ECu;
    SET_GPR_U32(ctx, 31, 0x4B29F4u);
    ctx->pc = 0x4B29F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B29ECu;
    // 0x4b29f0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4304C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4304C0u, 0x4B29ECu, 0x4B29F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B29F4u;
label_4b29f4:
    // 0x4b29f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4b29f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b29f8: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4B29F8u;
    {
        const bool branch_taken_0x4b29f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B29FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B29F8u;
        // 0x4b29fc: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b29f8) {
            ctx->pc = 0x4B2A3Cu;
            goto label_4b2a3c;
        }
    }
    ctx->pc = 0x4B2A00u;
    // 0x4b2a00: 0x25ea023  subu        $s4, $s2, $fp
    ctx->pc = 0x4b2a00u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
    // 0x4b2a04: 0x6a00005  bltz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B2A04u;
    {
        const bool branch_taken_0x4b2a04 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x4B2A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2A04u;
        // 0x4b2a08: 0x2253023  subu        $a2, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2a04) {
            ctx->pc = 0x4B2A1Cu;
            goto label_4b2a1c;
        }
    }
    ctx->pc = 0x4B2A0Cu;
    // 0x4b2a0c: 0x2aa30001  slti        $v1, $s5, 0x1
    ctx->pc = 0x4b2a0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x4b2a10: 0x64c20001  daddiu      $v0, $a2, 0x1
    ctx->pc = 0x4b2a10u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)1);
    // 0x4b2a14: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x4b2a14u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x4b2a18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4b2a18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4b2a1c:
    // 0x4b2a1c: 0x6803c  dsll32      $s0, $a2, 0
    ctx->pc = 0x4b2a1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) << (32 + 0));
    // 0x4b2a20: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x4b2a20u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x4b2a24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b2a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2a28: 0xc10c190  jal         func_430640
    ctx->pc = 0x4B2A28u;
    SET_GPR_U32(ctx, 31, 0x4B2A30u);
    ctx->pc = 0x4B2A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2A28u;
    // 0x4b2a2c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x4B2A28u, 0x4B2A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2A30u;
label_4b2a30:
    // 0x4b2a30: 0xae710004  sw          $s1, 0x4($s3)
    ctx->pc = 0x4b2a30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
    // 0x4b2a34: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x4B2A34u;
    {
        const bool branch_taken_0x4b2a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2A34u;
        // 0x4b2a38: 0x2901021  addu        $v0, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2a34) {
            ctx->pc = 0x4B2A9Cu;
            goto label_4b2a9c;
        }
    }
    ctx->pc = 0x4B2A3Cu;
label_4b2a3c:
    // 0x4b2a3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b2a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2a40: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4b2a40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2a44: 0xc10c190  jal         func_430640
    ctx->pc = 0x4B2A44u;
    SET_GPR_U32(ctx, 31, 0x4B2A4Cu);
    ctx->pc = 0x4B2A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2A44u;
    // 0x4b2a48: 0x290a023  subu        $s4, $s4, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x4B2A44u, 0x4B2A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2A4Cu;
label_4b2a4c:
    // 0x4b2a4c: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x4b2a4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x4b2a50: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x4b2a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4b2a54: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4b2a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4b2a58: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x4b2a58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_4b2a5c:
    // 0x4b2a5c: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x4B2A5Cu;
    {
        const bool branch_taken_0x4b2a5c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2A5Cu;
        // 0x4b2a60: 0x25e1023  subu        $v0, $s2, $fp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2a5c) {
            ctx->pc = 0x4B2A9Cu;
            goto label_4b2a9c;
        }
    }
    ctx->pc = 0x4B2A64u;
    // 0x4b2a64: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x4b2a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4b2a68: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x4b2a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4b2a6c: 0x443023  subu        $a2, $v0, $a0
    ctx->pc = 0x4b2a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4b2a70: 0x1cc0ffd7  bgtz        $a2, . + 4 + (-0x29 << 2)
    ctx->pc = 0x4B2A70u;
    {
        const bool branch_taken_0x4b2a70 = (GPR_S32(ctx, 6) > 0);
        if (branch_taken_0x4b2a70) {
            ctx->pc = 0x4B29D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b29d0;
        }
    }
    ctx->pc = 0x4B2A78u;
    // 0x4b2a78: 0xc12c35a  jal         func_4B0D68
    ctx->pc = 0x4B2A78u;
    SET_GPR_U32(ctx, 31, 0x4B2A80u);
    ctx->pc = 0x4B2A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2A78u;
    // 0x4b2a7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0D68u, 0x4B2A78u, 0x4B2A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2A80u;
label_4b2a80:
    // 0x4b2a80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4b2a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b2a84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b2a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4b2a88: 0x14a2ffc1  bne         $a1, $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x4B2A88u;
    {
        const bool branch_taken_0x4b2a88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x4b2a88) {
            ctx->pc = 0x4B2990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b2990;
        }
    }
    ctx->pc = 0x4B2A90u;
    // 0x4b2a90: 0x56c00001  bnel        $s6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4B2A90u;
    {
        const bool branch_taken_0x4b2a90 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b2a90) {
            ctx->pc = 0x4B2A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B2A90u;
            // 0x4b2a94: 0xaec50000  sw          $a1, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B2A98u;
            goto label_4b2a98;
        }
    }
    ctx->pc = 0x4B2A98u;
label_4b2a98:
    // 0x4b2a98: 0x25e1023  subu        $v0, $s2, $fp
    ctx->pc = 0x4b2a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
label_4b2a9c:
    // 0x4b2a9c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4b2a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4b2aa0: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x4b2aa0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4b2aa4: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x4b2aa4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4b2aa8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x4b2aa8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4b2aac: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x4b2aacu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b2ab0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4b2ab0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b2ab4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x4b2ab4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b2ab8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4b2ab8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b2abc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b2abcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b2ac0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b2ac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b2ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x4B2AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B2AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2AC4u;
        // 0x4b2ac8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B2AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B2ACCu;
    // 0x4b2acc: 0x0  nop
    ctx->pc = 0x4b2accu;
    // NOP
    ctx->pc = 0x4b2ad0u;
}
