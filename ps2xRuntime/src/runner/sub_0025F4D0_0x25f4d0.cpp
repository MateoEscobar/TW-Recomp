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

// Function: sub_0025F4D0
// Address: 0x25f4d0 - 0x25f770
void sub_0025F4D0_0x25f4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F4D0_0x25f4d0");
#endif

    switch (ctx->pc) {
        case 0x25f4d0u: goto label_25f4d0;
        case 0x25f4d4u: goto label_25f4d4;
        case 0x25f4d8u: goto label_25f4d8;
        case 0x25f4dcu: goto label_25f4dc;
        case 0x25f4e0u: goto label_25f4e0;
        case 0x25f4e4u: goto label_25f4e4;
        case 0x25f4e8u: goto label_25f4e8;
        case 0x25f4ecu: goto label_25f4ec;
        case 0x25f4f0u: goto label_25f4f0;
        case 0x25f4f4u: goto label_25f4f4;
        case 0x25f4f8u: goto label_25f4f8;
        case 0x25f4fcu: goto label_25f4fc;
        case 0x25f500u: goto label_25f500;
        case 0x25f504u: goto label_25f504;
        case 0x25f508u: goto label_25f508;
        case 0x25f50cu: goto label_25f50c;
        case 0x25f510u: goto label_25f510;
        case 0x25f514u: goto label_25f514;
        case 0x25f518u: goto label_25f518;
        case 0x25f51cu: goto label_25f51c;
        case 0x25f520u: goto label_25f520;
        case 0x25f524u: goto label_25f524;
        case 0x25f528u: goto label_25f528;
        case 0x25f52cu: goto label_25f52c;
        case 0x25f530u: goto label_25f530;
        case 0x25f534u: goto label_25f534;
        case 0x25f538u: goto label_25f538;
        case 0x25f53cu: goto label_25f53c;
        case 0x25f540u: goto label_25f540;
        case 0x25f544u: goto label_25f544;
        case 0x25f548u: goto label_25f548;
        case 0x25f54cu: goto label_25f54c;
        case 0x25f550u: goto label_25f550;
        case 0x25f554u: goto label_25f554;
        case 0x25f558u: goto label_25f558;
        case 0x25f55cu: goto label_25f55c;
        case 0x25f560u: goto label_25f560;
        case 0x25f564u: goto label_25f564;
        case 0x25f568u: goto label_25f568;
        case 0x25f56cu: goto label_25f56c;
        case 0x25f570u: goto label_25f570;
        case 0x25f574u: goto label_25f574;
        case 0x25f578u: goto label_25f578;
        case 0x25f57cu: goto label_25f57c;
        case 0x25f580u: goto label_25f580;
        case 0x25f584u: goto label_25f584;
        case 0x25f588u: goto label_25f588;
        case 0x25f58cu: goto label_25f58c;
        case 0x25f590u: goto label_25f590;
        case 0x25f594u: goto label_25f594;
        case 0x25f598u: goto label_25f598;
        case 0x25f59cu: goto label_25f59c;
        case 0x25f5a0u: goto label_25f5a0;
        case 0x25f5a4u: goto label_25f5a4;
        case 0x25f5a8u: goto label_25f5a8;
        case 0x25f5acu: goto label_25f5ac;
        case 0x25f5b0u: goto label_25f5b0;
        case 0x25f5b4u: goto label_25f5b4;
        case 0x25f5b8u: goto label_25f5b8;
        case 0x25f5bcu: goto label_25f5bc;
        case 0x25f5c0u: goto label_25f5c0;
        case 0x25f5c4u: goto label_25f5c4;
        case 0x25f5c8u: goto label_25f5c8;
        case 0x25f5ccu: goto label_25f5cc;
        case 0x25f5d0u: goto label_25f5d0;
        case 0x25f5d4u: goto label_25f5d4;
        case 0x25f5d8u: goto label_25f5d8;
        case 0x25f5dcu: goto label_25f5dc;
        case 0x25f5e0u: goto label_25f5e0;
        case 0x25f5e4u: goto label_25f5e4;
        case 0x25f5e8u: goto label_25f5e8;
        case 0x25f5ecu: goto label_25f5ec;
        case 0x25f5f0u: goto label_25f5f0;
        case 0x25f5f4u: goto label_25f5f4;
        case 0x25f5f8u: goto label_25f5f8;
        case 0x25f5fcu: goto label_25f5fc;
        case 0x25f600u: goto label_25f600;
        case 0x25f604u: goto label_25f604;
        case 0x25f608u: goto label_25f608;
        case 0x25f60cu: goto label_25f60c;
        case 0x25f610u: goto label_25f610;
        case 0x25f614u: goto label_25f614;
        case 0x25f618u: goto label_25f618;
        case 0x25f61cu: goto label_25f61c;
        case 0x25f620u: goto label_25f620;
        case 0x25f624u: goto label_25f624;
        case 0x25f628u: goto label_25f628;
        case 0x25f62cu: goto label_25f62c;
        case 0x25f630u: goto label_25f630;
        case 0x25f634u: goto label_25f634;
        case 0x25f638u: goto label_25f638;
        case 0x25f63cu: goto label_25f63c;
        case 0x25f640u: goto label_25f640;
        case 0x25f644u: goto label_25f644;
        case 0x25f648u: goto label_25f648;
        case 0x25f64cu: goto label_25f64c;
        case 0x25f650u: goto label_25f650;
        case 0x25f654u: goto label_25f654;
        case 0x25f658u: goto label_25f658;
        case 0x25f65cu: goto label_25f65c;
        case 0x25f660u: goto label_25f660;
        case 0x25f664u: goto label_25f664;
        case 0x25f668u: goto label_25f668;
        case 0x25f66cu: goto label_25f66c;
        case 0x25f670u: goto label_25f670;
        case 0x25f674u: goto label_25f674;
        case 0x25f678u: goto label_25f678;
        case 0x25f67cu: goto label_25f67c;
        case 0x25f680u: goto label_25f680;
        case 0x25f684u: goto label_25f684;
        case 0x25f688u: goto label_25f688;
        case 0x25f68cu: goto label_25f68c;
        case 0x25f690u: goto label_25f690;
        case 0x25f694u: goto label_25f694;
        case 0x25f698u: goto label_25f698;
        case 0x25f69cu: goto label_25f69c;
        case 0x25f6a0u: goto label_25f6a0;
        case 0x25f6a4u: goto label_25f6a4;
        case 0x25f6a8u: goto label_25f6a8;
        case 0x25f6acu: goto label_25f6ac;
        case 0x25f6b0u: goto label_25f6b0;
        case 0x25f6b4u: goto label_25f6b4;
        case 0x25f6b8u: goto label_25f6b8;
        case 0x25f6bcu: goto label_25f6bc;
        case 0x25f6c0u: goto label_25f6c0;
        case 0x25f6c4u: goto label_25f6c4;
        case 0x25f6c8u: goto label_25f6c8;
        case 0x25f6ccu: goto label_25f6cc;
        case 0x25f6d0u: goto label_25f6d0;
        case 0x25f6d4u: goto label_25f6d4;
        case 0x25f6d8u: goto label_25f6d8;
        case 0x25f6dcu: goto label_25f6dc;
        case 0x25f6e0u: goto label_25f6e0;
        case 0x25f6e4u: goto label_25f6e4;
        case 0x25f6e8u: goto label_25f6e8;
        case 0x25f6ecu: goto label_25f6ec;
        case 0x25f6f0u: goto label_25f6f0;
        case 0x25f6f4u: goto label_25f6f4;
        case 0x25f6f8u: goto label_25f6f8;
        case 0x25f6fcu: goto label_25f6fc;
        case 0x25f700u: goto label_25f700;
        case 0x25f704u: goto label_25f704;
        case 0x25f708u: goto label_25f708;
        case 0x25f70cu: goto label_25f70c;
        case 0x25f710u: goto label_25f710;
        case 0x25f714u: goto label_25f714;
        case 0x25f718u: goto label_25f718;
        case 0x25f71cu: goto label_25f71c;
        case 0x25f720u: goto label_25f720;
        case 0x25f724u: goto label_25f724;
        case 0x25f728u: goto label_25f728;
        case 0x25f72cu: goto label_25f72c;
        case 0x25f730u: goto label_25f730;
        case 0x25f734u: goto label_25f734;
        case 0x25f738u: goto label_25f738;
        case 0x25f73cu: goto label_25f73c;
        case 0x25f740u: goto label_25f740;
        case 0x25f744u: goto label_25f744;
        case 0x25f748u: goto label_25f748;
        case 0x25f74cu: goto label_25f74c;
        case 0x25f750u: goto label_25f750;
        case 0x25f754u: goto label_25f754;
        case 0x25f758u: goto label_25f758;
        case 0x25f75cu: goto label_25f75c;
        case 0x25f760u: goto label_25f760;
        case 0x25f764u: goto label_25f764;
        case 0x25f768u: goto label_25f768;
        case 0x25f76cu: goto label_25f76c;
        default: break;
    }

    ctx->pc = 0x25f4d0u;

