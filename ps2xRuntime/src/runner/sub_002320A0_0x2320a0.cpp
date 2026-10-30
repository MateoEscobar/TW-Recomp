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

// Function: sub_002320A0
// Address: 0x2320a0 - 0x232230
void sub_002320A0_0x2320a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002320A0_0x2320a0");
#endif

    switch (ctx->pc) {
        case 0x2320a0u: goto label_2320a0;
        case 0x2320a4u: goto label_2320a4;
        case 0x2320a8u: goto label_2320a8;
        case 0x2320acu: goto label_2320ac;
        case 0x2320b0u: goto label_2320b0;
        case 0x2320b4u: goto label_2320b4;
        case 0x2320b8u: goto label_2320b8;
        case 0x2320bcu: goto label_2320bc;
        case 0x2320c0u: goto label_2320c0;
        case 0x2320c4u: goto label_2320c4;
        case 0x2320c8u: goto label_2320c8;
        case 0x2320ccu: goto label_2320cc;
        case 0x2320d0u: goto label_2320d0;
        case 0x2320d4u: goto label_2320d4;
        case 0x2320d8u: goto label_2320d8;
        case 0x2320dcu: goto label_2320dc;
        case 0x2320e0u: goto label_2320e0;
        case 0x2320e4u: goto label_2320e4;
        case 0x2320e8u: goto label_2320e8;
        case 0x2320ecu: goto label_2320ec;
        case 0x2320f0u: goto label_2320f0;
        case 0x2320f4u: goto label_2320f4;
        case 0x2320f8u: goto label_2320f8;
        case 0x2320fcu: goto label_2320fc;
        case 0x232100u: goto label_232100;
        case 0x232104u: goto label_232104;
        case 0x232108u: goto label_232108;
        case 0x23210cu: goto label_23210c;
        case 0x232110u: goto label_232110;
        case 0x232114u: goto label_232114;
        case 0x232118u: goto label_232118;
        case 0x23211cu: goto label_23211c;
        case 0x232120u: goto label_232120;
        case 0x232124u: goto label_232124;
        case 0x232128u: goto label_232128;
        case 0x23212cu: goto label_23212c;
        case 0x232130u: goto label_232130;
        case 0x232134u: goto label_232134;
        case 0x232138u: goto label_232138;
        case 0x23213cu: goto label_23213c;
        case 0x232140u: goto label_232140;
        case 0x232144u: goto label_232144;
        case 0x232148u: goto label_232148;
        case 0x23214cu: goto label_23214c;
        case 0x232150u: goto label_232150;
        case 0x232154u: goto label_232154;
        case 0x232158u: goto label_232158;
        case 0x23215cu: goto label_23215c;
        case 0x232160u: goto label_232160;
        case 0x232164u: goto label_232164;
        case 0x232168u: goto label_232168;
        case 0x23216cu: goto label_23216c;
        case 0x232170u: goto label_232170;
        case 0x232174u: goto label_232174;
        case 0x232178u: goto label_232178;
        case 0x23217cu: goto label_23217c;
        case 0x232180u: goto label_232180;
        case 0x232184u: goto label_232184;
        case 0x232188u: goto label_232188;
        case 0x23218cu: goto label_23218c;
        case 0x232190u: goto label_232190;
        case 0x232194u: goto label_232194;
        case 0x232198u: goto label_232198;
        case 0x23219cu: goto label_23219c;
        case 0x2321a0u: goto label_2321a0;
        case 0x2321a4u: goto label_2321a4;
        case 0x2321a8u: goto label_2321a8;
        case 0x2321acu: goto label_2321ac;
        case 0x2321b0u: goto label_2321b0;
        case 0x2321b4u: goto label_2321b4;
        case 0x2321b8u: goto label_2321b8;
        case 0x2321bcu: goto label_2321bc;
        case 0x2321c0u: goto label_2321c0;
        case 0x2321c4u: goto label_2321c4;
        case 0x2321c8u: goto label_2321c8;
        case 0x2321ccu: goto label_2321cc;
        case 0x2321d0u: goto label_2321d0;
        case 0x2321d4u: goto label_2321d4;
        case 0x2321d8u: goto label_2321d8;
        case 0x2321dcu: goto label_2321dc;
        case 0x2321e0u: goto label_2321e0;
        case 0x2321e4u: goto label_2321e4;
        case 0x2321e8u: goto label_2321e8;
        case 0x2321ecu: goto label_2321ec;
        case 0x2321f0u: goto label_2321f0;
        case 0x2321f4u: goto label_2321f4;
        case 0x2321f8u: goto label_2321f8;
        case 0x2321fcu: goto label_2321fc;
        case 0x232200u: goto label_232200;
        case 0x232204u: goto label_232204;
        case 0x232208u: goto label_232208;
        case 0x23220cu: goto label_23220c;
        case 0x232210u: goto label_232210;
        case 0x232214u: goto label_232214;
        case 0x232218u: goto label_232218;
        case 0x23221cu: goto label_23221c;
        case 0x232220u: goto label_232220;
        case 0x232224u: goto label_232224;
        case 0x232228u: goto label_232228;
        case 0x23222cu: goto label_23222c;
        default: break;
    }

    ctx->pc = 0x2320a0u;

