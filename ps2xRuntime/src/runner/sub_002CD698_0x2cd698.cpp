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

// Function: sub_002CD698
// Address: 0x2cd698 - 0x2cd8f8
void sub_002CD698_0x2cd698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD698_0x2cd698");
#endif

    switch (ctx->pc) {
        case 0x2cd698u: goto label_2cd698;
        case 0x2cd69cu: goto label_2cd69c;
        case 0x2cd6a0u: goto label_2cd6a0;
        case 0x2cd6a4u: goto label_2cd6a4;
        case 0x2cd6a8u: goto label_2cd6a8;
        case 0x2cd6acu: goto label_2cd6ac;
        case 0x2cd6b0u: goto label_2cd6b0;
        case 0x2cd6b4u: goto label_2cd6b4;
        case 0x2cd6b8u: goto label_2cd6b8;
        case 0x2cd6bcu: goto label_2cd6bc;
        case 0x2cd6c0u: goto label_2cd6c0;
        case 0x2cd6c4u: goto label_2cd6c4;
        case 0x2cd6c8u: goto label_2cd6c8;
        case 0x2cd6ccu: goto label_2cd6cc;
        case 0x2cd6d0u: goto label_2cd6d0;
        case 0x2cd6d4u: goto label_2cd6d4;
        case 0x2cd6d8u: goto label_2cd6d8;
        case 0x2cd6dcu: goto label_2cd6dc;
        case 0x2cd6e0u: goto label_2cd6e0;
        case 0x2cd6e4u: goto label_2cd6e4;
        case 0x2cd6e8u: goto label_2cd6e8;
        case 0x2cd6ecu: goto label_2cd6ec;
        case 0x2cd6f0u: goto label_2cd6f0;
        case 0x2cd6f4u: goto label_2cd6f4;
        case 0x2cd6f8u: goto label_2cd6f8;
        case 0x2cd6fcu: goto label_2cd6fc;
        case 0x2cd700u: goto label_2cd700;
        case 0x2cd704u: goto label_2cd704;
        case 0x2cd708u: goto label_2cd708;
        case 0x2cd70cu: goto label_2cd70c;
        case 0x2cd710u: goto label_2cd710;
        case 0x2cd714u: goto label_2cd714;
        case 0x2cd718u: goto label_2cd718;
        case 0x2cd71cu: goto label_2cd71c;
        case 0x2cd720u: goto label_2cd720;
        case 0x2cd724u: goto label_2cd724;
        case 0x2cd728u: goto label_2cd728;
        case 0x2cd72cu: goto label_2cd72c;
        case 0x2cd730u: goto label_2cd730;
        case 0x2cd734u: goto label_2cd734;
        case 0x2cd738u: goto label_2cd738;
        case 0x2cd73cu: goto label_2cd73c;
        case 0x2cd740u: goto label_2cd740;
        case 0x2cd744u: goto label_2cd744;
        case 0x2cd748u: goto label_2cd748;
        case 0x2cd74cu: goto label_2cd74c;
        case 0x2cd750u: goto label_2cd750;
        case 0x2cd754u: goto label_2cd754;
        case 0x2cd758u: goto label_2cd758;
        case 0x2cd75cu: goto label_2cd75c;
        case 0x2cd760u: goto label_2cd760;
        case 0x2cd764u: goto label_2cd764;
        case 0x2cd768u: goto label_2cd768;
        case 0x2cd76cu: goto label_2cd76c;
        case 0x2cd770u: goto label_2cd770;
        case 0x2cd774u: goto label_2cd774;
        case 0x2cd778u: goto label_2cd778;
        case 0x2cd77cu: goto label_2cd77c;
        case 0x2cd780u: goto label_2cd780;
        case 0x2cd784u: goto label_2cd784;
        case 0x2cd788u: goto label_2cd788;
        case 0x2cd78cu: goto label_2cd78c;
        case 0x2cd790u: goto label_2cd790;
        case 0x2cd794u: goto label_2cd794;
        case 0x2cd798u: goto label_2cd798;
        case 0x2cd79cu: goto label_2cd79c;
        case 0x2cd7a0u: goto label_2cd7a0;
        case 0x2cd7a4u: goto label_2cd7a4;
        case 0x2cd7a8u: goto label_2cd7a8;
        case 0x2cd7acu: goto label_2cd7ac;
        case 0x2cd7b0u: goto label_2cd7b0;
        case 0x2cd7b4u: goto label_2cd7b4;
        case 0x2cd7b8u: goto label_2cd7b8;
        case 0x2cd7bcu: goto label_2cd7bc;
        case 0x2cd7c0u: goto label_2cd7c0;
        case 0x2cd7c4u: goto label_2cd7c4;
        case 0x2cd7c8u: goto label_2cd7c8;
        case 0x2cd7ccu: goto label_2cd7cc;
        case 0x2cd7d0u: goto label_2cd7d0;
        case 0x2cd7d4u: goto label_2cd7d4;
        case 0x2cd7d8u: goto label_2cd7d8;
        case 0x2cd7dcu: goto label_2cd7dc;
        case 0x2cd7e0u: goto label_2cd7e0;
        case 0x2cd7e4u: goto label_2cd7e4;
        case 0x2cd7e8u: goto label_2cd7e8;
        case 0x2cd7ecu: goto label_2cd7ec;
        case 0x2cd7f0u: goto label_2cd7f0;
        case 0x2cd7f4u: goto label_2cd7f4;
        case 0x2cd7f8u: goto label_2cd7f8;
        case 0x2cd7fcu: goto label_2cd7fc;
        case 0x2cd800u: goto label_2cd800;
        case 0x2cd804u: goto label_2cd804;
        case 0x2cd808u: goto label_2cd808;
        case 0x2cd80cu: goto label_2cd80c;
        case 0x2cd810u: goto label_2cd810;
        case 0x2cd814u: goto label_2cd814;
        case 0x2cd818u: goto label_2cd818;
        case 0x2cd81cu: goto label_2cd81c;
        case 0x2cd820u: goto label_2cd820;
        case 0x2cd824u: goto label_2cd824;
        case 0x2cd828u: goto label_2cd828;
        case 0x2cd82cu: goto label_2cd82c;
        case 0x2cd830u: goto label_2cd830;
        case 0x2cd834u: goto label_2cd834;
        case 0x2cd838u: goto label_2cd838;
        case 0x2cd83cu: goto label_2cd83c;
        case 0x2cd840u: goto label_2cd840;
        case 0x2cd844u: goto label_2cd844;
        case 0x2cd848u: goto label_2cd848;
        case 0x2cd84cu: goto label_2cd84c;
        case 0x2cd850u: goto label_2cd850;
        case 0x2cd854u: goto label_2cd854;
        case 0x2cd858u: goto label_2cd858;
        case 0x2cd85cu: goto label_2cd85c;
        case 0x2cd860u: goto label_2cd860;
        case 0x2cd864u: goto label_2cd864;
        case 0x2cd868u: goto label_2cd868;
        case 0x2cd86cu: goto label_2cd86c;
        case 0x2cd870u: goto label_2cd870;
        case 0x2cd874u: goto label_2cd874;
        case 0x2cd878u: goto label_2cd878;
        case 0x2cd87cu: goto label_2cd87c;
        case 0x2cd880u: goto label_2cd880;
        case 0x2cd884u: goto label_2cd884;
        case 0x2cd888u: goto label_2cd888;
        case 0x2cd88cu: goto label_2cd88c;
        case 0x2cd890u: goto label_2cd890;
        case 0x2cd894u: goto label_2cd894;
        case 0x2cd898u: goto label_2cd898;
        case 0x2cd89cu: goto label_2cd89c;
        case 0x2cd8a0u: goto label_2cd8a0;
        case 0x2cd8a4u: goto label_2cd8a4;
        case 0x2cd8a8u: goto label_2cd8a8;
        case 0x2cd8acu: goto label_2cd8ac;
        case 0x2cd8b0u: goto label_2cd8b0;
        case 0x2cd8b4u: goto label_2cd8b4;
        case 0x2cd8b8u: goto label_2cd8b8;
        case 0x2cd8bcu: goto label_2cd8bc;
        case 0x2cd8c0u: goto label_2cd8c0;
        case 0x2cd8c4u: goto label_2cd8c4;
        case 0x2cd8c8u: goto label_2cd8c8;
        case 0x2cd8ccu: goto label_2cd8cc;
        case 0x2cd8d0u: goto label_2cd8d0;
        case 0x2cd8d4u: goto label_2cd8d4;
        case 0x2cd8d8u: goto label_2cd8d8;
        case 0x2cd8dcu: goto label_2cd8dc;
        case 0x2cd8e0u: goto label_2cd8e0;
        case 0x2cd8e4u: goto label_2cd8e4;
        case 0x2cd8e8u: goto label_2cd8e8;
        case 0x2cd8ecu: goto label_2cd8ec;
        case 0x2cd8f0u: goto label_2cd8f0;
        case 0x2cd8f4u: goto label_2cd8f4;
        default: break;
    }

    ctx->pc = 0x2cd698u;

