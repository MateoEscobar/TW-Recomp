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

// Function: sub_002C20B0
// Address: 0x2c20b0 - 0x2c21d0
void sub_002C20B0_0x2c20b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C20B0_0x2c20b0");
#endif

    switch (ctx->pc) {
        case 0x2c20b0u: goto label_2c20b0;
        case 0x2c20b4u: goto label_2c20b4;
        case 0x2c20b8u: goto label_2c20b8;
        case 0x2c20bcu: goto label_2c20bc;
        case 0x2c20c0u: goto label_2c20c0;
        case 0x2c20c4u: goto label_2c20c4;
        case 0x2c20c8u: goto label_2c20c8;
        case 0x2c20ccu: goto label_2c20cc;
        case 0x2c20d0u: goto label_2c20d0;
        case 0x2c20d4u: goto label_2c20d4;
        case 0x2c20d8u: goto label_2c20d8;
        case 0x2c20dcu: goto label_2c20dc;
        case 0x2c20e0u: goto label_2c20e0;
        case 0x2c20e4u: goto label_2c20e4;
        case 0x2c20e8u: goto label_2c20e8;
        case 0x2c20ecu: goto label_2c20ec;
        case 0x2c20f0u: goto label_2c20f0;
        case 0x2c20f4u: goto label_2c20f4;
        case 0x2c20f8u: goto label_2c20f8;
        case 0x2c20fcu: goto label_2c20fc;
        case 0x2c2100u: goto label_2c2100;
        case 0x2c2104u: goto label_2c2104;
        case 0x2c2108u: goto label_2c2108;
        case 0x2c210cu: goto label_2c210c;
        case 0x2c2110u: goto label_2c2110;
        case 0x2c2114u: goto label_2c2114;
        case 0x2c2118u: goto label_2c2118;
        case 0x2c211cu: goto label_2c211c;
        case 0x2c2120u: goto label_2c2120;
        case 0x2c2124u: goto label_2c2124;
        case 0x2c2128u: goto label_2c2128;
        case 0x2c212cu: goto label_2c212c;
        case 0x2c2130u: goto label_2c2130;
        case 0x2c2134u: goto label_2c2134;
        case 0x2c2138u: goto label_2c2138;
        case 0x2c213cu: goto label_2c213c;
        case 0x2c2140u: goto label_2c2140;
        case 0x2c2144u: goto label_2c2144;
        case 0x2c2148u: goto label_2c2148;
        case 0x2c214cu: goto label_2c214c;
        case 0x2c2150u: goto label_2c2150;
        case 0x2c2154u: goto label_2c2154;
        case 0x2c2158u: goto label_2c2158;
        case 0x2c215cu: goto label_2c215c;
        case 0x2c2160u: goto label_2c2160;
        case 0x2c2164u: goto label_2c2164;
        case 0x2c2168u: goto label_2c2168;
        case 0x2c216cu: goto label_2c216c;
        case 0x2c2170u: goto label_2c2170;
        case 0x2c2174u: goto label_2c2174;
        case 0x2c2178u: goto label_2c2178;
        case 0x2c217cu: goto label_2c217c;
        case 0x2c2180u: goto label_2c2180;
        case 0x2c2184u: goto label_2c2184;
        case 0x2c2188u: goto label_2c2188;
        case 0x2c218cu: goto label_2c218c;
        case 0x2c2190u: goto label_2c2190;
        case 0x2c2194u: goto label_2c2194;
        case 0x2c2198u: goto label_2c2198;
        case 0x2c219cu: goto label_2c219c;
        case 0x2c21a0u: goto label_2c21a0;
        case 0x2c21a4u: goto label_2c21a4;
        case 0x2c21a8u: goto label_2c21a8;
        case 0x2c21acu: goto label_2c21ac;
        case 0x2c21b0u: goto label_2c21b0;
        case 0x2c21b4u: goto label_2c21b4;
        case 0x2c21b8u: goto label_2c21b8;
        case 0x2c21bcu: goto label_2c21bc;
        case 0x2c21c0u: goto label_2c21c0;
        case 0x2c21c4u: goto label_2c21c4;
        case 0x2c21c8u: goto label_2c21c8;
        case 0x2c21ccu: goto label_2c21cc;
        default: break;
    }

    ctx->pc = 0x2c20b0u;

label_2c20b0:
    // 0x2c20b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c20b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2c20b4:
    // 0x2c20b4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2c20b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2c20b8:
    // 0x2c20b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c20b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2c20bc:
    // 0x2c20bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c20bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c20c0:
    // 0x2c20c0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2c20c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2c20c4:
    // 0x2c20c4: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x2c20c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_2c20c8:
    // 0x2c20c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c20c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2c20cc:
    // 0x2c20cc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c20ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c20d0:
    // 0x2c20d0: 0xc0e40a2  jal         func_390288