label_25f4d0:
    // 0x25f4d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25f4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_25f4d4:
    // 0x25f4d4: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x25f4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_25f4d8:
    // 0x25f4d8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x25f4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_25f4dc:
    // 0x25f4dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25f4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_25f4e0:
    // 0x25f4e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25f4e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25f4e4:
    // 0x25f4e4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x25f4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_25f4e8:
    // 0x25f4e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25f4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25f4ec:
    // 0x25f4ec: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x25f4ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_25f4f0:
    // 0x25f4f0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x25f4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_25f4f4:
    // 0x25f4f4: 0x8e3000d4  lw          $s0, 0xD4($s1)
    ctx->pc = 0x25f4f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25f4f8:
    // 0x25f4f8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x25f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_25f4fc:
    // 0x25f4fc: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_25f500:
    if (ctx->pc == 0x25F500u) {
        ctx->pc = 0x25F504u;
        goto label_25f504;
    }
    ctx->pc = 0x25F4FCu;
    {
        const bool branch_taken_0x25f4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x25f4fc) {
            ctx->pc = 0x25F514u;
            goto label_25f514;
        }
    }
    ctx->pc = 0x25F504u;
label_25f504:
    // 0x25f504: 0xc089998  jal         func_226660
label_25f508:
    if (ctx->pc == 0x25F508u) {
        ctx->pc = 0x25F508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F504u;
        // 0x25f508: 0x3c054000  lui         $a1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F50Cu;
        goto label_25f50c;
    }
    ctx->pc = 0x25F504u;
    SET_GPR_U32(ctx, 31, 0x25F50Cu);
    ctx->pc = 0x25F508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F504u;
    // 0x25f508: 0x3c054000  lui         $a1, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x25F504u, 0x25F50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F50Cu;