label_2cd698:
    // 0x2cd698: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2cd698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2cd69c:
    // 0x2cd69c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2cd69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_2cd6a0:
    // 0x2cd6a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2cd6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2cd6a4:
    // 0x2cd6a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cd6a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cd6a8:
    // 0x2cd6a8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2cd6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_2cd6ac:
    // 0x2cd6ac: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2cd6acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2cd6b0:
    // 0x2cd6b0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2cd6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_2cd6b4:
    // 0x2cd6b4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2cd6b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cd6b8:
    // 0x2cd6b8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2cd6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_2cd6bc:
    // 0x2cd6bc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2cd6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2cd6c0:
    // 0x2cd6c0: 0x92220039  lbu         $v0, 0x39($s1)
    ctx->pc = 0x2cd6c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
label_2cd6c4:
    // 0x2cd6c4: 0x9225003a  lbu         $a1, 0x3A($s1)
    ctx->pc = 0x2cd6c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 58)));
label_2cd6c8:
    // 0x2cd6c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2cd6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2cd6cc:
    // 0x2cd6cc: 0xa2220039  sb          $v0, 0x39($s1)
    ctx->pc = 0x2cd6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 57), (uint8_t)GPR_U32(ctx, 2));
label_2cd6d0:
    // 0x2cd6d0: 0x8c83bd30  lw          $v1, -0x42D0($a0)
    ctx->pc = 0x2cd6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950192)));