label_2320a0:
    // 0x2320a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2320a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2320a4:
    // 0x2320a4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2320a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_2320a8:
    // 0x2320a8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2320a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_2320ac:
    // 0x2320ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2320acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2320b0:
    // 0x2320b0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2320b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_2320b4:
    // 0x2320b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2320b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2320b8:
    // 0x2320b8: 0x1220002f  beqz        $s1, . + 4 + (0x2F << 2)
label_2320bc:
    if (ctx->pc == 0x2320BCu) {
        ctx->pc = 0x2320BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2320B8u;
        // 0x2320bc: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2320C0u;
        goto label_2320c0;
    }
    ctx->pc = 0x2320B8u;
    {
        const bool branch_taken_0x2320b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2320BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2320B8u;
        // 0x2320bc: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2320b8) {
            ctx->pc = 0x232178u;
            goto label_232178;
        }
    }
    ctx->pc = 0x2320C0u;
label_2320c0:
    // 0x2320c0: 0x12400054  beqz        $s2, . + 4 + (0x54 << 2)
label_2320c4:
    if (ctx->pc == 0x2320C4u) {
        ctx->pc = 0x2320C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2320C0u;
        // 0x2320c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2320C8u;
        goto label_2320c8;
    }
    ctx->pc = 0x2320C0u;
    {
        const bool branch_taken_0x2320c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2320C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2320C0u;
        // 0x2320c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2320c0) {
            ctx->pc = 0x232214u;
            goto label_232214;
        }
    }
    ctx->pc = 0x2320C8u;
label_2320c8:
    // 0x2320c8: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x2320c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_2320cc:
    // 0x2320cc: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
label_2320d0:
    if (ctx->pc == 0x2320D0u) {
        ctx->pc = 0x2320D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2320CCu;
        // 0x2320d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2320D4u;
        goto label_2320d4;
    }
    ctx->pc = 0x2320CCu;
    {
        const bool branch_taken_0x2320cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2320D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2320CCu;
        // 0x2320d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2320cc) {
            ctx->pc = 0x232214u;
            goto label_232214;
        }
    }
    ctx->pc = 0x2320D4u;
label_2320d4:
    // 0x2320d4: 0x8e4200d8  lw          $v0, 0xD8($s2)
    ctx->pc = 0x2320d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_2320d8:
    // 0x2320d8: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
label_2320dc:
    if (ctx->pc == 0x2320DCu) {
        ctx->pc = 0x2320DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2320D8u;
        // 0x2320dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2320E0u;
        goto label_2320e0;
    }
    ctx->pc = 0x2320D8u;
    {
        const bool branch_taken_0x2320d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2320DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2320D8u;
        // 0x2320dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2320d8) {
            ctx->pc = 0x232214u;
            goto label_232214;
        }
    }
    ctx->pc = 0x2320E0u;
label_2320e0:
    // 0x2320e0: 0xc08a0d0  jal         func_228340