label_25f50c:
    // 0x25f50c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_25f510:
    if (ctx->pc == 0x25F510u) {
        ctx->pc = 0x25F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F50Cu;
        // 0x25f510: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F514u;
        goto label_25f514;
    }
    ctx->pc = 0x25F50Cu;
    {
        const bool branch_taken_0x25f50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F50Cu;
        // 0x25f510: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f50c) {
            ctx->pc = 0x25F528u;
            goto label_25f528;
        }
    }
    ctx->pc = 0x25F514u;
label_25f514:
    // 0x25f514: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x25f514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
label_25f518:
    // 0x25f518: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x25f518u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_25f51c:
    // 0x25f51c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25f51cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25f520:
    // 0x25f520: 0x10000004  b           . + 4 + (0x4 << 2)
label_25f524:
    if (ctx->pc == 0x25F524u) {
        ctx->pc = 0x25F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F520u;
        // 0x25f524: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F528u;
        goto label_25f528;
    }
    ctx->pc = 0x25F520u;
    {
        const bool branch_taken_0x25f520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F520u;
        // 0x25f524: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f520) {
            ctx->pc = 0x25F534u;
            goto label_25f534;
        }
    }
    ctx->pc = 0x25F528u;
label_25f528:
    // 0x25f528: 0x3c013d88  lui         $at, 0x3D88
    ctx->pc = 0x25f528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15752 << 16));
label_25f52c:
    // 0x25f52c: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x25f52cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_25f530:
    // 0x25f530: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25f530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25f534:
    // 0x25f534: 0x8c43031c  lw          $v1, 0x31C($v0)
    ctx->pc = 0x25f534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 796)));
label_25f538:
    // 0x25f538: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
label_25f53c:
    if (ctx->pc == 0x25F53Cu) {
        ctx->pc = 0x25F540u;
        goto label_25f540;
    }
    ctx->pc = 0x25F538u;
    {
        const bool branch_taken_0x25f538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f538) {
            ctx->pc = 0x25F674u;
            goto label_25f674;
        }
    }
    ctx->pc = 0x25F540u;
label_25f540:
    // 0x25f540: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x25f540u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_25f544:
    // 0x25f544: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x25f544u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_25f548:
    // 0x25f548: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_25f54c:
    if (ctx->pc == 0x25F54Cu) {
        ctx->pc = 0x25F550u;
        goto label_25f550;
    }
    ctx->pc = 0x25F548u;
    {
        const bool branch_taken_0x25f548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f548) {
            ctx->pc = 0x25F674u;
            goto label_25f674;
        }
    }
    ctx->pc = 0x25F550u;
label_25f550:
    // 0x25f550: 0xc08a0d0  jal         func_228340
label_25f554:
    if (ctx->pc == 0x25F554u) {
        ctx->pc = 0x25F554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F550u;
        // 0x25f554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F558u;
        goto label_25f558;
    }
    ctx->pc = 0x25F550u;
    SET_GPR_U32(ctx, 31, 0x25F558u);
    ctx->pc = 0x25F554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F550u;
    // 0x25f554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x25F550u, 0x25F558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F558u;
label_25f558:
    // 0x25f558: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
label_25f55c:
    if (ctx->pc == 0x25F55Cu) {
        ctx->pc = 0x25F560u;
        goto label_25f560;
    }
    ctx->pc = 0x25F558u;
    {
        const bool branch_taken_0x25f558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f558) {
            ctx->pc = 0x25F674u;
            goto label_25f674;
        }
    }
    ctx->pc = 0x25F560u;
label_25f560:
    // 0x25f560: 0xc08a05a  jal         func_228168
label_25f564:
    if (ctx->pc == 0x25F564u) {
        ctx->pc = 0x25F564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F560u;
        // 0x25f564: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F568u;
        goto label_25f568;
    }
    ctx->pc = 0x25F560u;
    SET_GPR_U32(ctx, 31, 0x25F568u);
    ctx->pc = 0x25F564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F560u;
    // 0x25f564: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x25F560u, 0x25F568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F568u;
label_25f568:
    // 0x25f568: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