label_2cd6d4:
    // 0x2cd6d4: 0x14a00011  bnez        $a1, . + 4 + (0x11 << 2)
label_2cd6d8:
    if (ctx->pc == 0x2CD6D8u) {
        ctx->pc = 0x2CD6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD6D4u;
        // 0x2cd6d8: 0xae230020  sw          $v1, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD6DCu;
        goto label_2cd6dc;
    }
    ctx->pc = 0x2CD6D4u;
    {
        const bool branch_taken_0x2cd6d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD6D4u;
        // 0x2cd6d8: 0xae230020  sw          $v1, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd6d4) {
            ctx->pc = 0x2CD71Cu;
            goto label_2cd71c;
        }
    }
    ctx->pc = 0x2CD6DCu;
label_2cd6dc:
    // 0x2cd6dc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2cd6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cd6e0:
    // 0x2cd6e0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2cd6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2cd6e4:
    // 0x2cd6e4: 0x8c452c7c  lw          $a1, 0x2C7C($v0)
    ctx->pc = 0x2cd6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_2cd6e8:
    // 0x2cd6e8: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2cd6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_2cd6ec:
    // 0x2cd6ec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2cd6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cd6f0:
    // 0x2cd6f0: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2cd6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_2cd6f4:
    // 0x2cd6f4: 0x8ca40840  lw          $a0, 0x840($a1)
    ctx->pc = 0x2cd6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2112)));
label_2cd6f8:
    // 0x2cd6f8: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x2cd6f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2cd6fc:
    // 0x2cd6fc: 0x84460092  lh          $a2, 0x92($v0)
    ctx->pc = 0x2cd6fcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_2cd700:
    // 0x2cd700: 0x26330020  addiu       $s3, $s1, 0x20
    ctx->pc = 0x2cd700u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_2cd704:
    // 0x2cd704: 0x96250032  lhu         $a1, 0x32($s1)
    ctx->pc = 0x2cd704u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
