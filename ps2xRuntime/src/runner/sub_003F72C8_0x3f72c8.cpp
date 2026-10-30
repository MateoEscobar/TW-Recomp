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

// Function: sub_003F72C8
// Address: 0x3f72c8 - 0x3f7378
void sub_003F72C8_0x3f72c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F72C8_0x3f72c8");
#endif

    switch (ctx->pc) {
        case 0x3f72c8u: goto label_3f72c8;
        case 0x3f72ccu: goto label_3f72cc;
        case 0x3f72d0u: goto label_3f72d0;
        case 0x3f72d4u: goto label_3f72d4;
        case 0x3f72d8u: goto label_3f72d8;
        case 0x3f72dcu: goto label_3f72dc;
        case 0x3f72e0u: goto label_3f72e0;
        case 0x3f72e4u: goto label_3f72e4;
        case 0x3f72e8u: goto label_3f72e8;
        case 0x3f72ecu: goto label_3f72ec;
        case 0x3f72f0u: goto label_3f72f0;
        case 0x3f72f4u: goto label_3f72f4;
        case 0x3f72f8u: goto label_3f72f8;
        case 0x3f72fcu: goto label_3f72fc;
        case 0x3f7300u: goto label_3f7300;
        case 0x3f7304u: goto label_3f7304;
        case 0x3f7308u: goto label_3f7308;
        case 0x3f730cu: goto label_3f730c;
        case 0x3f7310u: goto label_3f7310;
        case 0x3f7314u: goto label_3f7314;
        case 0x3f7318u: goto label_3f7318;
        case 0x3f731cu: goto label_3f731c;
        case 0x3f7320u: goto label_3f7320;
        case 0x3f7324u: goto label_3f7324;
        case 0x3f7328u: goto label_3f7328;
        case 0x3f732cu: goto label_3f732c;
        case 0x3f7330u: goto label_3f7330;
        case 0x3f7334u: goto label_3f7334;
        case 0x3f7338u: goto label_3f7338;
        case 0x3f733cu: goto label_3f733c;
        case 0x3f7340u: goto label_3f7340;
        case 0x3f7344u: goto label_3f7344;
        case 0x3f7348u: goto label_3f7348;
        case 0x3f734cu: goto label_3f734c;
        case 0x3f7350u: goto label_3f7350;
        case 0x3f7354u: goto label_3f7354;
        case 0x3f7358u: goto label_3f7358;
        case 0x3f735cu: goto label_3f735c;
        case 0x3f7360u: goto label_3f7360;
        case 0x3f7364u: goto label_3f7364;
        case 0x3f7368u: goto label_3f7368;
        case 0x3f736cu: goto label_3f736c;
        case 0x3f7370u: goto label_3f7370;
        case 0x3f7374u: goto label_3f7374;
        default: break;
    }

    ctx->pc = 0x3f72c8u;

label_3f72c8:
    // 0x3f72c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3f72c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3f72cc:
    // 0x3f72cc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3f72ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3f72d0:
    // 0x3f72d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3f72d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3f72d4:
    // 0x3f72d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3f72d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f72d8:
    // 0x3f72d8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3f72d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3f72dc:
    // 0x3f72dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f72dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f72e0:
    // 0x3f72e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f72e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3f72e4:
    // 0x3f72e4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3f72e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f72e8:
    // 0x3f72e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f72e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f72ec:
    // 0x3f72ec: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f72ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f72f0:
    // 0x3f72f0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f72f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f72f4:
    // 0x3f72f4: 0x40f809  jalr        $v0
label_3f72f8:
    if (ctx->pc == 0x3F72F8u) {
        ctx->pc = 0x3F72F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F72F4u;
        // 0x3f72f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F72FCu;
        goto label_3f72fc;
    }
    ctx->pc = 0x3F72F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F72FCu);
        ctx->pc = 0x3F72F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F72F4u;
        // 0x3f72f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F72F4u, 0x3F72FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F72FCu;
label_3f72fc:
    // 0x3f72fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3f72fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f7300:
    // 0x3f7300: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3f7300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3f7304:
    // 0x3f7304: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
label_3f7308:
    if (ctx->pc == 0x3F7308u) {
        ctx->pc = 0x3F7308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7304u;
        // 0x3f7308: 0x2e020013  sltiu       $v0, $s0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F730Cu;
        goto label_3f730c;
    }
    ctx->pc = 0x3F7304u;
    {
        const bool branch_taken_0x3f7304 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F7308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7304u;
        // 0x3f7308: 0x2e020013  sltiu       $v0, $s0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7304) {
            ctx->pc = 0x3F7344u;
            goto label_3f7344;
        }
    }
    ctx->pc = 0x3F730Cu;
label_3f730c:
    // 0x3f730c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3f7310:
    if (ctx->pc == 0x3F7310u) {
        ctx->pc = 0x3F7310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F730Cu;
        // 0x3f7310: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7314u;
        goto label_3f7314;
    }
    ctx->pc = 0x3F730Cu;
    {
        const bool branch_taken_0x3f730c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F730Cu;
        // 0x3f7310: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f730c) {
            ctx->pc = 0x3F7324u;
            goto label_3f7324;
        }
    }
    ctx->pc = 0x3F7314u;
label_3f7314:
    // 0x3f7314: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