label_2320e4:
    if (ctx->pc == 0x2320E4u) {
        ctx->pc = 0x2320E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2320E0u;
        // 0x2320e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2320E8u;
        goto label_2320e8;
    }
    ctx->pc = 0x2320E0u;
    SET_GPR_U32(ctx, 31, 0x2320E8u);
    ctx->pc = 0x2320E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2320E0u;
    // 0x2320e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x2320E0u, 0x2320E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2320E8u;
label_2320e8:
    // 0x2320e8: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
label_2320ec:
    if (ctx->pc == 0x2320ECu) {
        ctx->pc = 0x2320ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2320E8u;
        // 0x2320ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2320F0u;
        goto label_2320f0;
    }
    ctx->pc = 0x2320E8u;
    {
        const bool branch_taken_0x2320e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2320ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2320E8u;
        // 0x2320ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2320e8) {
            ctx->pc = 0x232214u;
            goto label_232214;
        }
    }
    ctx->pc = 0x2320F0u;
label_2320f0:
    // 0x2320f0: 0xc08a0d0  jal         func_228340
label_2320f4:
    if (ctx->pc == 0x2320F4u) {
        ctx->pc = 0x2320F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2320F0u;
        // 0x2320f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2320F8u;
        goto label_2320f8;
    }
    ctx->pc = 0x2320F0u;
    SET_GPR_U32(ctx, 31, 0x2320F8u);
    ctx->pc = 0x2320F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2320F0u;
    // 0x2320f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x2320F0u, 0x2320F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2320F8u;
label_2320f8:
    // 0x2320f8: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
label_2320fc:
    if (ctx->pc == 0x2320FCu) {
        ctx->pc = 0x2320FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2320F8u;
        // 0x2320fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232100u;
        goto label_232100;
    }
    ctx->pc = 0x2320F8u;
    {
        const bool branch_taken_0x2320f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2320FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2320F8u;
        // 0x2320fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2320f8) {
            ctx->pc = 0x232214u;
            goto label_232214;
        }
    }
    ctx->pc = 0x232100u;
label_232100:
    // 0x232100: 0x3c052fef  lui         $a1, 0x2FEF
    ctx->pc = 0x232100u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12271 << 16));
label_232104:
    // 0x232104: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_232108:
    // 0x232108: 0xc089998  jal         func_226660
label_23210c:
    if (ctx->pc == 0x23210Cu) {
        ctx->pc = 0x23210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232108u;
        // 0x23210c: 0x34a5efff  ori         $a1, $a1, 0xEFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61439);
        ctx->in_delay_slot = false;
        ctx->pc = 0x232110u;
        goto label_232110;
    }
    ctx->pc = 0x232108u;
    SET_GPR_U32(ctx, 31, 0x232110u);
    ctx->pc = 0x23210Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232108u;
    // 0x23210c: 0x34a5efff  ori         $a1, $a1, 0xEFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61439);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x232108u, 0x232110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232110u;
label_232110:
    // 0x232110: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
label_232114:
    if (ctx->pc == 0x232114u) {
        ctx->pc = 0x232114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232110u;
        // 0x232114: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232118u;
        goto label_232118;
    }
    ctx->pc = 0x232110u;
    {
        const bool branch_taken_0x232110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232110u;
        // 0x232114: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232110) {
            ctx->pc = 0x232214u;
            goto label_232214;
        }
    }
    ctx->pc = 0x232118u;
label_232118:
    // 0x232118: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x232118u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_23211c:
    // 0x23211c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x23211cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_232120:
    // 0x232120: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x232120u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_232124:
    // 0x232124: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x232124u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_232128:
    // 0x232128: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x232128u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
label_23212c:
    // 0x23212c: 0xc08997c  jal         func_2265F0
label_232130:
    if (ctx->pc == 0x232130u) {
        ctx->pc = 0x232130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23212Cu;
        // 0x232130: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232134u;
        goto label_232134;
    }
    ctx->pc = 0x23212Cu;
    SET_GPR_U32(ctx, 31, 0x232134u);
    ctx->pc = 0x232130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23212Cu;
    // 0x232130: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x23212Cu, 0x232134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232134u;