label_25f56c:
    if (ctx->pc == 0x25F56Cu) {
        ctx->pc = 0x25F570u;
        goto label_25f570;
    }
    ctx->pc = 0x25F568u;
    {
        const bool branch_taken_0x25f568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f568) {
            ctx->pc = 0x25F674u;
            goto label_25f674;
        }
    }
    ctx->pc = 0x25F570u;
label_25f570:
    // 0x25f570: 0xc088e60  jal         func_223980
label_25f574:
    if (ctx->pc == 0x25F574u) {
        ctx->pc = 0x25F574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F570u;
        // 0x25f574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F578u;
        goto label_25f578;
    }
    ctx->pc = 0x25F570u;
    SET_GPR_U32(ctx, 31, 0x25F578u);
    ctx->pc = 0x25F574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F570u;
    // 0x25f574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x25F570u, 0x25F578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F578u;
label_25f578:
    // 0x25f578: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
label_25f57c:
    if (ctx->pc == 0x25F57Cu) {
        ctx->pc = 0x25F580u;
        goto label_25f580;
    }
    ctx->pc = 0x25F578u;
    {
        const bool branch_taken_0x25f578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f578) {
            ctx->pc = 0x25F674u;
            goto label_25f674;
        }
    }
    ctx->pc = 0x25F580u;
label_25f580:
    // 0x25f580: 0xc088e48  jal         func_223920
label_25f584:
    if (ctx->pc == 0x25F584u) {
        ctx->pc = 0x25F584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F580u;
        // 0x25f584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F588u;
        goto label_25f588;
    }
    ctx->pc = 0x25F580u;
    SET_GPR_U32(ctx, 31, 0x25F588u);
    ctx->pc = 0x25F584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F580u;
    // 0x25f584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223920u, 0x25F580u, 0x25F588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F588u;
label_25f588:
    // 0x25f588: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
label_25f58c:
    if (ctx->pc == 0x25F58Cu) {
        ctx->pc = 0x25F590u;
        goto label_25f590;
    }
    ctx->pc = 0x25F588u;
    {
        const bool branch_taken_0x25f588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f588) {
            ctx->pc = 0x25F674u;
            goto label_25f674;
        }
    }
    ctx->pc = 0x25F590u;
label_25f590:
    // 0x25f590: 0xc089f66  jal         func_227D98
label_25f594:
    if (ctx->pc == 0x25F594u) {
        ctx->pc = 0x25F594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F590u;
        // 0x25f594: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F598u;
        goto label_25f598;
    }
    ctx->pc = 0x25F590u;
    SET_GPR_U32(ctx, 31, 0x25F598u);
    ctx->pc = 0x25F594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F590u;
    // 0x25f594: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x25F590u, 0x25F598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F598u;
label_25f598:
    // 0x25f598: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
label_25f59c:
    if (ctx->pc == 0x25F59Cu) {
        ctx->pc = 0x25F5A0u;
        goto label_25f5a0;
    }
    ctx->pc = 0x25F598u;
    {
        const bool branch_taken_0x25f598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f598) {
            ctx->pc = 0x25F674u;
            goto label_25f674;
        }
    }
    ctx->pc = 0x25F5A0u;
label_25f5a0:
    // 0x25f5a0: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x25f5a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_25f5a4:
    // 0x25f5a4: 0x8e3300d8  lw          $s3, 0xD8($s1)
    ctx->pc = 0x25f5a4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_25f5a8:
    // 0x25f5a8: 0x2610d9f0  addiu       $s0, $s0, -0x2610
    ctx->pc = 0x25f5a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957552));
label_25f5ac:
    // 0x25f5ac: 0xc041532  jal         func_1054C8
label_25f5b0:
    if (ctx->pc == 0x25F5B0u) {
        ctx->pc = 0x25F5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F5ACu;
        // 0x25f5b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F5B4u;
        goto label_25f5b4;
    }
    ctx->pc = 0x25F5ACu;
    SET_GPR_U32(ctx, 31, 0x25F5B4u);
    ctx->pc = 0x25F5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F5ACu;
    // 0x25f5b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25F5ACu, 0x25F5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F5B4u;
label_25f5b4:
    // 0x25f5b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25f5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25f5b8:
    // 0x25f5b8: 0xc041532  jal         func_1054C8
label_25f5bc:
    if (ctx->pc == 0x25F5BCu) {
        ctx->pc = 0x25F5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F5B8u;
        // 0x25f5bc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F5C0u;
        goto label_25f5c0;
    }
    ctx->pc = 0x25F5B8u;
    SET_GPR_U32(ctx, 31, 0x25F5C0u);
    ctx->pc = 0x25F5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F5B8u;
    // 0x25f5bc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25F5B8u, 0x25F5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F5C0u;
label_25f5c0:
    // 0x25f5c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25f5c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25f5c4:
    // 0x25f5c4: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_25f5c8:
    if (ctx->pc == 0x25F5C8u) {
        ctx->pc = 0x25F5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F5C4u;
        // 0x25f5c8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F5CCu;
        goto label_25f5cc;
    }
    ctx->pc = 0x25F5C4u;
    {
        const bool branch_taken_0x25f5c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F5C4u;
        // 0x25f5c8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f5c4) {
            ctx->pc = 0x25F5E4u;
            goto label_25f5e4;
        }
    }
    ctx->pc = 0x25F5CCu;
