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

// Function: sub_0031F7A0
// Address: 0x31f7a0 - 0x31fa10
void sub_0031F7A0_0x31f7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F7A0_0x31f7a0");
#endif

    switch (ctx->pc) {
        case 0x31f7a0u: goto label_31f7a0;
        case 0x31f7a4u: goto label_31f7a4;
        case 0x31f7a8u: goto label_31f7a8;
        case 0x31f7acu: goto label_31f7ac;
        case 0x31f7b0u: goto label_31f7b0;
        case 0x31f7b4u: goto label_31f7b4;
        case 0x31f7b8u: goto label_31f7b8;
        case 0x31f7bcu: goto label_31f7bc;
        case 0x31f7c0u: goto label_31f7c0;
        case 0x31f7c4u: goto label_31f7c4;
        case 0x31f7c8u: goto label_31f7c8;
        case 0x31f7ccu: goto label_31f7cc;
        case 0x31f7d0u: goto label_31f7d0;
        case 0x31f7d4u: goto label_31f7d4;
        case 0x31f7d8u: goto label_31f7d8;
        case 0x31f7dcu: goto label_31f7dc;
        case 0x31f7e0u: goto label_31f7e0;
        case 0x31f7e4u: goto label_31f7e4;
        case 0x31f7e8u: goto label_31f7e8;
        case 0x31f7ecu: goto label_31f7ec;
        case 0x31f7f0u: goto label_31f7f0;
        case 0x31f7f4u: goto label_31f7f4;
        case 0x31f7f8u: goto label_31f7f8;
        case 0x31f7fcu: goto label_31f7fc;
        case 0x31f800u: goto label_31f800;
        case 0x31f804u: goto label_31f804;
        case 0x31f808u: goto label_31f808;
        case 0x31f80cu: goto label_31f80c;
        case 0x31f810u: goto label_31f810;
        case 0x31f814u: goto label_31f814;
        case 0x31f818u: goto label_31f818;
        case 0x31f81cu: goto label_31f81c;
        case 0x31f820u: goto label_31f820;
        case 0x31f824u: goto label_31f824;
        case 0x31f828u: goto label_31f828;
        case 0x31f82cu: goto label_31f82c;
        case 0x31f830u: goto label_31f830;
        case 0x31f834u: goto label_31f834;
        case 0x31f838u: goto label_31f838;
        case 0x31f83cu: goto label_31f83c;
        case 0x31f840u: goto label_31f840;
        case 0x31f844u: goto label_31f844;
        case 0x31f848u: goto label_31f848;
        case 0x31f84cu: goto label_31f84c;
        case 0x31f850u: goto label_31f850;
        case 0x31f854u: goto label_31f854;
        case 0x31f858u: goto label_31f858;
        case 0x31f85cu: goto label_31f85c;
        case 0x31f860u: goto label_31f860;
        case 0x31f864u: goto label_31f864;
        case 0x31f868u: goto label_31f868;
        case 0x31f86cu: goto label_31f86c;
        case 0x31f870u: goto label_31f870;
        case 0x31f874u: goto label_31f874;
        case 0x31f878u: goto label_31f878;
        case 0x31f87cu: goto label_31f87c;
        case 0x31f880u: goto label_31f880;
        case 0x31f884u: goto label_31f884;
        case 0x31f888u: goto label_31f888;
        case 0x31f88cu: goto label_31f88c;
        case 0x31f890u: goto label_31f890;
        case 0x31f894u: goto label_31f894;
        case 0x31f898u: goto label_31f898;
        case 0x31f89cu: goto label_31f89c;
        case 0x31f8a0u: goto label_31f8a0;
        case 0x31f8a4u: goto label_31f8a4;
        case 0x31f8a8u: goto label_31f8a8;
        case 0x31f8acu: goto label_31f8ac;
        case 0x31f8b0u: goto label_31f8b0;
        case 0x31f8b4u: goto label_31f8b4;
        case 0x31f8b8u: goto label_31f8b8;
        case 0x31f8bcu: goto label_31f8bc;
        case 0x31f8c0u: goto label_31f8c0;
        case 0x31f8c4u: goto label_31f8c4;
        case 0x31f8c8u: goto label_31f8c8;
        case 0x31f8ccu: goto label_31f8cc;
        case 0x31f8d0u: goto label_31f8d0;
        case 0x31f8d4u: goto label_31f8d4;
        case 0x31f8d8u: goto label_31f8d8;
        case 0x31f8dcu: goto label_31f8dc;
        case 0x31f8e0u: goto label_31f8e0;
        case 0x31f8e4u: goto label_31f8e4;
        case 0x31f8e8u: goto label_31f8e8;
        case 0x31f8ecu: goto label_31f8ec;
        case 0x31f8f0u: goto label_31f8f0;
        case 0x31f8f4u: goto label_31f8f4;
        case 0x31f8f8u: goto label_31f8f8;
        case 0x31f8fcu: goto label_31f8fc;
        case 0x31f900u: goto label_31f900;
        case 0x31f904u: goto label_31f904;
        case 0x31f908u: goto label_31f908;
        case 0x31f90cu: goto label_31f90c;
        case 0x31f910u: goto label_31f910;
        case 0x31f914u: goto label_31f914;
        case 0x31f918u: goto label_31f918;
        case 0x31f91cu: goto label_31f91c;
        case 0x31f920u: goto label_31f920;
        case 0x31f924u: goto label_31f924;
        case 0x31f928u: goto label_31f928;
        case 0x31f92cu: goto label_31f92c;
        case 0x31f930u: goto label_31f930;
        case 0x31f934u: goto label_31f934;
        case 0x31f938u: goto label_31f938;
        case 0x31f93cu: goto label_31f93c;
        case 0x31f940u: goto label_31f940;
        case 0x31f944u: goto label_31f944;
        case 0x31f948u: goto label_31f948;
        case 0x31f94cu: goto label_31f94c;
        case 0x31f950u: goto label_31f950;
        case 0x31f954u: goto label_31f954;
        case 0x31f958u: goto label_31f958;
        case 0x31f95cu: goto label_31f95c;
        case 0x31f960u: goto label_31f960;
        case 0x31f964u: goto label_31f964;
        case 0x31f968u: goto label_31f968;
        case 0x31f96cu: goto label_31f96c;
        case 0x31f970u: goto label_31f970;
        case 0x31f974u: goto label_31f974;
        case 0x31f978u: goto label_31f978;
        case 0x31f97cu: goto label_31f97c;
        case 0x31f980u: goto label_31f980;
        case 0x31f984u: goto label_31f984;
        case 0x31f988u: goto label_31f988;
        case 0x31f98cu: goto label_31f98c;
        case 0x31f990u: goto label_31f990;
        case 0x31f994u: goto label_31f994;
        case 0x31f998u: goto label_31f998;
        case 0x31f99cu: goto label_31f99c;
        case 0x31f9a0u: goto label_31f9a0;
        case 0x31f9a4u: goto label_31f9a4;
        case 0x31f9a8u: goto label_31f9a8;
        case 0x31f9acu: goto label_31f9ac;
        case 0x31f9b0u: goto label_31f9b0;
        case 0x31f9b4u: goto label_31f9b4;
        case 0x31f9b8u: goto label_31f9b8;
        case 0x31f9bcu: goto label_31f9bc;
        case 0x31f9c0u: goto label_31f9c0;
        case 0x31f9c4u: goto label_31f9c4;
        case 0x31f9c8u: goto label_31f9c8;
        case 0x31f9ccu: goto label_31f9cc;
        case 0x31f9d0u: goto label_31f9d0;
        case 0x31f9d4u: goto label_31f9d4;
        case 0x31f9d8u: goto label_31f9d8;
        case 0x31f9dcu: goto label_31f9dc;
        case 0x31f9e0u: goto label_31f9e0;
        case 0x31f9e4u: goto label_31f9e4;
        case 0x31f9e8u: goto label_31f9e8;
        case 0x31f9ecu: goto label_31f9ec;
        case 0x31f9f0u: goto label_31f9f0;
        case 0x31f9f4u: goto label_31f9f4;
        case 0x31f9f8u: goto label_31f9f8;
        case 0x31f9fcu: goto label_31f9fc;
        case 0x31fa00u: goto label_31fa00;
        case 0x31fa04u: goto label_31fa04;
        case 0x31fa08u: goto label_31fa08;
        case 0x31fa0cu: goto label_31fa0c;
        default: break;
    }

    ctx->pc = 0x31f7a0u;