label_232134:
    // 0x232134: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
label_232138:
    if (ctx->pc == 0x232138u) {
        ctx->pc = 0x232138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232134u;
        // 0x232138: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23213Cu;
        goto label_23213c;
    }
    ctx->pc = 0x232134u;
    {
        const bool branch_taken_0x232134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232134u;
        // 0x232138: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232134) {
            ctx->pc = 0x232214u;
            goto label_232214;
        }
    }
    ctx->pc = 0x23213Cu;
label_23213c:
    // 0x23213c: 0x3c052fef  lui         $a1, 0x2FEF
    ctx->pc = 0x23213cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12271 << 16));
label_232140:
    // 0x232140: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x232140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_232144:
    // 0x232144: 0xc089998  jal         func_226660
label_232148:
    if (ctx->pc == 0x232148u) {
        ctx->pc = 0x232148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232144u;
        // 0x232148: 0x34a5efff  ori         $a1, $a1, 0xEFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61439);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23214Cu;
        goto label_23214c;
    }
    ctx->pc = 0x232144u;
    SET_GPR_U32(ctx, 31, 0x23214Cu);
    ctx->pc = 0x232148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232144u;
    // 0x232148: 0x34a5efff  ori         $a1, $a1, 0xEFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61439);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x232144u, 0x23214Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23214Cu;
label_23214c:
    // 0x23214c: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
label_232150:
    if (ctx->pc == 0x232150u) {
        ctx->pc = 0x232150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23214Cu;
        // 0x232150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232154u;
        goto label_232154;
    }
    ctx->pc = 0x23214Cu;
    {
        const bool branch_taken_0x23214c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23214Cu;
        // 0x232150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23214c) {
            ctx->pc = 0x232214u;
            goto label_232214;
        }
    }
    ctx->pc = 0x232154u;
label_232154:
    // 0x232154: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x232154u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_232158:
    // 0x232158: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x232158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_23215c:
    // 0x23215c: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x23215cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_232160:
    // 0x232160: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x232160u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_232164:
    // 0x232164: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x232164u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
label_232168:
    // 0x232168: 0xc08997c  jal         func_2265F0
label_23216c:
    if (ctx->pc == 0x23216Cu) {
        ctx->pc = 0x23216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232168u;
        // 0x23216c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232170u;
        goto label_232170;
    }
    ctx->pc = 0x232168u;
    SET_GPR_U32(ctx, 31, 0x232170u);
    ctx->pc = 0x23216Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232168u;
    // 0x23216c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x232168u, 0x232170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232170u;
label_232170:
    // 0x232170: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_232174:
    if (ctx->pc == 0x232174u) {
        ctx->pc = 0x232174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232170u;
        // 0x232174: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232178u;
        goto label_232178;
    }
    ctx->pc = 0x232170u;
    {
        const bool branch_taken_0x232170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232170) {
            ctx->pc = 0x232174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232170u;
            // 0x232174: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232180u;
            goto label_232180;
        }
    }
    ctx->pc = 0x232178u;
label_232178:
    // 0x232178: 0x10000026  b           . + 4 + (0x26 << 2)
label_23217c:
    if (ctx->pc == 0x23217Cu) {
        ctx->pc = 0x23217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232178u;
        // 0x23217c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232180u;
        goto label_232180;
    }
    ctx->pc = 0x232178u;
    {
        const bool branch_taken_0x232178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232178u;
        // 0x23217c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232178) {
            ctx->pc = 0x232214u;
            goto label_232214;
        }
    }
    ctx->pc = 0x232180u;
label_232180:
    // 0x232180: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x232180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_232184:
    // 0x232184: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x232184u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_232188:
    // 0x232188: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x232188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_23218c:
    // 0x23218c: 0x60f809  jalr        $v1
label_232190:
    if (ctx->pc == 0x232190u) {
        ctx->pc = 0x232190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23218Cu;
        // 0x232190: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232194u;
        goto label_232194;
    }
    ctx->pc = 0x23218Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x232194u);
        ctx->pc = 0x232190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23218Cu;
        // 0x232190: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23218Cu, 0x232194u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x232194u;