label_25f5cc:
    // 0x25f5cc: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x25f5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_25f5d0:
    // 0x25f5d0: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25f5d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25f5d4:
    // 0x25f5d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25f5d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25f5d8:
    // 0x25f5d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25f5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25f5dc:
    // 0x25f5dc: 0xc041b20  jal         func_106C80
label_25f5e0:
    if (ctx->pc == 0x25F5E0u) {
        ctx->pc = 0x25F5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F5DCu;
        // 0x25f5e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F5E4u;
        goto label_25f5e4;
    }
    ctx->pc = 0x25F5DCu;
    SET_GPR_U32(ctx, 31, 0x25F5E4u);
    ctx->pc = 0x25F5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F5DCu;
    // 0x25f5e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25F5DCu, 0x25F5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F5E4u;
label_25f5e4:
    // 0x25f5e4: 0xc05d484  jal         func_175210
label_25f5e8:
    if (ctx->pc == 0x25F5E8u) {
        ctx->pc = 0x25F5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F5E4u;
        // 0x25f5e8: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F5ECu;
        goto label_25f5ec;
    }
    ctx->pc = 0x25F5E4u;
    SET_GPR_U32(ctx, 31, 0x25F5ECu);
    ctx->pc = 0x25F5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F5E4u;
    // 0x25f5e8: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25F5E4u, 0x25F5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F5ECu;
label_25f5ec:
    // 0x25f5ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25f5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25f5f0:
    // 0x25f5f0: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25f5f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25f5f4:
    // 0x25f5f4: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25f5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25f5f8:
    // 0x25f5f8: 0xa0f809  jalr        $a1
label_25f5fc:
    if (ctx->pc == 0x25F5FCu) {
        ctx->pc = 0x25F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F5F8u;
        // 0x25f5fc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F600u;
        goto label_25f600;
    }
    ctx->pc = 0x25F5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25F600u);
        ctx->pc = 0x25F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F5F8u;
        // 0x25f5fc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F5F8u, 0x25F600u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25F600u;
label_25f600:
    // 0x25f600: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25f600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25f604:
    // 0x25f604: 0xc087016  jal         func_21C058
label_25f608:
    if (ctx->pc == 0x25F608u) {
        ctx->pc = 0x25F608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F604u;
        // 0x25f608: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F60Cu;
        goto label_25f60c;
    }
    ctx->pc = 0x25F604u;
    SET_GPR_U32(ctx, 31, 0x25F60Cu);
    ctx->pc = 0x25F608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F604u;
    // 0x25f608: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25F604u, 0x25F60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F60Cu;
label_25f60c:
    // 0x25f60c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_25f610:
    if (ctx->pc == 0x25F610u) {
        ctx->pc = 0x25F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F60Cu;
        // 0x25f610: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F614u;
        goto label_25f614;
    }
    ctx->pc = 0x25F60Cu;
    {
        const bool branch_taken_0x25f60c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F60Cu;
        // 0x25f610: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f60c) {
            ctx->pc = 0x25F630u;
            goto label_25f630;
        }
    }
    ctx->pc = 0x25F614u;
label_25f614:
    // 0x25f614: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x25f614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25f618:
    // 0x25f618: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25f618u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25f61c:
    // 0x25f61c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25f61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25f620:
    // 0x25f620: 0x8c660060  lw          $a2, 0x60($v1)
    ctx->pc = 0x25f620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_25f624:
    // 0x25f624: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25f624u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25f628:
    // 0x25f628: 0xc04159e  jal         func_105678
label_25f62c:
    if (ctx->pc == 0x25F62Cu) {
        ctx->pc = 0x25F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F628u;
        // 0x25f62c: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F630u;
        goto label_25f630;
    }
    ctx->pc = 0x25F628u;
    SET_GPR_U32(ctx, 31, 0x25F630u);
    ctx->pc = 0x25F62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F628u;
    // 0x25f62c: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x25F628u, 0x25F630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F630u;
label_25f630:
    // 0x25f630: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x25f630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_25f634:
    // 0x25f634: 0x240500c1  addiu       $a1, $zero, 0xC1
    ctx->pc = 0x25f634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
label_25f638:
    // 0x25f638: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x25f638u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_25f63c:
    // 0x25f63c: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x25f63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_25f640:
    // 0x25f640: 0x60f809  jalr        $v1
label_25f644:
    if (ctx->pc == 0x25F644u) {
        ctx->pc = 0x25F644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F640u;
        // 0x25f644: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F648u;
        goto label_25f648;
    }
    ctx->pc = 0x25F640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25F648u);
        ctx->pc = 0x25F644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F640u;
        // 0x25f644: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F640u, 0x25F648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25F648u;