label_2cd708:
    // 0x2cd708: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x2cd708u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_2cd70c:
    // 0x2cd70c: 0xc0e68b0  jal         func_39A2C0
label_2cd710:
    if (ctx->pc == 0x2CD710u) {
        ctx->pc = 0x2CD710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD70Cu;
        // 0x2cd710: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD714u;
        goto label_2cd714;
    }
    ctx->pc = 0x2CD70Cu;
    SET_GPR_U32(ctx, 31, 0x2CD714u);
    ctx->pc = 0x2CD710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD70Cu;
    // 0x2cd710: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A2C0u, 0x2CD70Cu, 0x2CD714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD714u;
label_2cd714:
    // 0x2cd714: 0x10000016  b           . + 4 + (0x16 << 2)
label_2cd718:
    if (ctx->pc == 0x2CD718u) {
        ctx->pc = 0x2CD718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD714u;
        // 0x2cd718: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD71Cu;
        goto label_2cd71c;
    }
    ctx->pc = 0x2CD714u;
    {
        const bool branch_taken_0x2cd714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD714u;
        // 0x2cd718: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd714) {
            ctx->pc = 0x2CD770u;
            goto label_2cd770;
        }
    }
    ctx->pc = 0x2CD71Cu;
label_2cd71c:
    // 0x2cd71c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2cd71cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cd720:
    // 0x2cd720: 0x26330020  addiu       $s3, $s1, 0x20
    ctx->pc = 0x2cd720u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_2cd724:
    // 0x2cd724: 0x0  nop
    ctx->pc = 0x2cd724u;
    // NOP
label_2cd728:
    // 0x2cd728: 0x9222003a  lbu         $v0, 0x3A($s1)
    ctx->pc = 0x2cd728u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 58)));
label_2cd72c:
    // 0x2cd72c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x2cd72cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2cd730:
    // 0x2cd730: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2cd734:
    if (ctx->pc == 0x2CD734u) {
        ctx->pc = 0x2CD734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD730u;
        // 0x2cd734: 0x128080  sll         $s0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD738u;
        goto label_2cd738;
    }
    ctx->pc = 0x2CD730u;
    {
        const bool branch_taken_0x2cd730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD730u;
        // 0x2cd734: 0x128080  sll         $s0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd730) {
            ctx->pc = 0x2CD770u;
            goto label_2cd770;
        }
    }
    ctx->pc = 0x2CD738u;
label_2cd738:
    // 0x2cd738: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2cd738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2cd73c:
    // 0x2cd73c: 0xc0e4060  jal         func_390180
label_2cd740:
    if (ctx->pc == 0x2CD740u) {
        ctx->pc = 0x2CD740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD73Cu;
        // 0x2cd740: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD744u;
        goto label_2cd744;
    }
    ctx->pc = 0x2CD73Cu;
    SET_GPR_U32(ctx, 31, 0x2CD744u);
    ctx->pc = 0x2CD740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD73Cu;
    // 0x2cd740: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2CD73Cu, 0x2CD744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD744u;
label_2cd744:
    // 0x2cd744: 0xc0e2612  jal         func_389848
label_2cd748:
    if (ctx->pc == 0x2CD748u) {
        ctx->pc = 0x2CD748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD744u;
        // 0x2cd748: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD74Cu;
        goto label_2cd74c;
    }
    ctx->pc = 0x2CD744u;
    SET_GPR_U32(ctx, 31, 0x2CD74Cu);
    ctx->pc = 0x2CD748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD744u;
    // 0x2cd748: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x2CD744u, 0x2CD74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD74Cu;
label_2cd74c:
    // 0x2cd74c: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
label_2cd750:
    if (ctx->pc == 0x2CD750u) {
        ctx->pc = 0x2CD750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD74Cu;
        // 0x2cd750: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD754u;
        goto label_2cd754;
    }
    ctx->pc = 0x2CD74Cu;
    {
        const bool branch_taken_0x2cd74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd74c) {
            ctx->pc = 0x2CD750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD74Cu;
            // 0x2cd750: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd728;
        }
    }
    ctx->pc = 0x2CD754u;
label_2cd754:
    // 0x2cd754: 0xc0e36b8  jal         func_38DAE0