label_2c20d4:
    if (ctx->pc == 0x2C20D4u) {
        ctx->pc = 0x2C20D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C20D0u;
        // 0x2c20d4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C20D8u;
        goto label_2c20d8;
    }
    ctx->pc = 0x2C20D0u;
    SET_GPR_U32(ctx, 31, 0x2C20D8u);
    ctx->pc = 0x2C20D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C20D0u;
    // 0x2c20d4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2C20D0u, 0x2C20D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C20D8u;
label_2c20d8:
    // 0x2c20d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2c20d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c20dc:
    // 0x2c20dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c20dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c20e0:
    // 0x2c20e0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c20e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c20e4:
    // 0x2c20e4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c20e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c20e8:
    // 0x2c20e8: 0x40f809  jalr        $v0
label_2c20ec:
    if (ctx->pc == 0x2C20ECu) {
        ctx->pc = 0x2C20ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C20E8u;
        // 0x2c20ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C20F0u;
        goto label_2c20f0;
    }
    ctx->pc = 0x2C20E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C20F0u);
        ctx->pc = 0x2C20ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C20E8u;
        // 0x2c20ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C20E8u, 0x2C20F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C20F0u;
label_2c20f0:
    // 0x2c20f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c20f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c20f4:
    // 0x2c20f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c20f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c20f8:
    // 0x2c20f8: 0xc08e1a4  jal         func_238690
label_2c20fc:
    if (ctx->pc == 0x2C20FCu) {
        ctx->pc = 0x2C20FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C20F8u;
        // 0x2c20fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2100u;
        goto label_2c2100;
    }
    ctx->pc = 0x2C20F8u;
    SET_GPR_U32(ctx, 31, 0x2C2100u);
    ctx->pc = 0x2C20FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C20F8u;
    // 0x2c20fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238690u, 0x2C20F8u, 0x2C2100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2100u;
label_2c2100:
    // 0x2c2100: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2c2100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c2104:
    // 0x2c2104: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c2104u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c2108:
    // 0x2c2108: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c2108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c210c:
    // 0x2c210c: 0x40f809  jalr        $v0
label_2c2110:
    if (ctx->pc == 0x2C2110u) {
        ctx->pc = 0x2C2110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C210Cu;
        // 0x2c2110: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2114u;
        goto label_2c2114;
    }
    ctx->pc = 0x2C210Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C2114u);
        ctx->pc = 0x2C2110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C210Cu;
        // 0x2c2110: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C210Cu, 0x2C2114u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C2114u;
label_2c2114:
    // 0x2c2114: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c2114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c2118:
    // 0x2c2118: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c2118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c211c:
    // 0x2c211c: 0xc08e1a4  jal         func_238690
label_2c2120:
    if (ctx->pc == 0x2C2120u) {
        ctx->pc = 0x2C2120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C211Cu;
        // 0x2c2120: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2124u;
        goto label_2c2124;
    }
    ctx->pc = 0x2C211Cu;
    SET_GPR_U32(ctx, 31, 0x2C2124u);
    ctx->pc = 0x2C2120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C211Cu;
    // 0x2c2120: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238690u, 0x2C211Cu, 0x2C2124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2124u;
label_2c2124:
    // 0x2c2124: 0x52400024  beql        $s2, $zero, . + 4 + (0x24 << 2)
label_2c2128:
    if (ctx->pc == 0x2C2128u) {
        ctx->pc = 0x2C2128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2124u;
        // 0x2c2128: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C212Cu;
        goto label_2c212c;
    }
    ctx->pc = 0x2C2124u;
    {
        const bool branch_taken_0x2c2124 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2124) {
            ctx->pc = 0x2C2128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2124u;
            // 0x2c2128: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C21B8u;
            goto label_2c21b8;
        }
    }
    ctx->pc = 0x2C212Cu;
label_2c212c:
    // 0x2c212c: 0x8e4200d8  lw          $v0, 0xD8($s2)
    ctx->pc = 0x2c212cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_2c2130:
    // 0x2c2130: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x2c2130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_2c2134:
    // 0x2c2134: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_2c2138:
    if (ctx->pc == 0x2C2138u) {
        ctx->pc = 0x2C2138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2134u;
        // 0x2c2138: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C213Cu;
        goto label_2c213c;
    }
    ctx->pc = 0x2C2134u;
    {
        const bool branch_taken_0x2c2134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2134u;
        // 0x2c2138: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2134) {
            ctx->pc = 0x2C2150u;
            goto label_2c2150;
        }
    }
    ctx->pc = 0x2C213Cu;
label_2c213c:
    // 0x2c213c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c213cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c2140:
    // 0x2c2140: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2c2144:
    if (ctx->pc == 0x2C2144u) {
        ctx->pc = 0x2C2144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2140u;
        // 0x2c2144: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2148u;
        goto label_2c2148;
    }
    ctx->pc = 0x2C2140u;
    {
        const bool branch_taken_0x2c2140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C2144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2140u;
        // 0x2c2144: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2140) {
            ctx->pc = 0x2C2150u;
            goto label_2c2150;
        }
    }
    ctx->pc = 0x2C2148u;