label_31f7a0:
    // 0x31f7a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x31f7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_31f7a4:
    // 0x31f7a4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x31f7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_31f7a8:
    // 0x31f7a8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x31f7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_31f7ac:
    // 0x31f7ac: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x31f7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_31f7b0:
    // 0x31f7b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31f7b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31f7b4:
    // 0x31f7b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31f7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_31f7b8:
    // 0x31f7b8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x31f7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_31f7bc:
    // 0x31f7bc: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x31f7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_31f7c0:
    // 0x31f7c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31f7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31f7c4:
    // 0x31f7c4: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x31f7c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_31f7c8:
    // 0x31f7c8: 0x92220040  lbu         $v0, 0x40($s1)
    ctx->pc = 0x31f7c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 64)));
label_31f7cc:
    // 0x31f7cc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_31f7d0:
    if (ctx->pc == 0x31F7D0u) {
        ctx->pc = 0x31F7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F7CCu;
        // 0x31f7d0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F7D4u;
        goto label_31f7d4;
    }
    ctx->pc = 0x31F7CCu;
    {
        const bool branch_taken_0x31f7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F7CCu;
        // 0x31f7d0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f7cc) {
            ctx->pc = 0x31F7F4u;
            goto label_31f7f4;
        }
    }
    ctx->pc = 0x31F7D4u;