label_2cd758:
    if (ctx->pc == 0x2CD758u) {
        ctx->pc = 0x2CD758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD754u;
        // 0x2cd758: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD75Cu;
        goto label_2cd75c;
    }
    ctx->pc = 0x2CD754u;
    SET_GPR_U32(ctx, 31, 0x2CD75Cu);
    ctx->pc = 0x2CD758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD754u;
    // 0x2cd758: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DAE0u, 0x2CD754u, 0x2CD75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD75Cu;
label_2cd75c:
    // 0x2cd75c: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
label_2cd760:
    if (ctx->pc == 0x2CD760u) {
        ctx->pc = 0x2CD760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD75Cu;
        // 0x2cd760: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD764u;
        goto label_2cd764;
    }
    ctx->pc = 0x2CD75Cu;
    {
        const bool branch_taken_0x2cd75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd75c) {
            ctx->pc = 0x2CD760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD75Cu;
            // 0x2cd760: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd728;
        }
    }
    ctx->pc = 0x2CD764u;
label_2cd764:
    // 0x2cd764: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x2cd764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_2cd768:
    // 0x2cd768: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2cd768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2cd76c:
    // 0x2cd76c: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x2cd76cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_2cd770:
    // 0x2cd770: 0xc0e4060  jal         func_390180
label_2cd774:
    if (ctx->pc == 0x2CD774u) {
        ctx->pc = 0x2CD774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD770u;
        // 0x2cd774: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD778u;
        goto label_2cd778;
    }
    ctx->pc = 0x2CD770u;
    SET_GPR_U32(ctx, 31, 0x2CD778u);
    ctx->pc = 0x2CD774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD770u;
    // 0x2cd774: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2CD770u, 0x2CD778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD778u;
label_2cd778:
    // 0x2cd778: 0xc0e57ce  jal         func_395F38
label_2cd77c:
    if (ctx->pc == 0x2CD77Cu) {
        ctx->pc = 0x2CD77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD778u;
        // 0x2cd77c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD780u;
        goto label_2cd780;
    }
    ctx->pc = 0x2CD778u;
    SET_GPR_U32(ctx, 31, 0x2CD780u);
    ctx->pc = 0x2CD77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD778u;
    // 0x2cd77c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2CD778u, 0x2CD780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD780u;
label_2cd780:
    // 0x2cd780: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cd780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cd784:
    // 0x2cd784: 0x1200003a  beqz        $s0, . + 4 + (0x3A << 2)
label_2cd788:
    if (ctx->pc == 0x2CD788u) {
        ctx->pc = 0x2CD788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD784u;
        // 0x2cd788: 0x8e83bd30  lw          $v1, -0x42D0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD78Cu;
        goto label_2cd78c;
    }
    ctx->pc = 0x2CD784u;
    {
        const bool branch_taken_0x2cd784 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD784u;
        // 0x2cd788: 0x8e83bd30  lw          $v1, -0x42D0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd784) {
            ctx->pc = 0x2CD870u;
            goto label_2cd870;
        }
    }
    ctx->pc = 0x2CD78Cu;
label_2cd78c:
    // 0x2cd78c: 0xc621002c  lwc1        $f1, 0x2C($s1)
    ctx->pc = 0x2cd78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cd790:
    // 0x2cd790: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cd790u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cd794:
    // 0x2cd794: 0x0  nop
    ctx->pc = 0x2cd794u;
    // NOP
label_2cd798:
    // 0x2cd798: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2cd798u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cd79c:
    // 0x2cd79c: 0x0  nop
    ctx->pc = 0x2cd79cu;
    // NOP
label_2cd7a0:
    // 0x2cd7a0: 0x45000018  bc1f        . + 4 + (0x18 << 2)
label_2cd7a4:
    if (ctx->pc == 0x2CD7A4u) {
        ctx->pc = 0x2CD7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD7A0u;
        // 0x2cd7a4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD7A8u;
        goto label_2cd7a8;
    }
    ctx->pc = 0x2CD7A0u;
    {
        const bool branch_taken_0x2cd7a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CD7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD7A0u;
        // 0x2cd7a4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd7a0) {
            ctx->pc = 0x2CD804u;
            goto label_2cd804;
        }
    }
    ctx->pc = 0x2CD7A8u;
