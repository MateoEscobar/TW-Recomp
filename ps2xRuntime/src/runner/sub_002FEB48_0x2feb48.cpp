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

// Function: sub_002FEB48
// Address: 0x2feb48 - 0x2fee38
void sub_002FEB48_0x2feb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FEB48_0x2feb48");
#endif

    switch (ctx->pc) {
        case 0x2feba0u: goto label_2feba0;
        case 0x2febbcu: goto label_2febbc;
        case 0x2febd4u: goto label_2febd4;
        case 0x2febe4u: goto label_2febe4;
        case 0x2fec40u: goto label_2fec40;
        case 0x2fecc8u: goto label_2fecc8;
        case 0x2fecdcu: goto label_2fecdc;
        case 0x2fecf0u: goto label_2fecf0;
        case 0x2fed38u: goto label_2fed38;
        case 0x2fed68u: goto label_2fed68;
        case 0x2fed78u: goto label_2fed78;
        case 0x2fed88u: goto label_2fed88;
        case 0x2fed94u: goto label_2fed94;
        case 0x2feda0u: goto label_2feda0;
        case 0x2fedbcu: goto label_2fedbc;
        case 0x2fedd4u: goto label_2fedd4;
        default: break;
    }

    ctx->pc = 0x2feb48u;

    // 0x2feb48: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2feb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2feb4c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2feb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2feb50: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2feb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x2feb54: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2feb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x2feb58: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2feb58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feb5c: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2feb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x2feb60: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x2feb60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x2feb64: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x2feb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x2feb68: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x2feb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x2feb6c: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x2feb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x2feb70: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2feb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2feb74: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2feb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2feb78: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x2feb78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2feb7c: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2feb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x2feb80: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2feb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2feb84: 0x8c650048  lw          $a1, 0x48($v1)
    ctx->pc = 0x2feb84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2feb88: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2feb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2feb8c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2feb8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2feb90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FEB90u;
    {
        const bool branch_taken_0x2feb90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEB90u;
        // 0x2feb94: 0x8c950000  lw          $s5, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feb90) {
            ctx->pc = 0x2FEBB0u;
            goto label_2febb0;
        }
    }
    ctx->pc = 0x2FEB98u;
    // 0x2feb98: 0xc08a112  jal         func_228448
    ctx->pc = 0x2FEB98u;
    SET_GPR_U32(ctx, 31, 0x2FEBA0u);
    ctx->pc = 0x2FEB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEB98u;
    // 0x2feb9c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228448u, 0x2FEB98u, 0x2FEBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEBA0u;
label_2feba0:
    // 0x2feba0: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x2feba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2feba4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2feba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2feba8: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x2FEBA8u;
    {
        const bool branch_taken_0x2feba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEBA8u;
        // 0x2febac: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feba8) {
            ctx->pc = 0x2FEE04u;
            goto label_2fee04;
        }
    }
    ctx->pc = 0x2FEBB0u;
label_2febb0:
    // 0x2febb0: 0x2653000c  addiu       $s3, $s2, 0xC
    ctx->pc = 0x2febb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x2febb4: 0xc0a739c  jal         func_29CE70
    ctx->pc = 0x2FEBB4u;
    SET_GPR_U32(ctx, 31, 0x2FEBBCu);
    ctx->pc = 0x2FEBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEBB4u;
    // 0x2febb8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CE70u, 0x2FEBB4u, 0x2FEBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEBBCu;
label_2febbc:
    // 0x2febbc: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x2FEBBCu;
    {
        const bool branch_taken_0x2febbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEBBCu;
        // 0x2febc0: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2febbc) {
            ctx->pc = 0x2FED1Cu;
            goto label_2fed1c;
        }
    }
    ctx->pc = 0x2FEBC4u;
    // 0x2febc4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2febc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2febc8: 0x26b10090  addiu       $s1, $s5, 0x90
    ctx->pc = 0x2febc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
    // 0x2febcc: 0xc0a3fa4  jal         func_28FE90
    ctx->pc = 0x2FEBCCu;
    SET_GPR_U32(ctx, 31, 0x2FEBD4u);
    ctx->pc = 0x2FEBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEBCCu;
    // 0x2febd0: 0x3c100071  lui         $s0, 0x71 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE90u, 0x2FEBCCu, 0x2FEBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEBD4u;