label_232194:
    // 0x232194: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x232194u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_232198:
    // 0x232198: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x232198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23219c:
    // 0x23219c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23219cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2321a0:
    // 0x2321a0: 0x84c500a0  lh          $a1, 0xA0($a2)
    ctx->pc = 0x2321a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 160)));
label_2321a4:
    // 0x2321a4: 0x8cc200a4  lw          $v0, 0xA4($a2)
    ctx->pc = 0x2321a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 164)));
label_2321a8:
    // 0x2321a8: 0x40f809  jalr        $v0
label_2321ac:
    if (ctx->pc == 0x2321ACu) {
        ctx->pc = 0x2321ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2321A8u;
        // 0x2321ac: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2321B0u;
        goto label_2321b0;
    }
    ctx->pc = 0x2321A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2321B0u);
        ctx->pc = 0x2321ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2321A8u;
        // 0x2321ac: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2321A8u, 0x2321B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2321B0u;
label_2321b0:
    // 0x2321b0: 0x86440092  lh          $a0, 0x92($s2)
    ctx->pc = 0x2321b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2321b4:
    // 0x2321b4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2321b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2321b8:
    // 0x2321b8: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x2321b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_2321bc:
    // 0x2321bc: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2321bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2321c0:
    // 0x2321c0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2321c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2321c4:
    // 0x2321c4: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x2321c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2321c8:
    // 0x2321c8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2321c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2321cc:
    // 0x2321cc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2321ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2321d0:
    // 0x2321d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2321d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2321d4:
    // 0x2321d4: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x2321d4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2321d8:
    // 0x2321d8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2321d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2321dc:
    // 0x2321dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2321dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2321e0:
    // 0x2321e0: 0x7fa60000  sq          $a2, 0x0($sp)
    ctx->pc = 0x2321e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 6));
label_2321e4:
    // 0x2321e4: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2321e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_2321e8:
    // 0x2321e8: 0x84e40068  lh          $a0, 0x68($a3)
    ctx->pc = 0x2321e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 104)));
label_2321ec:
    // 0x2321ec: 0x8ce2006c  lw          $v0, 0x6C($a3)
    ctx->pc = 0x2321ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 108)));
label_2321f0:
    // 0x2321f0: 0x40f809  jalr        $v0
label_2321f4:
    if (ctx->pc == 0x2321F4u) {
        ctx->pc = 0x2321F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2321F0u;
        // 0x2321f4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2321F8u;
        goto label_2321f8;
    }
    ctx->pc = 0x2321F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2321F8u);
        ctx->pc = 0x2321F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2321F0u;
        // 0x2321f4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2321F0u, 0x2321F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2321F8u;
label_2321f8:
    // 0x2321f8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2321f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2321fc:
    // 0x2321fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2321fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232200:
    // 0x232200: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x232200u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_232204:
    // 0x232204: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x232204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_232208:
    // 0x232208: 0x40f809  jalr        $v0
label_23220c:
    if (ctx->pc == 0x23220Cu) {
        ctx->pc = 0x23220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232208u;
        // 0x23220c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232210u;
        goto label_232210;
    }
    ctx->pc = 0x232208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x232210u);
        ctx->pc = 0x23220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232208u;
        // 0x23220c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232208u, 0x232210u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x232210u;
label_232210:
    // 0x232210: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x232210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_232214:
    // 0x232214: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x232214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_232218:
    // 0x232218: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x232218u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_23221c:
    // 0x23221c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x23221cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_232220:
    // 0x232220: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x232220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_232224:
    // 0x232224: 0x3e00008  jr          $ra
label_232228:
    if (ctx->pc == 0x232228u) {
        ctx->pc = 0x232228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232224u;
        // 0x232228: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23222Cu;
        goto label_23222c;
    }
    ctx->pc = 0x232224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232224u;
        // 0x232228: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23222Cu;
label_23222c:
    // 0x23222c: 0x0  nop
    ctx->pc = 0x23222cu;
    // NOP
    ctx->pc = 0x232230u;
}
