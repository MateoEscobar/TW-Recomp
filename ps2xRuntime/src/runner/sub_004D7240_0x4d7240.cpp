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

// Function: sub_004D7240
// Address: 0x4d7240 - 0x4d73e8
void sub_004D7240_0x4d7240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D7240_0x4d7240");
#endif

    switch (ctx->pc) {
        case 0x4d7290u: goto label_4d7290;
        case 0x4d72b0u: goto label_4d72b0;
        case 0x4d72c8u: goto label_4d72c8;
        case 0x4d72e0u: goto label_4d72e0;
        case 0x4d72fcu: goto label_4d72fc;
        case 0x4d731cu: goto label_4d731c;
        case 0x4d7334u: goto label_4d7334;
        case 0x4d7344u: goto label_4d7344;
        case 0x4d7374u: goto label_4d7374;
        case 0x4d737cu: goto label_4d737c;
        case 0x4d738cu: goto label_4d738c;
        case 0x4d7394u: goto label_4d7394;
        case 0x4d73acu: goto label_4d73ac;
        case 0x4d73c4u: goto label_4d73c4;
        default: break;
    }

    ctx->pc = 0x4d7240u;

    // 0x4d7240: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4d7240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4d7244: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d7244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4d7248: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d7248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d724c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4d724cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7250: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d7250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4d7254: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4d7254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7258: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d7258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4d725c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x4d725cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7260: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4d7260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4d7264: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4d7264u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7268: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d7268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d726c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x4d726cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7270: 0x2a820021  slti        $v0, $s4, 0x21
    ctx->pc = 0x4d7270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x4d7274: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x4D7274u;
    {
        const bool branch_taken_0x4d7274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D7278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7274u;
        // 0x4d7278: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7274) {
            ctx->pc = 0x4D734Cu;
            goto label_4d734c;
        }
    }
    ctx->pc = 0x4D727Cu;
    // 0x4d727c: 0x148083  sra         $s0, $s4, 2
    ctx->pc = 0x4d727cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 20), 2));
    // 0x4d7280: 0x2303023  subu        $a2, $s1, $s0
    ctx->pc = 0x4d7280u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x4d7284: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4d7284u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4d7288: 0xc134fd4  jal         func_4D3F50
    ctx->pc = 0x4D7288u;
    SET_GPR_U32(ctx, 31, 0x4D7290u);
    ctx->pc = 0x4D728Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7288u;
    // 0x4d728c: 0x2463021  addu        $a2, $s2, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D3F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D3F50u, 0x4D7288u, 0x4D7290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7290u;
label_4d7290:
    // 0x4d7290: 0x2a820201  slti        $v0, $s4, 0x201
    ctx->pc = 0x4d7290u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x4d7294: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x4D7294u;
    {
        const bool branch_taken_0x4d7294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D7298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7294u;
        // 0x4d7298: 0x2a020021  slti        $v0, $s0, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7294) {
            ctx->pc = 0x4D7304u;
            goto label_4d7304;
        }
    }
    ctx->pc = 0x4D729Cu;
    // 0x4d729c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4d729cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d72a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d72a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d72a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4d72a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d72a8: 0xc135e10  jal         func_4D7840
    ctx->pc = 0x4D72A8u;
    SET_GPR_U32(ctx, 31, 0x4D72B0u);
    ctx->pc = 0x4D72ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D72A8u;
    // 0x4d72ac: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7840u, 0x4D72A8u, 0x4D72B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D72B0u;
label_4d72b0:
    // 0x4d72b0: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x4d72b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x4d72b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d72b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d72b8: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x4d72b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x4d72bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4d72bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d72c0: 0xc1353de  jal         func_4D4F78
    ctx->pc = 0x4D72C0u;
    SET_GPR_U32(ctx, 31, 0x4D72C8u);
    ctx->pc = 0x4D72C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D72C0u;
    // 0x4d72c4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D4F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D4F78u, 0x4D72C0u, 0x4D72C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D72C8u;
label_4d72c8:
    // 0x4d72c8: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x4d72c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x4d72cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d72ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d72d0: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x4d72d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x4d72d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4d72d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d72d8: 0xc135e10  jal         func_4D7840
    ctx->pc = 0x4D72D8u;
    SET_GPR_U32(ctx, 31, 0x4D72E0u);
    ctx->pc = 0x4D72DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D72D8u;
    // 0x4d72dc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7840u, 0x4D72D8u, 0x4D72E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D72E0u;