label_2cd7a8:
    // 0x2cd7a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2cd7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cd7ac:
    // 0x2cd7ac: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2cd7acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2cd7b0:
    // 0x2cd7b0: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2cd7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2cd7b4:
    // 0x2cd7b4: 0x60f809  jalr        $v1
label_2cd7b8:
    if (ctx->pc == 0x2CD7B8u) {
        ctx->pc = 0x2CD7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD7B4u;
        // 0x2cd7b8: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD7BCu;
        goto label_2cd7bc;
    }
    ctx->pc = 0x2CD7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2CD7BCu);
        ctx->pc = 0x2CD7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD7B4u;
        // 0x2cd7b8: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD7B4u, 0x2CD7BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CD7BCu;
label_2cd7bc:
    // 0x2cd7bc: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2cd7bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cd7c0:
    // 0x2cd7c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2cd7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cd7c4:
    // 0x2cd7c4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2cd7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2cd7c8:
    // 0x2cd7c8: 0xc05959e  jal         func_165678
label_2cd7cc:
    if (ctx->pc == 0x2CD7CCu) {
        ctx->pc = 0x2CD7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD7C8u;
        // 0x2cd7cc: 0x8c64020c  lw          $a0, 0x20C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD7D0u;
        goto label_2cd7d0;
    }
    ctx->pc = 0x2CD7C8u;
    SET_GPR_U32(ctx, 31, 0x2CD7D0u);
    ctx->pc = 0x2CD7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD7C8u;
    // 0x2cd7cc: 0x8c64020c  lw          $a0, 0x20C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x2CD7C8u, 0x2CD7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD7D0u;
label_2cd7d0:
    // 0x2cd7d0: 0x84430092  lh          $v1, 0x92($v0)
    ctx->pc = 0x2cd7d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_2cd7d4:
    // 0x2cd7d4: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2cd7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_2cd7d8:
    // 0x2cd7d8: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x2cd7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_2cd7dc:
    // 0x2cd7dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2cd7dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2cd7e0:
    // 0x2cd7e0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2cd7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2cd7e4:
    // 0x2cd7e4: 0xc0cdb38  jal         func_336CE0
label_2cd7e8:
    if (ctx->pc == 0x2CD7E8u) {
        ctx->pc = 0x2CD7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD7E4u;
        // 0x2cd7e8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD7ECu;
        goto label_2cd7ec;
    }
    ctx->pc = 0x2CD7E4u;
    SET_GPR_U32(ctx, 31, 0x2CD7ECu);
    ctx->pc = 0x2CD7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD7E4u;
    // 0x2cd7e8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2CD7E4u, 0x2CD7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD7ECu;
label_2cd7ec:
    // 0x2cd7ec: 0xc621002c  lwc1        $f1, 0x2C($s1)
    ctx->pc = 0x2cd7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cd7f0:
    // 0x2cd7f0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2cd7f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2cd7f4:
    // 0x2cd7f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cd7f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cd7f8:
    // 0x2cd7f8: 0x0  nop
    ctx->pc = 0x2cd7f8u;
    // NOP
label_2cd7fc:
    // 0x2cd7fc: 0x45010034  bc1t        . + 4 + (0x34 << 2)
label_2cd800:
    if (ctx->pc == 0x2CD800u) {
        ctx->pc = 0x2CD800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD7FCu;
        // 0x2cd800: 0x8e82bd30  lw          $v0, -0x42D0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD804u;
        goto label_2cd804;
    }
    ctx->pc = 0x2CD7FCu;
    {
        const bool branch_taken_0x2cd7fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CD800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD7FCu;
        // 0x2cd800: 0x8e82bd30  lw          $v0, -0x42D0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd7fc) {
            ctx->pc = 0x2CD8D0u;
            goto label_2cd8d0;
        }
    }
    ctx->pc = 0x2CD804u;
label_2cd804:
    // 0x2cd804: 0x92220039  lbu         $v0, 0x39($s1)
    ctx->pc = 0x2cd804u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