label_25f648:
    // 0x25f648: 0x8e2600d4  lw          $a2, 0xD4($s1)
    ctx->pc = 0x25f648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25f64c:
    // 0x25f64c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25f64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25f650:
    // 0x25f650: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25f650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25f654:
    // 0x25f654: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25f654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25f658:
    // 0x25f658: 0xc05d53a  jal         func_1754E8
label_25f65c:
    if (ctx->pc == 0x25F65Cu) {
        ctx->pc = 0x25F65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F658u;
        // 0x25f65c: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F660u;
        goto label_25f660;
    }
    ctx->pc = 0x25F658u;
    SET_GPR_U32(ctx, 31, 0x25F660u);
    ctx->pc = 0x25F65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F658u;
    // 0x25f65c: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x25F658u, 0x25F660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F660u;
label_25f660:
    // 0x25f660: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25f660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25f664:
    // 0x25f664: 0xc05d4f6  jal         func_1753D8
label_25f668:
    if (ctx->pc == 0x25F668u) {
        ctx->pc = 0x25F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F664u;
        // 0x25f668: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F66Cu;
        goto label_25f66c;
    }
    ctx->pc = 0x25F664u;
    SET_GPR_U32(ctx, 31, 0x25F66Cu);
    ctx->pc = 0x25F668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F664u;
    // 0x25f668: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x25F664u, 0x25F66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F66Cu;
label_25f66c:
    // 0x25f66c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_25f670:
    if (ctx->pc == 0x25F670u) {
        ctx->pc = 0x25F670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F66Cu;
        // 0x25f670: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F674u;
        goto label_25f674;
    }
    ctx->pc = 0x25F66Cu;
    {
        const bool branch_taken_0x25f66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F66Cu;
        // 0x25f670: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f66c) {
            ctx->pc = 0x25F6E8u;
            goto label_25f6e8;
        }
    }
    ctx->pc = 0x25F674u;
label_25f674:
    // 0x25f674: 0xc08a0d0  jal         func_228340
label_25f678:
    if (ctx->pc == 0x25F678u) {
        ctx->pc = 0x25F678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F674u;
        // 0x25f678: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F67Cu;
        goto label_25f67c;
    }
    ctx->pc = 0x25F674u;
    SET_GPR_U32(ctx, 31, 0x25F67Cu);
    ctx->pc = 0x25F678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F674u;
    // 0x25f678: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x25F674u, 0x25F67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F67Cu;
label_25f67c:
    // 0x25f67c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_25f680:
    if (ctx->pc == 0x25F680u) {
        ctx->pc = 0x25F684u;
        goto label_25f684;
    }
    ctx->pc = 0x25F67Cu;
    {
        const bool branch_taken_0x25f67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f67c) {
            ctx->pc = 0x25F6F8u;
            goto label_25f6f8;
        }
    }
    ctx->pc = 0x25F684u;
label_25f684:
    // 0x25f684: 0xc08a05a  jal         func_228168
label_25f688:
    if (ctx->pc == 0x25F688u) {
        ctx->pc = 0x25F688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F684u;
        // 0x25f688: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F68Cu;
        goto label_25f68c;
    }
    ctx->pc = 0x25F684u;
    SET_GPR_U32(ctx, 31, 0x25F68Cu);
    ctx->pc = 0x25F688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F684u;
    // 0x25f688: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x25F684u, 0x25F68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F68Cu;
label_25f68c:
    // 0x25f68c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_25f690:
    if (ctx->pc == 0x25F690u) {
        ctx->pc = 0x25F694u;
        goto label_25f694;
    }
    ctx->pc = 0x25F68Cu;
    {
        const bool branch_taken_0x25f68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f68c) {
            ctx->pc = 0x25F6A4u;
            goto label_25f6a4;
        }
    }
    ctx->pc = 0x25F694u;
label_25f694:
    // 0x25f694: 0xc089000  jal         func_224000
label_25f698:
    if (ctx->pc == 0x25F698u) {
        ctx->pc = 0x25F698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F694u;
        // 0x25f698: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F69Cu;
        goto label_25f69c;
    }
    ctx->pc = 0x25F694u;
    SET_GPR_U32(ctx, 31, 0x25F69Cu);
    ctx->pc = 0x25F698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F694u;
    // 0x25f698: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x25F694u, 0x25F69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F69Cu;
label_25f69c:
    // 0x25f69c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_25f6a0:
    if (ctx->pc == 0x25F6A0u) {
        ctx->pc = 0x25F6A4u;
        goto label_25f6a4;
    }
    ctx->pc = 0x25F69Cu;
    {
        const bool branch_taken_0x25f69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f69c) {
            ctx->pc = 0x25F6F8u;
            goto label_25f6f8;
        }
    }
    ctx->pc = 0x25F6A4u;
label_25f6a4:
    // 0x25f6a4: 0xc088e60  jal         func_223980