label_2febd4:
    // 0x2febd4: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x2febd4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2febd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2febd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2febdc: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2FEBDCu;
    SET_GPR_U32(ctx, 31, 0x2FEBE4u);
    ctx->pc = 0x2FEBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEBDCu;
    // 0x2febe0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2FEBDCu, 0x2FEBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEBE4u;
label_2febe4:
    // 0x2febe4: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x2febe4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2febe8: 0x86260002  lh          $a2, 0x2($s1)
    ctx->pc = 0x2febe8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2febec: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x2febecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
    // 0x2febf0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2febf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x2febf4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2febf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2febf8: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x2febf8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x2febfc: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x2febfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
    // 0x2fec00: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x2fec00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x2fec04: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x2fec04u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fec08: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x2fec08u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fec0c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2fec0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fec10: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x2fec10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x2fec14: 0x84430092  lh          $v1, 0x92($v0)
    ctx->pc = 0x2fec14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x2fec18: 0x7fa70020  sq          $a3, 0x20($sp)
    ctx->pc = 0x2fec18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
    // 0x2fec1c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2fec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2fec20: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2fec20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2fec24: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2fec24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fec28: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2fec28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x2fec2c: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x2fec2cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2fec30: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2fec30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2fec34: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2fec34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2fec38: 0xc0cd8c2  jal         func_336308
    ctx->pc = 0x2FEC38u;
    SET_GPR_U32(ctx, 31, 0x2FEC40u);
    ctx->pc = 0x2FEC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEC38u;
    // 0x2fec3c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336308u, 0x2FEC38u, 0x2FEC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEC40u;
label_2fec40:
    // 0x2fec40: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x2fec40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2fec44: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2FEC44u;
    {
        const bool branch_taken_0x2fec44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEC44u;
        // 0x2fec48: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fec44) {
            ctx->pc = 0x2FED2Cu;
            goto label_2fed2c;
        }
    }
    ctx->pc = 0x2FEC4Cu;
    // 0x2fec4c: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FEC4Cu;
    {
        const bool branch_taken_0x2fec4c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2FEC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEC4Cu;
        // 0x2fec50: 0x7ba30030  lq          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fec4c) {
            ctx->pc = 0x2FEC64u;
            goto label_2fec64;
        }
    }
    ctx->pc = 0x2FEC54u;
    // 0x2fec54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2fec54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2fec58: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x2fec58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x2fec5c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2FEC5Cu;
    {
        const bool branch_taken_0x2fec5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEC5Cu;
        // 0x2fec60: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fec5c) {
            ctx->pc = 0x2FECA4u;
            goto label_2feca4;
        }
    }
    ctx->pc = 0x2FEC64u;
label_2fec64:
    // 0x2fec64: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x2fec64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fec68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2fec68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2fec6c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2fec6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fec70: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x2fec70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fec74: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2fec74u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2fec78: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2fec78u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2fec7c: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x2fec7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fec80: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2fec80u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2fec84: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x2fec84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x2fec88: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x2fec88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2fec8c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2fec8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2fec90: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x2fec90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2fec94: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x2fec94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2fec98: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x2fec98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fec9c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2fec9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2feca0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2feca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2feca4:
    // 0x2feca4: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x2feca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2feca8: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x2feca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2fecac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fecacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fecb0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2fecb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fecb4: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x2fecb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x2fecb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2fecb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fecbc: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x2fecbcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x2fecc0: 0xc0a7a72  jal         func_29E9C8
    ctx->pc = 0x2FECC0u;
    SET_GPR_U32(ctx, 31, 0x2FECC8u);
    ctx->pc = 0x2FECC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FECC0u;
    // 0x2fecc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E9C8u, 0x2FECC0u, 0x2FECC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FECC8u;