label_2c2148:
    // 0x2c2148: 0x5462001b  bnel        $v1, $v0, . + 4 + (0x1B << 2)
label_2c214c:
    if (ctx->pc == 0x2C214Cu) {
        ctx->pc = 0x2C214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2148u;
        // 0x2c214c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2150u;
        goto label_2c2150;
    }
    ctx->pc = 0x2C2148u;
    {
        const bool branch_taken_0x2c2148 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c2148) {
            ctx->pc = 0x2C214Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2148u;
            // 0x2c214c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C21B8u;
            goto label_2c21b8;
        }
    }
    ctx->pc = 0x2C2150u;
label_2c2150:
    // 0x2c2150: 0x92220046  lbu         $v0, 0x46($s1)
    ctx->pc = 0x2c2150u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 70)));
label_2c2154:
    // 0x2c2154: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_2c2158:
    if (ctx->pc == 0x2C2158u) {
        ctx->pc = 0x2C2158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2154u;
        // 0x2c2158: 0x240207d0  addiu       $v0, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C215Cu;
        goto label_2c215c;
    }
    ctx->pc = 0x2C2154u;
    {
        const bool branch_taken_0x2c2154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2154u;
        // 0x2c2158: 0x240207d0  addiu       $v0, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2154) {
            ctx->pc = 0x2C21ACu;
            goto label_2c21ac;
        }
    }
    ctx->pc = 0x2C215Cu;
label_2c215c:
    // 0x2c215c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2c215cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c2160:
    // 0x2c2160: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c2160u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c2164:
    // 0x2c2164: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c2164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c2168:
    // 0x2c2168: 0x40f809  jalr        $v0
label_2c216c:
    if (ctx->pc == 0x2C216Cu) {
        ctx->pc = 0x2C216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2168u;
        // 0x2c216c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2170u;
        goto label_2c2170;
    }
    ctx->pc = 0x2C2168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C2170u);
        ctx->pc = 0x2C216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2168u;
        // 0x2c216c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2168u, 0x2C2170u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C2170u;
label_2c2170:
    // 0x2c2170: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2c2170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2c2174:
    // 0x2c2174: 0x27a40004  addiu       $a0, $sp, 0x4
    ctx->pc = 0x2c2174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_2c2178:
    // 0x2c2178: 0x97a30002  lhu         $v1, 0x2($sp)
    ctx->pc = 0x2c2178u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
label_2c217c:
    // 0x2c217c: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x2c217cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_2c2180:
    // 0x2c2180: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2c2180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_2c2184:
    // 0x2c2184: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2c2184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_2c2188:
    // 0x2c2188: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x2c2188u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_2c218c:
    // 0x2c218c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2c218cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_2c2190:
    // 0x2c2190: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_2c2194:
    if (ctx->pc == 0x2C2194u) {
        ctx->pc = 0x2C2194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2190u;
        // 0x2c2194: 0x240207d0  addiu       $v0, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2198u;
        goto label_2c2198;
    }
    ctx->pc = 0x2C2190u;
    {
        const bool branch_taken_0x2c2190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C2194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2190u;
        // 0x2c2194: 0x240207d0  addiu       $v0, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2190) {
            ctx->pc = 0x2C21ACu;
            goto label_2c21ac;
        }
    }
    ctx->pc = 0x2C2198u;
label_2c2198:
    // 0x2c2198: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2c2198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2c219c:
    // 0x2c219c: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x2c219cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_2c21a0:
    // 0x2c21a0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2c21a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2c21a4:
    // 0x2c21a4: 0xae4300d8  sw          $v1, 0xD8($s2)
    ctx->pc = 0x2c21a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 3));
label_2c21a8:
    // 0x2c21a8: 0x240207d0  addiu       $v0, $zero, 0x7D0
    ctx->pc = 0x2c21a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
label_2c21ac:
    // 0x2c21ac: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x2c21acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
label_2c21b0:
    // 0x2c21b0: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x2c21b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_2c21b4:
    // 0x2c21b4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2c21b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c21b8:
    // 0x2c21b8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2c21b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c21bc:
    // 0x2c21bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c21bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c21c0:
    // 0x2c21c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c21c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c21c4:
    // 0x2c21c4: 0x3e00008  jr          $ra
label_2c21c8:
    if (ctx->pc == 0x2C21C8u) {
        ctx->pc = 0x2C21C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C21C4u;
        // 0x2c21c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C21CCu;
        goto label_2c21cc;
    }
    ctx->pc = 0x2C21C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C21C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C21C4u;
        // 0x2c21c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C21C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C21CCu;
label_2c21cc:
    // 0x2c21cc: 0x0  nop
    ctx->pc = 0x2c21ccu;
    // NOP
    ctx->pc = 0x2c21d0u;
}