label_25f6a8:
    if (ctx->pc == 0x25F6A8u) {
        ctx->pc = 0x25F6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F6A4u;
        // 0x25f6a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F6ACu;
        goto label_25f6ac;
    }
    ctx->pc = 0x25F6A4u;
    SET_GPR_U32(ctx, 31, 0x25F6ACu);
    ctx->pc = 0x25F6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F6A4u;
    // 0x25f6a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x25F6A4u, 0x25F6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F6ACu;
label_25f6ac:
    // 0x25f6ac: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_25f6b0:
    if (ctx->pc == 0x25F6B0u) {
        ctx->pc = 0x25F6B4u;
        goto label_25f6b4;
    }
    ctx->pc = 0x25F6ACu;
    {
        const bool branch_taken_0x25f6ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f6ac) {
            ctx->pc = 0x25F6F8u;
            goto label_25f6f8;
        }
    }
    ctx->pc = 0x25F6B4u;
label_25f6b4:
    // 0x25f6b4: 0xc088e48  jal         func_223920
label_25f6b8:
    if (ctx->pc == 0x25F6B8u) {
        ctx->pc = 0x25F6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F6B4u;
        // 0x25f6b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F6BCu;
        goto label_25f6bc;
    }
    ctx->pc = 0x25F6B4u;
    SET_GPR_U32(ctx, 31, 0x25F6BCu);
    ctx->pc = 0x25F6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F6B4u;
    // 0x25f6b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223920u, 0x25F6B4u, 0x25F6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F6BCu;
label_25f6bc:
    // 0x25f6bc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_25f6c0:
    if (ctx->pc == 0x25F6C0u) {
        ctx->pc = 0x25F6C4u;
        goto label_25f6c4;
    }
    ctx->pc = 0x25F6BCu;
    {
        const bool branch_taken_0x25f6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f6bc) {
            ctx->pc = 0x25F6F8u;
            goto label_25f6f8;
        }
    }
    ctx->pc = 0x25F6C4u;
label_25f6c4:
    // 0x25f6c4: 0xc089f66  jal         func_227D98
label_25f6c8:
    if (ctx->pc == 0x25F6C8u) {
        ctx->pc = 0x25F6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F6C4u;
        // 0x25f6c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F6CCu;
        goto label_25f6cc;
    }
    ctx->pc = 0x25F6C4u;
    SET_GPR_U32(ctx, 31, 0x25F6CCu);
    ctx->pc = 0x25F6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F6C4u;
    // 0x25f6c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x25F6C4u, 0x25F6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F6CCu;
label_25f6cc:
    // 0x25f6cc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_25f6d0:
    if (ctx->pc == 0x25F6D0u) {
        ctx->pc = 0x25F6D4u;
        goto label_25f6d4;
    }
    ctx->pc = 0x25F6CCu;
    {
        const bool branch_taken_0x25f6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f6cc) {
            ctx->pc = 0x25F6F8u;
            goto label_25f6f8;
        }
    }
    ctx->pc = 0x25F6D4u;
label_25f6d4:
    // 0x25f6d4: 0xc097356  jal         func_25CD58
label_25f6d8:
    if (ctx->pc == 0x25F6D8u) {
        ctx->pc = 0x25F6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F6D4u;
        // 0x25f6d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F6DCu;
        goto label_25f6dc;
    }
    ctx->pc = 0x25F6D4u;
    SET_GPR_U32(ctx, 31, 0x25F6DCu);
    ctx->pc = 0x25F6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F6D4u;
    // 0x25f6d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CD58u, 0x25F6D4u, 0x25F6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F6DCu;
label_25f6dc:
    // 0x25f6dc: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x25f6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_25f6e0:
    // 0x25f6e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25f6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25f6e4:
    // 0x25f6e4: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x25f6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_25f6e8:
    // 0x25f6e8: 0xc0899aa  jal         func_2266A8
label_25f6ec:
    if (ctx->pc == 0x25F6ECu) {
        ctx->pc = 0x25F6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F6E8u;
        // 0x25f6ec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F6F0u;
        goto label_25f6f0;
    }
    ctx->pc = 0x25F6E8u;
    SET_GPR_U32(ctx, 31, 0x25F6F0u);
    ctx->pc = 0x25F6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F6E8u;
    // 0x25f6ec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x25F6E8u, 0x25F6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F6F0u;
label_25f6f0:
    // 0x25f6f0: 0x10000018  b           . + 4 + (0x18 << 2)
label_25f6f4:
    if (ctx->pc == 0x25F6F4u) {
        ctx->pc = 0x25F6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F6F0u;
        // 0x25f6f4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F6F8u;
        goto label_25f6f8;
    }
    ctx->pc = 0x25F6F0u;
    {
        const bool branch_taken_0x25f6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F6F0u;
        // 0x25f6f4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f6f0) {
            ctx->pc = 0x25F754u;
            goto label_25f754;
        }
    }
    ctx->pc = 0x25F6F8u;
label_25f6f8:
    // 0x25f6f8: 0xc088e60  jal         func_223980