label_31f7d4:
    // 0x31f7d4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x31f7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_31f7d8:
    // 0x31f7d8: 0x8c42489c  lw          $v0, 0x489C($v0)
    ctx->pc = 0x31f7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_31f7dc:
    // 0x31f7dc: 0x90430411  lbu         $v1, 0x411($v0)
    ctx->pc = 0x31f7dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1041)));
label_31f7e0:
    // 0x31f7e0: 0x54600081  bnel        $v1, $zero, . + 4 + (0x81 << 2)
label_31f7e4:
    if (ctx->pc == 0x31F7E4u) {
        ctx->pc = 0x31F7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F7E0u;
        // 0x31f7e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F7E8u;
        goto label_31f7e8;
    }
    ctx->pc = 0x31F7E0u;
    {
        const bool branch_taken_0x31f7e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f7e0) {
            ctx->pc = 0x31F7E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F7E0u;
            // 0x31f7e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F9E8u;
            goto label_31f9e8;
        }
    }
    ctx->pc = 0x31F7E8u;
label_31f7e8:
    // 0x31f7e8: 0x90420410  lbu         $v0, 0x410($v0)
    ctx->pc = 0x31f7e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1040)));
label_31f7ec:
    // 0x31f7ec: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_31f7f0:
    if (ctx->pc == 0x31F7F0u) {
        ctx->pc = 0x31F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F7ECu;
        // 0x31f7f0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F7F4u;
        goto label_31f7f4;
    }
    ctx->pc = 0x31F7ECu;
    {
        const bool branch_taken_0x31f7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f7ec) {
            ctx->pc = 0x31F7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F7ECu;
            // 0x31f7f0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F7FCu;
            goto label_31f7fc;
        }
    }
    ctx->pc = 0x31F7F4u;
label_31f7f4:
    // 0x31f7f4: 0x1000007c  b           . + 4 + (0x7C << 2)
label_31f7f8:
    if (ctx->pc == 0x31F7F8u) {
        ctx->pc = 0x31F7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F7F4u;
        // 0x31f7f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F7FCu;
        goto label_31f7fc;
    }
    ctx->pc = 0x31F7F4u;
    {
        const bool branch_taken_0x31f7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F7F4u;
        // 0x31f7f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f7f4) {
            ctx->pc = 0x31F9E8u;
            goto label_31f9e8;
        }
    }
    ctx->pc = 0x31F7FCu;
label_31f7fc:
    // 0x31f7fc: 0xc059856  jal         func_166158
label_31f800:
    if (ctx->pc == 0x31F800u) {
        ctx->pc = 0x31F800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F7FCu;
        // 0x31f800: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F804u;
        goto label_31f804;
    }
    ctx->pc = 0x31F7FCu;
    SET_GPR_U32(ctx, 31, 0x31F804u);
    ctx->pc = 0x31F800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F7FCu;
    // 0x31f800: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x31F7FCu, 0x31F804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F804u;
label_31f804:
    // 0x31f804: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31f804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31f808:
    // 0x31f808: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x31f808u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_31f80c:
    // 0x31f80c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x31f80cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_31f810:
    // 0x31f810: 0x1603006d  bne         $s0, $v1, . + 4 + (0x6D << 2)
label_31f814:
    if (ctx->pc == 0x31F814u) {
        ctx->pc = 0x31F814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F810u;
        // 0x31f814: 0xae200034  sw          $zero, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F818u;
        goto label_31f818;
    }
    ctx->pc = 0x31F810u;
    {
        const bool branch_taken_0x31f810 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x31F814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F810u;
        // 0x31f814: 0xae200034  sw          $zero, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f810) {
            ctx->pc = 0x31F9C8u;
            goto label_31f9c8;
        }
    }
    ctx->pc = 0x31F818u;