label_2cd808:
    // 0x2cd808: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cd808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2cd80c:
    // 0x2cd80c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_2cd810:
    if (ctx->pc == 0x2CD810u) {
        ctx->pc = 0x2CD810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD80Cu;
        // 0x2cd810: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD814u;
        goto label_2cd814;
    }
    ctx->pc = 0x2CD80Cu;
    {
        const bool branch_taken_0x2cd80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd80c) {
            ctx->pc = 0x2CD810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD80Cu;
            // 0x2cd810: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD850u;
            goto label_2cd850;
        }
    }
    ctx->pc = 0x2CD814u;
label_2cd814:
    // 0x2cd814: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x2cd814u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_2cd818:
    // 0x2cd818: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cd818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cd81c:
    // 0x2cd81c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2cd81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cd820:
    // 0x2cd820: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2cd820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cd824:
    // 0x2cd824: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2cd824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2cd828:
    // 0x2cd828: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cd828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cd82c:
    // 0x2cd82c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2cd82cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_2cd830:
    // 0x2cd830: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cd830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cd834:
    // 0x2cd834: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2cd834u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2cd838:
    // 0x2cd838: 0xc0a764a  jal         func_29D928
label_2cd83c:
    if (ctx->pc == 0x2CD83Cu) {
        ctx->pc = 0x2CD83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD838u;
        // 0x2cd83c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD840u;
        goto label_2cd840;
    }
    ctx->pc = 0x2CD838u;
    SET_GPR_U32(ctx, 31, 0x2CD840u);
    ctx->pc = 0x2CD83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD838u;
    // 0x2cd83c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D928u, 0x2CD838u, 0x2CD840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD840u;
label_2cd840:
    // 0x2cd840: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cd840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cd844:
    // 0x2cd844: 0x54a0001e  bnel        $a1, $zero, . + 4 + (0x1E << 2)
label_2cd848:
    if (ctx->pc == 0x2CD848u) {
        ctx->pc = 0x2CD848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD844u;
        // 0x2cd848: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD84Cu;
        goto label_2cd84c;
    }
    ctx->pc = 0x2CD844u;
    {
        const bool branch_taken_0x2cd844 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd844) {
            ctx->pc = 0x2CD848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD844u;
            // 0x2cd848: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD8C0u;
            goto label_2cd8c0;
        }
    }
    ctx->pc = 0x2CD84Cu;
label_2cd84c:
    // 0x2cd84c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2cd84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cd850:
    // 0x2cd850: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2cd850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2cd854:
    // 0x2cd854: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x2cd854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2cd858:
    // 0x2cd858: 0x8c83020c  lw          $v1, 0x20C($a0)
    ctx->pc = 0x2cd858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
label_2cd85c:
    // 0x2cd85c: 0xae0300ec  sw          $v1, 0xEC($s0)
    ctx->pc = 0x2cd85cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 3));
label_2cd860:
    // 0x2cd860: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x2cd860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_2cd864:
    // 0x2cd864: 0x24421388  addiu       $v0, $v0, 0x1388
    ctx->pc = 0x2cd864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5000));
label_2cd868:
    // 0x2cd868: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2cd86c:
    if (ctx->pc == 0x2CD86Cu) {
        ctx->pc = 0x2CD86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD868u;
        // 0x2cd86c: 0xae0200f0  sw          $v0, 0xF0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD870u;
        goto label_2cd870;
    }
    ctx->pc = 0x2CD868u;
    {
        const bool branch_taken_0x2cd868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD868u;
        // 0x2cd86c: 0xae0200f0  sw          $v0, 0xF0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd868) {
            ctx->pc = 0x2CD8D4u;
            goto label_2cd8d4;
        }
    }
    ctx->pc = 0x2CD870u;
label_2cd870:
    // 0x2cd870: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2cd870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2cd874:
    // 0x2cd874: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
label_2cd878:
    if (ctx->pc == 0x2CD878u) {
        ctx->pc = 0x2CD878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD874u;
        // 0x2cd878: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD87Cu;
        goto label_2cd87c;
    }
    ctx->pc = 0x2CD874u;
    {
        const bool branch_taken_0x2cd874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CD878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD874u;
        // 0x2cd878: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd874) {
            ctx->pc = 0x2CD8D8u;
            goto label_2cd8d8;
        }
    }
    ctx->pc = 0x2CD87Cu;
label_2cd87c:
    // 0x2cd87c: 0x92220039  lbu         $v0, 0x39($s1)
    ctx->pc = 0x2cd87cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