label_4d72e0:
    // 0x4d72e0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x4d72e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4d72e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d72e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d72e8: 0x851018  mult        $v0, $a0, $a1
    ctx->pc = 0x4d72e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4d72ec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4d72ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d72f0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4d72f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d72f4: 0xc135e10  jal         func_4D7840
    ctx->pc = 0x4D72F4u;
    SET_GPR_U32(ctx, 31, 0x4D72FCu);
    ctx->pc = 0x4D72F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D72F4u;
    // 0x4d72f8: 0x532821  addu        $a1, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7840u, 0x4D72F4u, 0x4D72FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D72FCu;
label_4d72fc:
    // 0x4d72fc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4D72FCu;
    {
        const bool branch_taken_0x4d72fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D72FCu;
        // 0x4d7300: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d72fc) {
            ctx->pc = 0x4D7338u;
            goto label_4d7338;
        }
    }
    ctx->pc = 0x4D7304u;
label_4d7304:
    // 0x4d7304: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D7304u;
    {
        const bool branch_taken_0x4d7304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D7308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7304u;
        // 0x4d7308: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7304) {
            ctx->pc = 0x4D7324u;
            goto label_4d7324;
        }
    }
    ctx->pc = 0x4D730Cu;
    // 0x4d730c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4d730cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7310: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d7310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7314: 0xc135462  jal         func_4D5188
    ctx->pc = 0x4D7314u;
    SET_GPR_U32(ctx, 31, 0x4D731Cu);
    ctx->pc = 0x4D7318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7314u;
    // 0x4d7318: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D5188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D5188u, 0x4D7314u, 0x4D731Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D731Cu;
label_4d731c:
    // 0x4d731c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4D731Cu;
    {
        const bool branch_taken_0x4d731c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D731Cu;
        // 0x4d7320: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d731c) {
            ctx->pc = 0x4D7338u;
            goto label_4d7338;
        }
    }
    ctx->pc = 0x4D7324u;
label_4d7324:
    // 0x4d7324: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4d7324u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7328: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d7328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d732c: 0xc135e4a  jal         func_4D7928
    ctx->pc = 0x4D732Cu;
    SET_GPR_U32(ctx, 31, 0x4D7334u);
    ctx->pc = 0x4D7330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D732Cu;
    // 0x4d7330: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7928u, 0x4D732Cu, 0x4D7334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7334u;
label_4d7334:
    // 0x4d7334: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4d7334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4d7338:
    // 0x4d7338: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4d7338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d733c: 0xc134e2e  jal         func_4D38B8
    ctx->pc = 0x4D733Cu;
    SET_GPR_U32(ctx, 31, 0x4D7344u);
    ctx->pc = 0x4D7340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D733Cu;
    // 0x4d7340: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D38B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D38B8u, 0x4D733Cu, 0x4D7344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7344u;
label_4d7344:
    // 0x4d7344: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x4D7344u;
    {
        const bool branch_taken_0x4d7344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7344u;
        // 0x4d7348: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7344) {
            ctx->pc = 0x4D73C8u;
            goto label_4d73c8;
        }
    }
    ctx->pc = 0x4D734Cu;
label_4d734c:
    // 0x4d734c: 0x2a820009  slti        $v0, $s4, 0x9
    ctx->pc = 0x4d734cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x4d7350: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4D7350u;
    {
        const bool branch_taken_0x4d7350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D7354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7350u;
        // 0x4d7354: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7350) {
            ctx->pc = 0x4D739Cu;
            goto label_4d739c;
        }
    }
    ctx->pc = 0x4D7358u;
    // 0x4d7358: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x4d7358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4d735c: 0x16820009  bne         $s4, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D735Cu;
    {
        const bool branch_taken_0x4d735c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x4D7360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D735Cu;
        // 0x4d7360: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d735c) {
            ctx->pc = 0x4D7384u;
            goto label_4d7384;
        }
    }
    ctx->pc = 0x4D7364u;
    // 0x4d7364: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x4d7364u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x4d7368: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x4d7368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x4d736c: 0xc135804  jal         func_4D6010
    ctx->pc = 0x4D736Cu;
    SET_GPR_U32(ctx, 31, 0x4D7374u);
    ctx->pc = 0x4D7370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D736Cu;
    // 0x4d7370: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D6010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D6010u, 0x4D736Cu, 0x4D7374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7374u;