label_31f818:
    // 0x31f818: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x31f818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31f81c:
    // 0x31f81c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x31f81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_31f820:
    // 0x31f820: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x31f820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_31f824:
    // 0x31f824: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x31f824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_31f828:
    // 0x31f828: 0x24534b00  addiu       $s3, $v0, 0x4B00
    ctx->pc = 0x31f828u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_31f82c:
    // 0x31f82c: 0x24750048  addiu       $s5, $v1, 0x48
    ctx->pc = 0x31f82cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_31f830:
    // 0x31f830: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x31f830u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31f834:
    // 0x31f834: 0x3c14006f  lui         $s4, 0x6F
    ctx->pc = 0x31f834u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)111 << 16));
label_31f838:
    // 0x31f838: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31f838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31f83c:
    // 0x31f83c: 0x0  nop
    ctx->pc = 0x31f83cu;
    // NOP
label_31f840:
    // 0x31f840: 0xc137826  jal         func_4DE098
label_31f844:
    if (ctx->pc == 0x31F844u) {
        ctx->pc = 0x31F844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F840u;
        // 0x31f844: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F848u;
        goto label_31f848;
    }
    ctx->pc = 0x31F840u;
    SET_GPR_U32(ctx, 31, 0x31F848u);
    ctx->pc = 0x31F844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F840u;
    // 0x31f844: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x31F840u, 0x31F848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F848u;
label_31f848:
    // 0x31f848: 0xc0e409a  jal         func_390268
label_31f84c:
    if (ctx->pc == 0x31F84Cu) {
        ctx->pc = 0x31F84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F848u;
        // 0x31f84c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F850u;
        goto label_31f850;
    }
    ctx->pc = 0x31F848u;
    SET_GPR_U32(ctx, 31, 0x31F850u);
    ctx->pc = 0x31F84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F848u;
    // 0x31f84c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x31F848u, 0x31F850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F850u;
label_31f850:
    // 0x31f850: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31f850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31f854:
    // 0x31f854: 0x52000053  beql        $s0, $zero, . + 4 + (0x53 << 2)
label_31f858:
    if (ctx->pc == 0x31F858u) {
        ctx->pc = 0x31F858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F854u;
        // 0x31f858: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F85Cu;
        goto label_31f85c;
    }
    ctx->pc = 0x31F854u;
    {
        const bool branch_taken_0x31f854 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f854) {
            ctx->pc = 0x31F858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F854u;
            // 0x31f858: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F9A4u;
            goto label_31f9a4;
        }
    }
    ctx->pc = 0x31F85Cu;
label_31f85c:
    // 0x31f85c: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x31f85cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_31f860:
    // 0x31f860: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x31f860u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_31f864:
    // 0x31f864: 0x5440004f  bnel        $v0, $zero, . + 4 + (0x4F << 2)
label_31f868:
    if (ctx->pc == 0x31F868u) {
        ctx->pc = 0x31F868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F864u;
        // 0x31f868: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F86Cu;
        goto label_31f86c;
    }
    ctx->pc = 0x31F864u;
    {
        const bool branch_taken_0x31f864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f864) {
            ctx->pc = 0x31F868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F864u;
            // 0x31f868: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F9A4u;
            goto label_31f9a4;
        }
    }
    ctx->pc = 0x31F86Cu;
label_31f86c:
    // 0x31f86c: 0xc087502  jal         func_21D408
label_31f870:
    if (ctx->pc == 0x31F870u) {
        ctx->pc = 0x31F870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F86Cu;
        // 0x31f870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F874u;
        goto label_31f874;
    }
    ctx->pc = 0x31F86Cu;
    SET_GPR_U32(ctx, 31, 0x31F874u);
    ctx->pc = 0x31F870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F86Cu;
    // 0x31f870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31F86Cu, 0x31F874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F874u;
label_31f874:
    // 0x31f874: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x31f874u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31f878:
    // 0x31f878: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x31f878u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_31f87c:
    // 0x31f87c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_31f880:
    if (ctx->pc == 0x31F880u) {
        ctx->pc = 0x31F880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F87Cu;
        // 0x31f880: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F884u;
        goto label_31f884;
    }
    ctx->pc = 0x31F87Cu;
    {
        const bool branch_taken_0x31f87c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x31F880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F87Cu;
        // 0x31f880: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f87c) {
            ctx->pc = 0x31F890u;
            goto label_31f890;
        }
    }
    ctx->pc = 0x31F884u;