label_2cd880:
    // 0x2cd880: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cd880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2cd884:
    // 0x2cd884: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_2cd888:
    if (ctx->pc == 0x2CD888u) {
        ctx->pc = 0x2CD888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD884u;
        // 0x2cd888: 0x7bb10070  lq          $s1, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD88Cu;
        goto label_2cd88c;
    }
    ctx->pc = 0x2CD884u;
    {
        const bool branch_taken_0x2cd884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd884) {
            ctx->pc = 0x2CD888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD884u;
            // 0x2cd888: 0x7bb10070  lq          $s1, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD8DCu;
            goto label_2cd8dc;
        }
    }
    ctx->pc = 0x2CD88Cu;
label_2cd88c:
    // 0x2cd88c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2cd88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cd890:
    // 0x2cd890: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cd890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cd894:
    // 0x2cd894: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2cd894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_2cd898:
    // 0x2cd898: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cd898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cd89c:
    // 0x2cd89c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2cd89cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cd8a0:
    // 0x2cd8a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2cd8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cd8a4:
    // 0x2cd8a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cd8a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cd8a8:
    // 0x2cd8a8: 0xc0a764a  jal         func_29D928
label_2cd8ac:
    if (ctx->pc == 0x2CD8ACu) {
        ctx->pc = 0x2CD8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD8A8u;
        // 0x2cd8ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD8B0u;
        goto label_2cd8b0;
    }
    ctx->pc = 0x2CD8A8u;
    SET_GPR_U32(ctx, 31, 0x2CD8B0u);
    ctx->pc = 0x2CD8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD8A8u;
    // 0x2cd8ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D928u, 0x2CD8A8u, 0x2CD8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD8B0u;
label_2cd8b0:
    // 0x2cd8b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cd8b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cd8b4:
    // 0x2cd8b4: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_2cd8b8:
    if (ctx->pc == 0x2CD8B8u) {
        ctx->pc = 0x2CD8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD8B4u;
        // 0x2cd8b8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD8BCu;
        goto label_2cd8bc;
    }
    ctx->pc = 0x2CD8B4u;
    {
        const bool branch_taken_0x2cd8b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD8B4u;
        // 0x2cd8b8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd8b4) {
            ctx->pc = 0x2CD8D8u;
            goto label_2cd8d8;
        }
    }
    ctx->pc = 0x2CD8BCu;
label_2cd8bc:
    // 0x2cd8bc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2cd8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2cd8c0:
    // 0x2cd8c0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2cd8c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2cd8c4:
    // 0x2cd8c4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2cd8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2cd8c8:
    // 0x2cd8c8: 0x40f809  jalr        $v0
label_2cd8cc:
    if (ctx->pc == 0x2CD8CCu) {
        ctx->pc = 0x2CD8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD8C8u;
        // 0x2cd8cc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD8D0u;
        goto label_2cd8d0;
    }
    ctx->pc = 0x2CD8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CD8D0u);
        ctx->pc = 0x2CD8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD8C8u;
        // 0x2cd8cc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD8C8u, 0x2CD8D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CD8D0u;
label_2cd8d0:
    // 0x2cd8d0: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2cd8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_2cd8d4:
    // 0x2cd8d4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2cd8d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2cd8d8:
    // 0x2cd8d8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2cd8d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2cd8dc:
    // 0x2cd8dc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2cd8dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2cd8e0:
    // 0x2cd8e0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2cd8e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2cd8e4:
    // 0x2cd8e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2cd8e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2cd8e8:
    // 0x2cd8e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2cd8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2cd8ec:
    // 0x2cd8ec: 0x3e00008  jr          $ra
label_2cd8f0:
    if (ctx->pc == 0x2CD8F0u) {
        ctx->pc = 0x2CD8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD8ECu;
        // 0x2cd8f0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD8F4u;
        goto label_2cd8f4;
    }
    ctx->pc = 0x2CD8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD8ECu;
        // 0x2cd8f0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD8F4u;
label_2cd8f4:
    // 0x2cd8f4: 0x0  nop
    ctx->pc = 0x2cd8f4u;
    // NOP
    ctx->pc = 0x2cd8f8u;
}