label_4d7374:
    // 0x4d7374: 0xc135dcc  jal         func_4D7730
    ctx->pc = 0x4D7374u;
    SET_GPR_U32(ctx, 31, 0x4D737Cu);
    ctx->pc = 0x4D7378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7374u;
    // 0x4d7378: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7730u, 0x4D7374u, 0x4D737Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D737Cu;
label_4d737c:
    // 0x4d737c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x4D737Cu;
    {
        const bool branch_taken_0x4d737c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D737Cu;
        // 0x4d7380: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d737c) {
            ctx->pc = 0x4D73C8u;
            goto label_4d73c8;
        }
    }
    ctx->pc = 0x4D7384u;
label_4d7384:
    // 0x4d7384: 0xc135ae4  jal         func_4D6B90
    ctx->pc = 0x4D7384u;
    SET_GPR_U32(ctx, 31, 0x4D738Cu);
    ctx->pc = 0x4D7388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7384u;
    // 0x4d7388: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D6B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D6B90u, 0x4D7384u, 0x4D738Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D738Cu;
label_4d738c:
    // 0x4d738c: 0xc135dfe  jal         func_4D77F8
    ctx->pc = 0x4D738Cu;
    SET_GPR_U32(ctx, 31, 0x4D7394u);
    ctx->pc = 0x4D7390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D738Cu;
    // 0x4d7390: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D77F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D77F8u, 0x4D738Cu, 0x4D7394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7394u;
label_4d7394:
    // 0x4d7394: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4D7394u;
    {
        const bool branch_taken_0x4d7394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7394u;
        // 0x4d7398: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7394) {
            ctx->pc = 0x4D73C8u;
            goto label_4d73c8;
        }
    }
    ctx->pc = 0x4D739Cu;
label_4d739c:
    // 0x4d739c: 0x16820005  bne         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D739Cu;
    {
        const bool branch_taken_0x4d739c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x4D73A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D739Cu;
        // 0x4d73a0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d739c) {
            ctx->pc = 0x4D73B4u;
            goto label_4d73b4;
        }
    }
    ctx->pc = 0x4D73A4u;
    // 0x4d73a4: 0xc135e7c  jal         func_4D79F0
    ctx->pc = 0x4D73A4u;
    SET_GPR_U32(ctx, 31, 0x4D73ACu);
    ctx->pc = 0x4D73A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D73A4u;
    // 0x4d73a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D79F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D79F0u, 0x4D73A4u, 0x4D73ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D73ACu;
label_4d73ac:
    // 0x4d73ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4D73ACu;
    {
        const bool branch_taken_0x4d73ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D73B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D73ACu;
        // 0x4d73b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d73ac) {
            ctx->pc = 0x4D73C8u;
            goto label_4d73c8;
        }
    }
    ctx->pc = 0x4D73B4u;
label_4d73b4:
    // 0x4d73b4: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D73B4u;
    {
        const bool branch_taken_0x4d73b4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x4D73B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D73B4u;
        // 0x4d73b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d73b4) {
            ctx->pc = 0x4D73C8u;
            goto label_4d73c8;
        }
    }
    ctx->pc = 0x4D73BCu;
    // 0x4d73bc: 0xc135e9e  jal         func_4D7A78
    ctx->pc = 0x4D73BCu;
    SET_GPR_U32(ctx, 31, 0x4D73C4u);
    ctx->pc = 0x4D73C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D73BCu;
    // 0x4d73c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7A78u, 0x4D73BCu, 0x4D73C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D73C4u;
label_4d73c4:
    // 0x4d73c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d73c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d73c8:
    // 0x4d73c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d73c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d73cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d73ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d73d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d73d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d73d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d73d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d73d8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d73d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d73dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4d73dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d73e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4D73E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D73E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D73E0u;
        // 0x4d73e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D73E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D73E8u;
}