label_31f884:
    // 0x31f884: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x31f884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31f888:
    // 0x31f888: 0x10000002  b           . + 4 + (0x2 << 2)
label_31f88c:
    if (ctx->pc == 0x31F88Cu) {
        ctx->pc = 0x31F88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F888u;
        // 0x31f88c: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F890u;
        goto label_31f890;
    }
    ctx->pc = 0x31F888u;
    {
        const bool branch_taken_0x31f888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F888u;
        // 0x31f88c: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f888) {
            ctx->pc = 0x31F894u;
            goto label_31f894;
        }
    }
    ctx->pc = 0x31F890u;
label_31f890:
    // 0x31f890: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31f890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31f894:
    // 0x31f894: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
label_31f898:
    if (ctx->pc == 0x31F898u) {
        ctx->pc = 0x31F898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F894u;
        // 0x31f898: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F89Cu;
        goto label_31f89c;
    }
    ctx->pc = 0x31F894u;
    {
        const bool branch_taken_0x31f894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f894) {
            ctx->pc = 0x31F898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F894u;
            // 0x31f898: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F9A4u;
            goto label_31f9a4;
        }
    }
    ctx->pc = 0x31F89Cu;
label_31f89c:
    // 0x31f89c: 0xc087502  jal         func_21D408
label_31f8a0:
    if (ctx->pc == 0x31F8A0u) {
        ctx->pc = 0x31F8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F89Cu;
        // 0x31f8a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F8A4u;
        goto label_31f8a4;
    }
    ctx->pc = 0x31F89Cu;
    SET_GPR_U32(ctx, 31, 0x31F8A4u);
    ctx->pc = 0x31F8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F89Cu;
    // 0x31f8a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31F89Cu, 0x31F8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F8A4u;
label_31f8a4:
    // 0x31f8a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x31f8a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31f8a8:
    // 0x31f8a8: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x31f8a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_31f8ac:
    // 0x31f8ac: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_31f8b0:
    if (ctx->pc == 0x31F8B0u) {
        ctx->pc = 0x31F8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F8ACu;
        // 0x31f8b0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F8B4u;
        goto label_31f8b4;
    }
    ctx->pc = 0x31F8ACu;
    {
        const bool branch_taken_0x31f8ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x31F8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F8ACu;
        // 0x31f8b0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f8ac) {
            ctx->pc = 0x31F8C0u;
            goto label_31f8c0;
        }
    }
    ctx->pc = 0x31F8B4u;
label_31f8b4:
    // 0x31f8b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x31f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31f8b8:
    // 0x31f8b8: 0x10000002  b           . + 4 + (0x2 << 2)
label_31f8bc:
    if (ctx->pc == 0x31F8BCu) {
        ctx->pc = 0x31F8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F8B8u;
        // 0x31f8bc: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F8C0u;
        goto label_31f8c0;
    }
    ctx->pc = 0x31F8B8u;
    {
        const bool branch_taken_0x31f8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F8B8u;
        // 0x31f8bc: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f8b8) {
            ctx->pc = 0x31F8C4u;
            goto label_31f8c4;
        }
    }
    ctx->pc = 0x31F8C0u;
label_31f8c0:
    // 0x31f8c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31f8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31f8c4:
    // 0x31f8c4: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x31f8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_31f8c8:
    // 0x31f8c8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x31f8c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_31f8cc:
    // 0x31f8cc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x31f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_31f8d0:
    // 0x31f8d0: 0x40f809  jalr        $v0
label_31f8d4:
    if (ctx->pc == 0x31F8D4u) {
        ctx->pc = 0x31F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F8D0u;
        // 0x31f8d4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F8D8u;
        goto label_31f8d8;
    }
    ctx->pc = 0x31F8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31F8D8u);
        ctx->pc = 0x31F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F8D0u;
        // 0x31f8d4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F8D0u, 0x31F8D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31F8D8u;
label_31f8d8:
    // 0x31f8d8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x31f8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_31f8dc:
    // 0x31f8dc: 0x50430031  beql        $v0, $v1, . + 4 + (0x31 << 2)