label_2fecc8:
    // 0x2fecc8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2FECC8u;
    {
        const bool branch_taken_0x2fecc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fecc8) {
            ctx->pc = 0x2FECCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FECC8u;
            // 0x2feccc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FECF8u;
            goto label_2fecf8;
        }
    }
    ctx->pc = 0x2FECD0u;
    // 0x2fecd0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2fecd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fecd4: 0xc0a7a72  jal         func_29E9C8
    ctx->pc = 0x2FECD4u;
    SET_GPR_U32(ctx, 31, 0x2FECDCu);
    ctx->pc = 0x2FECD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FECD4u;
    // 0x2fecd8: 0x26050001  addiu       $a1, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E9C8u, 0x2FECD4u, 0x2FECDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FECDCu;
label_2fecdc:
    // 0x2fecdc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FECDCu;
    {
        const bool branch_taken_0x2fecdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fecdc) {
            ctx->pc = 0x2FECE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FECDCu;
            // 0x2fece0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FECF8u;
            goto label_2fecf8;
        }
    }
    ctx->pc = 0x2FECE4u;
    // 0x2fece4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2fece4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fece8: 0xc0a7a72  jal         func_29E9C8
    ctx->pc = 0x2FECE8u;
    SET_GPR_U32(ctx, 31, 0x2FECF0u);
    ctx->pc = 0x2FECECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FECE8u;
    // 0x2fecec: 0x36050002  ori         $a1, $s0, 0x2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E9C8u, 0x2FECE8u, 0x2FECF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FECF0u;
label_2fecf0:
    // 0x2fecf0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FECF0u;
    {
        const bool branch_taken_0x2fecf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fecf0) {
            ctx->pc = 0x2FECF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FECF0u;
            // 0x2fecf4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FECF8u;
            goto label_2fecf8;
        }
    }
    ctx->pc = 0x2FECF8u;
label_2fecf8:
    // 0x2fecf8: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2FECF8u;
    {
        const bool branch_taken_0x2fecf8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FECF8u;
        // 0x2fecfc: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fecf8) {
            ctx->pc = 0x2FED24u;
            goto label_2fed24;
        }
    }
    ctx->pc = 0x2FED00u;
    // 0x2fed00: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2fed00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2fed04: 0x4620001  bltzl       $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FED04u;
    {
        const bool branch_taken_0x2fed04 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2fed04) {
            ctx->pc = 0x2FED08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FED04u;
            // 0x2fed08: 0x31823  negu        $v1, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FED0Cu;
            goto label_2fed0c;
        }
    }
    ctx->pc = 0x2FED0Cu;
label_2fed0c:
    // 0x2fed0c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2fed0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fed10: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x2fed10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2fed14: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2FED14u;
    {
        const bool branch_taken_0x2fed14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FED14u;
        // 0x2fed18: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fed14) {
            ctx->pc = 0x2FED50u;
            goto label_2fed50;
        }
    }
    ctx->pc = 0x2FED1Cu;
label_2fed1c:
    // 0x2fed1c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2FED1Cu;
    {
        const bool branch_taken_0x2fed1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FED1Cu;
        // 0x2fed20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fed1c) {
            ctx->pc = 0x2FEE04u;
            goto label_2fee04;
        }
    }
    ctx->pc = 0x2FED24u;
label_2fed24:
    // 0x2fed24: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2FED24u;
    {
        const bool branch_taken_0x2fed24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FED24u;
        // 0x2fed28: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fed24) {
            ctx->pc = 0x2FED50u;
            goto label_2fed50;
        }
    }
    ctx->pc = 0x2FED2Cu;
label_2fed2c:
    // 0x2fed2c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2fed2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2fed30: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2FED30u;
    SET_GPR_U32(ctx, 31, 0x2FED38u);
    ctx->pc = 0x2FED34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FED30u;
    // 0x2fed34: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2FED30u, 0x2FED38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FED38u;
label_2fed38:
    // 0x2fed38: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x2fed38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2fed3c: 0x2404ffec  addiu       $a0, $zero, -0x14
    ctx->pc = 0x2fed3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x2fed40: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2fed40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2fed44: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2fed44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2fed48: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x2fed48u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x2fed4c: 0xae440014  sw          $a0, 0x14($s2)
    ctx->pc = 0x2fed4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 4));