label_3f7318:
    if (ctx->pc == 0x3F7318u) {
        ctx->pc = 0x3F7318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7314u;
        // 0x3f7318: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F731Cu;
        goto label_3f731c;
    }
    ctx->pc = 0x3F7314u;
    {
        const bool branch_taken_0x3f7314 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F7318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7314u;
        // 0x3f7318: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7314) {
            ctx->pc = 0x3F7354u;
            goto label_3f7354;
        }
    }
    ctx->pc = 0x3F731Cu;
label_3f731c:
    // 0x3f731c: 0x10000012  b           . + 4 + (0x12 << 2)
label_3f7320:
    if (ctx->pc == 0x3F7320u) {
        ctx->pc = 0x3F7320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F731Cu;
        // 0x3f7320: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7324u;
        goto label_3f7324;
    }
    ctx->pc = 0x3F731Cu;
    {
        const bool branch_taken_0x3f731c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F731Cu;
        // 0x3f7320: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f731c) {
            ctx->pc = 0x3F7368u;
            goto label_3f7368;
        }
    }
    ctx->pc = 0x3F7324u;
label_3f7324:
    // 0x3f7324: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x3f7324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_3f7328:
    // 0x3f7328: 0x1602000e  bne         $s0, $v0, . + 4 + (0xE << 2)
label_3f732c:
    if (ctx->pc == 0x3F732Cu) {
        ctx->pc = 0x3F732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7328u;
        // 0x3f732c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7330u;
        goto label_3f7330;
    }
    ctx->pc = 0x3F7328u;
    {
        const bool branch_taken_0x3f7328 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3F732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7328u;
        // 0x3f732c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7328) {
            ctx->pc = 0x3F7364u;
            goto label_3f7364;
        }
    }
    ctx->pc = 0x3F7330u;
label_3f7330:
    // 0x3f7330: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f7330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f7334:
    // 0x3f7334: 0xc0fd9c8  jal         func_3F6720
label_3f7338:
    if (ctx->pc == 0x3F7338u) {
        ctx->pc = 0x3F7338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7334u;
        // 0x3f7338: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F733Cu;
        goto label_3f733c;
    }
    ctx->pc = 0x3F7334u;
    SET_GPR_U32(ctx, 31, 0x3F733Cu);
    ctx->pc = 0x3F7338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7334u;
    // 0x3f7338: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6720u, 0x3F7334u, 0x3F733Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F733Cu;
label_3f733c:
    // 0x3f733c: 0x10000009  b           . + 4 + (0x9 << 2)
label_3f7340:
    if (ctx->pc == 0x3F7340u) {
        ctx->pc = 0x3F7340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F733Cu;
        // 0x3f7340: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7344u;
        goto label_3f7344;
    }
    ctx->pc = 0x3F733Cu;
    {
        const bool branch_taken_0x3f733c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F733Cu;
        // 0x3f7340: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f733c) {
            ctx->pc = 0x3F7364u;
            goto label_3f7364;
        }
    }
    ctx->pc = 0x3F7344u;
label_3f7344:
    // 0x3f7344: 0xc0fda4c  jal         func_3F6930
label_3f7348:
    if (ctx->pc == 0x3F7348u) {
        ctx->pc = 0x3F7348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7344u;
        // 0x3f7348: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F734Cu;
        goto label_3f734c;
    }
    ctx->pc = 0x3F7344u;
    SET_GPR_U32(ctx, 31, 0x3F734Cu);
    ctx->pc = 0x3F7348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7344u;
    // 0x3f7348: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6930u, 0x3F7344u, 0x3F734Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F734Cu;
label_3f734c:
    // 0x3f734c: 0x10000005  b           . + 4 + (0x5 << 2)
label_3f7350:
    if (ctx->pc == 0x3F7350u) {
        ctx->pc = 0x3F7350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F734Cu;
        // 0x3f7350: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7354u;
        goto label_3f7354;
    }
    ctx->pc = 0x3F734Cu;
    {
        const bool branch_taken_0x3f734c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F734Cu;
        // 0x3f7350: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f734c) {
            ctx->pc = 0x3F7364u;
            goto label_3f7364;
        }
    }
    ctx->pc = 0x3F7354u;
label_3f7354:
    // 0x3f7354: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3f7354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f7358:
    // 0x3f7358: 0xc0fda38  jal         func_3F68E0
label_3f735c:
    if (ctx->pc == 0x3F735Cu) {
        ctx->pc = 0x3F735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7358u;
        // 0x3f735c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7360u;
        goto label_3f7360;
    }
    ctx->pc = 0x3F7358u;
    SET_GPR_U32(ctx, 31, 0x3F7360u);
    ctx->pc = 0x3F735Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7358u;
    // 0x3f735c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F68E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F68E0u, 0x3F7358u, 0x3F7360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7360u;
label_3f7360:
    // 0x3f7360: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3f7360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f7364:
    // 0x3f7364: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3f7364u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f7368:
    // 0x3f7368: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3f7368u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f736c:
    // 0x3f736c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f736cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3f7370:
    // 0x3f7370: 0x3e00008  jr          $ra
label_3f7374:
    if (ctx->pc == 0x3F7374u) {
        ctx->pc = 0x3F7374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7370u;
        // 0x3f7374: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7378u;
        goto label_fallthrough_0x3f7370;
    }
    ctx->pc = 0x3F7370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F7374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7370u;
        // 0x3f7374: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F7370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f7370:
    ctx->pc = 0x3F7378u;
}