label_31f8e0:
    if (ctx->pc == 0x31F8E0u) {
        ctx->pc = 0x31F8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F8DCu;
        // 0x31f8e0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F8E4u;
        goto label_31f8e4;
    }
    ctx->pc = 0x31F8DCu;
    {
        const bool branch_taken_0x31f8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x31f8dc) {
            ctx->pc = 0x31F8E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F8DCu;
            // 0x31f8e0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F9A4u;
            goto label_31f9a4;
        }
    }
    ctx->pc = 0x31F8E4u;
label_31f8e4:
    // 0x31f8e4: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x31f8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_31f8e8:
    // 0x31f8e8: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_31f8ec:
    if (ctx->pc == 0x31F8ECu) {
        ctx->pc = 0x31F8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F8E8u;
        // 0x31f8ec: 0x8e22003c  lw          $v0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F8F0u;
        goto label_31f8f0;
    }
    ctx->pc = 0x31F8E8u;
    {
        const bool branch_taken_0x31f8e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f8e8) {
            ctx->pc = 0x31F8ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F8E8u;
            // 0x31f8ec: 0x8e22003c  lw          $v0, 0x3C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F944u;
            goto label_31f944;
        }
    }
    ctx->pc = 0x31F8F0u;
label_31f8f0:
    // 0x31f8f0: 0x2684b8a0  addiu       $a0, $s4, -0x4760
    ctx->pc = 0x31f8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949024));
label_31f8f4:
    // 0x31f8f4: 0xc0cd4ee  jal         func_3353B8
label_31f8f8:
    if (ctx->pc == 0x31F8F8u) {
        ctx->pc = 0x31F8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F8F4u;
        // 0x31f8f8: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F8FCu;
        goto label_31f8fc;
    }
    ctx->pc = 0x31F8F4u;
    SET_GPR_U32(ctx, 31, 0x31F8FCu);
    ctx->pc = 0x31F8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F8F4u;
    // 0x31f8f8: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x31F8F4u, 0x31F8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F8FCu;
label_31f8fc:
    // 0x31f8fc: 0x2c420033  sltiu       $v0, $v0, 0x33
    ctx->pc = 0x31f8fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
label_31f900:
    // 0x31f900: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_31f904:
    if (ctx->pc == 0x31F904u) {
        ctx->pc = 0x31F904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F900u;
        // 0x31f904: 0x8e22003c  lw          $v0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F908u;
        goto label_31f908;
    }
    ctx->pc = 0x31F900u;
    {
        const bool branch_taken_0x31f900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F900u;
        // 0x31f904: 0x8e22003c  lw          $v0, 0x3C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f900) {
            ctx->pc = 0x31F944u;
            goto label_31f944;
        }
    }
    ctx->pc = 0x31F908u;
label_31f908:
    // 0x31f908: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
label_31f90c:
    if (ctx->pc == 0x31F90Cu) {
        ctx->pc = 0x31F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F908u;
        // 0x31f90c: 0xae300038  sw          $s0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F910u;
        goto label_31f910;
    }
    ctx->pc = 0x31F908u;
    {
        const bool branch_taken_0x31f908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f908) {
            ctx->pc = 0x31F90Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F908u;
            // 0x31f90c: 0xae300038  sw          $s0, 0x38($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F9A0u;
            goto label_31f9a0;
        }
    }
    ctx->pc = 0x31F910u;
label_31f910:
    // 0x31f910: 0x84450092  lh          $a1, 0x92($v0)
    ctx->pc = 0x31f910u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_31f914:
    // 0x31f914: 0x86040092  lh          $a0, 0x92($s0)
    ctx->pc = 0x31f914u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_31f918:
    // 0x31f918: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x31f918u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_31f91c:
    // 0x31f91c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x31f91cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_31f920:
    // 0x31f920: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x31f920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_31f924:
    // 0x31f924: 0xc0cdb38  jal         func_336CE0
label_31f928:
    if (ctx->pc == 0x31F928u) {
        ctx->pc = 0x31F928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F924u;
        // 0x31f928: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F92Cu;
        goto label_31f92c;
    }
    ctx->pc = 0x31F924u;
    SET_GPR_U32(ctx, 31, 0x31F92Cu);
    ctx->pc = 0x31F928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F924u;
    // 0x31f928: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x31F924u, 0x31F92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F92Cu;
label_31f92c:
    // 0x31f92c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x31f92cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31f930:
    // 0x31f930: 0x0  nop
    ctx->pc = 0x31f930u;
    // NOP
label_31f934:
    // 0x31f934: 0x4503001b  bc1tl       . + 4 + (0x1B << 2)