label_2fed50:
    // 0x2fed50: 0x86c40002  lh          $a0, 0x2($s6)
    ctx->pc = 0x2fed50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x2fed54: 0x26e24b00  addiu       $v0, $s7, 0x4B00
    ctx->pc = 0x2fed54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 19200));
    // 0x2fed58: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2fed58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2fed5c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2fed5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2fed60: 0xc0cd7d2  jal         func_335F48
    ctx->pc = 0x2FED60u;
    SET_GPR_U32(ctx, 31, 0x2FED68u);
    ctx->pc = 0x2FED64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FED60u;
    // 0x2fed64: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2FED60u, 0x2FED68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FED68u;
label_2fed68:
    // 0x2fed68: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2fed68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2fed6c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2fed6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fed70: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x2FED70u;
    SET_GPR_U32(ctx, 31, 0x2FED78u);
    ctx->pc = 0x2FED74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FED70u;
    // 0x2fed74: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x2FED70u, 0x2FED78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FED78u;
label_2fed78:
    // 0x2fed78: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x2fed78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fed7c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2fed7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fed80: 0xc0cd766  jal         func_335D98
    ctx->pc = 0x2FED80u;
    SET_GPR_U32(ctx, 31, 0x2FED88u);
    ctx->pc = 0x2FED84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FED80u;
    // 0x2fed84: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D98u, 0x2FED80u, 0x2FED88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FED88u;
label_2fed88:
    // 0x2fed88: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2fed88u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2fed8c: 0xc08bfa0  jal         func_22FE80
    ctx->pc = 0x2FED8Cu;
    SET_GPR_U32(ctx, 31, 0x2FED94u);
    ctx->pc = 0x2FED90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FED8Cu;
    // 0x2fed90: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2FED8Cu, 0x2FED94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FED94u;
label_2fed94:
    // 0x2fed94: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2fed94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2fed98: 0xc0a2ab0  jal         func_28AAC0
    ctx->pc = 0x2FED98u;
    SET_GPR_U32(ctx, 31, 0x2FEDA0u);
    ctx->pc = 0x2FED9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FED98u;
    // 0x2fed9c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2FED98u, 0x2FEDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEDA0u;
label_2feda0:
    // 0x2feda0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2feda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2feda4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2feda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2feda8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2feda8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2fedac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2fedacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fedb0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2fedb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fedb4: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x2FEDB4u;
    SET_GPR_U32(ctx, 31, 0x2FEDBCu);
    ctx->pc = 0x2FEDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEDB4u;
    // 0x2fedb8: 0xe4540110  swc1        $f20, 0x110($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x2FEDB4u, 0x2FEDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEDBCu;
label_2fedbc:
    // 0x2fedbc: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x2fedbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fedc0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2fedc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2fedc4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2fedc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fedc8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2fedc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2fedcc: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x2FEDCCu;
    SET_GPR_U32(ctx, 31, 0x2FEDD4u);
    ctx->pc = 0x2FEDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEDCCu;
    // 0x2fedd0: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x2FEDCCu, 0x2FEDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEDD4u;
label_2fedd4:
    // 0x2fedd4: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x2fedd4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fedd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2fedd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2feddc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2feddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2fede0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fede0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fede4: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2fede4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x2fede8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fede8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fedec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fedecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fedf0: 0x7c830090  sq          $v1, 0x90($a0)
    ctx->pc = 0x2fedf0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 3));
    // 0x2fedf4: 0xe480009c  swc1        $f0, 0x9C($a0)
    ctx->pc = 0x2fedf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x2fedf8: 0xac800118  sw          $zero, 0x118($a0)
    ctx->pc = 0x2fedf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 0));
    // 0x2fedfc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2fedfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2fee00: 0xa065011c  sb          $a1, 0x11C($v1)
    ctx->pc = 0x2fee00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 284), (uint8_t)GPR_U32(ctx, 5));
label_2fee04:
    // 0x2fee04: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x2fee04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2fee08: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x2fee08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2fee0c: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x2fee0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2fee10: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x2fee10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2fee14: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x2fee14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2fee18: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x2fee18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2fee1c: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x2fee1cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2fee20: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2fee20u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2fee24: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2fee24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2fee28: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x2fee28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fee2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FEE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEE2Cu;
        // 0x2fee30: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FEE34u;
    // 0x2fee34: 0x0  nop
    ctx->pc = 0x2fee34u;
    // NOP
    ctx->pc = 0x2fee38u;
}