label_25f6fc:
    if (ctx->pc == 0x25F6FCu) {
        ctx->pc = 0x25F6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F6F8u;
        // 0x25f6fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F700u;
        goto label_25f700;
    }
    ctx->pc = 0x25F6F8u;
    SET_GPR_U32(ctx, 31, 0x25F700u);
    ctx->pc = 0x25F6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F6F8u;
    // 0x25f6fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x25F6F8u, 0x25F700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F700u;
label_25f700:
    // 0x25f700: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_25f704:
    if (ctx->pc == 0x25F704u) {
        ctx->pc = 0x25F708u;
        goto label_25f708;
    }
    ctx->pc = 0x25F700u;
    {
        const bool branch_taken_0x25f700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f700) {
            ctx->pc = 0x25F718u;
            goto label_25f718;
        }
    }
    ctx->pc = 0x25F708u;
label_25f708:
    // 0x25f708: 0xc088e48  jal         func_223920
label_25f70c:
    if (ctx->pc == 0x25F70Cu) {
        ctx->pc = 0x25F70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F708u;
        // 0x25f70c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F710u;
        goto label_25f710;
    }
    ctx->pc = 0x25F708u;
    SET_GPR_U32(ctx, 31, 0x25F710u);
    ctx->pc = 0x25F70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F708u;
    // 0x25f70c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223920u, 0x25F708u, 0x25F710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F710u;
label_25f710:
    // 0x25f710: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_25f714:
    if (ctx->pc == 0x25F714u) {
        ctx->pc = 0x25F714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F710u;
        // 0x25f714: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F718u;
        goto label_25f718;
    }
    ctx->pc = 0x25F710u;
    {
        const bool branch_taken_0x25f710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F710u;
        // 0x25f714: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f710) {
            ctx->pc = 0x25F734u;
            goto label_25f734;
        }
    }
    ctx->pc = 0x25F718u;
label_25f718:
    // 0x25f718: 0x3c013d88  lui         $at, 0x3D88
    ctx->pc = 0x25f718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15752 << 16));
label_25f71c:
    // 0x25f71c: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x25f71cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_25f720:
    // 0x25f720: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25f720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25f724:
    // 0x25f724: 0xc096be4  jal         func_25AF90
label_25f728:
    if (ctx->pc == 0x25F728u) {
        ctx->pc = 0x25F728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F724u;
        // 0x25f728: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F72Cu;
        goto label_25f72c;
    }
    ctx->pc = 0x25F724u;
    SET_GPR_U32(ctx, 31, 0x25F72Cu);
    ctx->pc = 0x25F728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F724u;
    // 0x25f728: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AF90u, 0x25F724u, 0x25F72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F72Cu;
label_25f72c:
    // 0x25f72c: 0x10000009  b           . + 4 + (0x9 << 2)
label_25f730:
    if (ctx->pc == 0x25F730u) {
        ctx->pc = 0x25F730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F72Cu;
        // 0x25f730: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F734u;
        goto label_25f734;
    }
    ctx->pc = 0x25F72Cu;
    {
        const bool branch_taken_0x25f72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F72Cu;
        // 0x25f730: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f72c) {
            ctx->pc = 0x25F754u;
            goto label_25f754;
        }
    }
    ctx->pc = 0x25F734u;
label_25f734:
    // 0x25f734: 0xc096c80  jal         func_25B200
label_25f738:
    if (ctx->pc == 0x25F738u) {
        ctx->pc = 0x25F738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F734u;
        // 0x25f738: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F73Cu;
        goto label_25f73c;
    }
    ctx->pc = 0x25F734u;
    SET_GPR_U32(ctx, 31, 0x25F73Cu);
    ctx->pc = 0x25F738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F734u;
    // 0x25f738: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x25F734u, 0x25F73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F73Cu;
label_25f73c:
    // 0x25f73c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25f73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25f740:
    // 0x25f740: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25f740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25f744:
    // 0x25f744: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x25f744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_25f748:
    // 0x25f748: 0xc0899aa  jal         func_2266A8
label_25f74c:
    if (ctx->pc == 0x25F74Cu) {
        ctx->pc = 0x25F74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F748u;
        // 0x25f74c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F750u;
        goto label_25f750;
    }
    ctx->pc = 0x25F748u;
    SET_GPR_U32(ctx, 31, 0x25F750u);
    ctx->pc = 0x25F74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F748u;
    // 0x25f74c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x25F748u, 0x25F750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F750u;
label_25f750:
    // 0x25f750: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x25f750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25f754:
    // 0x25f754: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x25f754u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25f758:
    // 0x25f758: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25f758u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25f75c:
    // 0x25f75c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x25f75cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25f760:
    // 0x25f760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25f760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25f764:
    // 0x25f764: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x25f764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25f768:
    // 0x25f768: 0x3e00008  jr          $ra
label_25f76c:
    if (ctx->pc == 0x25F76Cu) {
        ctx->pc = 0x25F76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F768u;
        // 0x25f76c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F770u;
        goto label_fallthrough_0x25f768;
    }
    ctx->pc = 0x25F768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F768u;
        // 0x25f76c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25f768:
    ctx->pc = 0x25F770u;
}