label_31f938:
    if (ctx->pc == 0x31F938u) {
        ctx->pc = 0x31F938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F934u;
        // 0x31f938: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F93Cu;
        goto label_31f93c;
    }
    ctx->pc = 0x31F934u;
    {
        const bool branch_taken_0x31f934 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31f934) {
            ctx->pc = 0x31F938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F934u;
            // 0x31f938: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F9A4u;
            goto label_31f9a4;
        }
    }
    ctx->pc = 0x31F93Cu;
label_31f93c:
    // 0x31f93c: 0x10000018  b           . + 4 + (0x18 << 2)
label_31f940:
    if (ctx->pc == 0x31F940u) {
        ctx->pc = 0x31F940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F93Cu;
        // 0x31f940: 0xae300038  sw          $s0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F944u;
        goto label_31f944;
    }
    ctx->pc = 0x31F93Cu;
    {
        const bool branch_taken_0x31f93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F93Cu;
        // 0x31f940: 0xae300038  sw          $s0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f93c) {
            ctx->pc = 0x31F9A0u;
            goto label_31f9a0;
        }
    }
    ctx->pc = 0x31F944u;
label_31f944:
    // 0x31f944: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_31f948:
    if (ctx->pc == 0x31F948u) {
        ctx->pc = 0x31F948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F944u;
        // 0x31f948: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F94Cu;
        goto label_31f94c;
    }
    ctx->pc = 0x31F944u;
    {
        const bool branch_taken_0x31f944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f944) {
            ctx->pc = 0x31F948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F944u;
            // 0x31f948: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F9A4u;
            goto label_31f9a4;
        }
    }
    ctx->pc = 0x31F94Cu;
label_31f94c:
    // 0x31f94c: 0x2684b8a0  addiu       $a0, $s4, -0x4760
    ctx->pc = 0x31f94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949024));
label_31f950:
    // 0x31f950: 0xc0cd4ee  jal         func_3353B8
label_31f954:
    if (ctx->pc == 0x31F954u) {
        ctx->pc = 0x31F954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F950u;
        // 0x31f954: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F958u;
        goto label_31f958;
    }
    ctx->pc = 0x31F950u;
    SET_GPR_U32(ctx, 31, 0x31F958u);
    ctx->pc = 0x31F954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F950u;
    // 0x31f954: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x31F950u, 0x31F958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F958u;
label_31f958:
    // 0x31f958: 0x2c420033  sltiu       $v0, $v0, 0x33
    ctx->pc = 0x31f958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
label_31f95c:
    // 0x31f95c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_31f960:
    if (ctx->pc == 0x31F960u) {
        ctx->pc = 0x31F960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F95Cu;
        // 0x31f960: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F964u;
        goto label_31f964;
    }
    ctx->pc = 0x31F95Cu;
    {
        const bool branch_taken_0x31f95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f95c) {
            ctx->pc = 0x31F960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F95Cu;
            // 0x31f960: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F9A4u;
            goto label_31f9a4;
        }
    }
    ctx->pc = 0x31F964u;
label_31f964:
    // 0x31f964: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x31f964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_31f968:
    // 0x31f968: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_31f96c:
    if (ctx->pc == 0x31F96Cu) {
        ctx->pc = 0x31F96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F968u;
        // 0x31f96c: 0xae30003c  sw          $s0, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F970u;
        goto label_31f970;
    }
    ctx->pc = 0x31F968u;
    {
        const bool branch_taken_0x31f968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f968) {
            ctx->pc = 0x31F96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F968u;
            // 0x31f96c: 0xae30003c  sw          $s0, 0x3C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F9A0u;
            goto label_31f9a0;
        }
    }
    ctx->pc = 0x31F970u;
label_31f970:
    // 0x31f970: 0x84450092  lh          $a1, 0x92($v0)
    ctx->pc = 0x31f970u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_31f974:
    // 0x31f974: 0x86040092  lh          $a0, 0x92($s0)
    ctx->pc = 0x31f974u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_31f978:
    // 0x31f978: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x31f978u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_31f97c:
    // 0x31f97c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x31f97cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_31f980:
    // 0x31f980: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x31f980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_31f984:
    // 0x31f984: 0xc0cdb38  jal         func_336CE0
label_31f988:
    if (ctx->pc == 0x31F988u) {
        ctx->pc = 0x31F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F984u;
        // 0x31f988: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F98Cu;
        goto label_31f98c;
    }
    ctx->pc = 0x31F984u;
    SET_GPR_U32(ctx, 31, 0x31F98Cu);
    ctx->pc = 0x31F988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F984u;
    // 0x31f988: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x31F984u, 0x31F98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F98Cu;
label_31f98c:
    // 0x31f98c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x31f98cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31f990:
    // 0x31f990: 0x0  nop
    ctx->pc = 0x31f990u;
    // NOP
label_31f994:
    // 0x31f994: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_31f998:
    if (ctx->pc == 0x31F998u) {
        ctx->pc = 0x31F998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F994u;
        // 0x31f998: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F99Cu;
        goto label_31f99c;
    }
    ctx->pc = 0x31F994u;
    {
        const bool branch_taken_0x31f994 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31f994) {
            ctx->pc = 0x31F998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F994u;
            // 0x31f998: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F9A4u;
            goto label_31f9a4;
        }
    }
    ctx->pc = 0x31F99Cu;
label_31f99c:
    // 0x31f99c: 0xae30003c  sw          $s0, 0x3C($s1)
    ctx->pc = 0x31f99cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 16));
label_31f9a0:
    // 0x31f9a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x31f9a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_31f9a4:
    // 0x31f9a4: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x31f9a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_31f9a8:
    // 0x31f9a8: 0x5440ffa5  bnel        $v0, $zero, . + 4 + (-0x5B << 2)
label_31f9ac:
    if (ctx->pc == 0x31F9ACu) {
        ctx->pc = 0x31F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F9A8u;
        // 0x31f9ac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F9B0u;
        goto label_31f9b0;
    }
    ctx->pc = 0x31F9A8u;
    {
        const bool branch_taken_0x31f9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31f9a8) {
            ctx->pc = 0x31F9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F9A8u;
            // 0x31f9ac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31f840;
        }
    }
    ctx->pc = 0x31F9B0u;
label_31f9b0:
    // 0x31f9b0: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x31f9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_31f9b4:
    // 0x31f9b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_31f9b8:
    if (ctx->pc == 0x31F9B8u) {
        ctx->pc = 0x31F9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F9B4u;
        // 0x31f9b8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F9BCu;
        goto label_31f9bc;
    }
    ctx->pc = 0x31F9B4u;
    {
        const bool branch_taken_0x31f9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F9B4u;
        // 0x31f9b8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f9b4) {
            ctx->pc = 0x31F9CCu;
            goto label_31f9cc;
        }
    }
    ctx->pc = 0x31F9BCu;
label_31f9bc:
    // 0x31f9bc: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x31f9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_31f9c0:
    // 0x31f9c0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_31f9c4:
    if (ctx->pc == 0x31F9C4u) {
        ctx->pc = 0x31F9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F9C0u;
        // 0x31f9c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31F9C8u;
        goto label_31f9c8;
    }
    ctx->pc = 0x31F9C0u;
    {
        const bool branch_taken_0x31f9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F9C0u;
        // 0x31f9c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f9c0) {
            ctx->pc = 0x31F9E8u;
            goto label_31f9e8;
        }
    }
    ctx->pc = 0x31F9C8u;
label_31f9c8:
    // 0x31f9c8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x31f9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_31f9cc:
    // 0x31f9cc: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x31f9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
label_31f9d0:
    // 0x31f9d0: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x31f9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_31f9d4:
    // 0x31f9d4: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x31f9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_31f9d8:
    // 0x31f9d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31f9d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31f9dc:
    // 0x31f9dc: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x31f9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_31f9e0:
    // 0x31f9e0: 0x24630bb8  addiu       $v1, $v1, 0xBB8
    ctx->pc = 0x31f9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3000));
label_31f9e4:
    // 0x31f9e4: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x31f9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
label_31f9e8:
    // 0x31f9e8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x31f9e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31f9ec:
    // 0x31f9ec: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x31f9ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31f9f0:
    // 0x31f9f0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x31f9f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31f9f4:
    // 0x31f9f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31f9f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31f9f8:
    // 0x31f9f8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x31f9f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31f9fc:
    // 0x31f9fc: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x31f9fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_31fa00:
    // 0x31fa00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31fa00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31fa04:
    // 0x31fa04: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x31fa04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_31fa08:
    // 0x31fa08: 0x3e00008  jr          $ra
label_31fa0c:
    if (ctx->pc == 0x31FA0Cu) {
        ctx->pc = 0x31FA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FA08u;
        // 0x31fa0c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FA10u;
        goto label_fallthrough_0x31fa08;
    }
    ctx->pc = 0x31FA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FA08u;
        // 0x31fa0c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31fa08:
    ctx->pc = 0x31FA10u;
}
