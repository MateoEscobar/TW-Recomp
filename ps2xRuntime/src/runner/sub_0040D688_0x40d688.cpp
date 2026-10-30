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

// Function: sub_0040D688
// Address: 0x40d688 - 0x40d900
void sub_0040D688_0x40d688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040D688_0x40d688");
#endif

    switch (ctx->pc) {
        case 0x40d688u: goto label_40d688;
        case 0x40d68cu: goto label_40d68c;
        case 0x40d690u: goto label_40d690;
        case 0x40d694u: goto label_40d694;
        case 0x40d698u: goto label_40d698;
        case 0x40d69cu: goto label_40d69c;
        case 0x40d6a0u: goto label_40d6a0;
        case 0x40d6a4u: goto label_40d6a4;
        case 0x40d6a8u: goto label_40d6a8;
        case 0x40d6acu: goto label_40d6ac;
        case 0x40d6b0u: goto label_40d6b0;
        case 0x40d6b4u: goto label_40d6b4;
        case 0x40d6b8u: goto label_40d6b8;
        case 0x40d6bcu: goto label_40d6bc;
        case 0x40d6c0u: goto label_40d6c0;
        case 0x40d6c4u: goto label_40d6c4;
        case 0x40d6c8u: goto label_40d6c8;
        case 0x40d6ccu: goto label_40d6cc;
        case 0x40d6d0u: goto label_40d6d0;
        case 0x40d6d4u: goto label_40d6d4;
        case 0x40d6d8u: goto label_40d6d8;
        case 0x40d6dcu: goto label_40d6dc;
        case 0x40d6e0u: goto label_40d6e0;
        case 0x40d6e4u: goto label_40d6e4;
        case 0x40d6e8u: goto label_40d6e8;
        case 0x40d6ecu: goto label_40d6ec;
        case 0x40d6f0u: goto label_40d6f0;
        case 0x40d6f4u: goto label_40d6f4;
        case 0x40d6f8u: goto label_40d6f8;
        case 0x40d6fcu: goto label_40d6fc;
        case 0x40d700u: goto label_40d700;
        case 0x40d704u: goto label_40d704;
        case 0x40d708u: goto label_40d708;
        case 0x40d70cu: goto label_40d70c;
        case 0x40d710u: goto label_40d710;
        case 0x40d714u: goto label_40d714;
        case 0x40d718u: goto label_40d718;
        case 0x40d71cu: goto label_40d71c;
        case 0x40d720u: goto label_40d720;
        case 0x40d724u: goto label_40d724;
        case 0x40d728u: goto label_40d728;
        case 0x40d72cu: goto label_40d72c;
        case 0x40d730u: goto label_40d730;
        case 0x40d734u: goto label_40d734;
        case 0x40d738u: goto label_40d738;
        case 0x40d73cu: goto label_40d73c;
        case 0x40d740u: goto label_40d740;
        case 0x40d744u: goto label_40d744;
        case 0x40d748u: goto label_40d748;
        case 0x40d74cu: goto label_40d74c;
        case 0x40d750u: goto label_40d750;
        case 0x40d754u: goto label_40d754;
        case 0x40d758u: goto label_40d758;
        case 0x40d75cu: goto label_40d75c;
        case 0x40d760u: goto label_40d760;
        case 0x40d764u: goto label_40d764;
        case 0x40d768u: goto label_40d768;
        case 0x40d76cu: goto label_40d76c;
        case 0x40d770u: goto label_40d770;
        case 0x40d774u: goto label_40d774;
        case 0x40d778u: goto label_40d778;
        case 0x40d77cu: goto label_40d77c;
        case 0x40d780u: goto label_40d780;
        case 0x40d784u: goto label_40d784;
        case 0x40d788u: goto label_40d788;
        case 0x40d78cu: goto label_40d78c;
        case 0x40d790u: goto label_40d790;
        case 0x40d794u: goto label_40d794;
        case 0x40d798u: goto label_40d798;
        case 0x40d79cu: goto label_40d79c;
        case 0x40d7a0u: goto label_40d7a0;
        case 0x40d7a4u: goto label_40d7a4;
        case 0x40d7a8u: goto label_40d7a8;
        case 0x40d7acu: goto label_40d7ac;
        case 0x40d7b0u: goto label_40d7b0;
        case 0x40d7b4u: goto label_40d7b4;
        case 0x40d7b8u: goto label_40d7b8;
        case 0x40d7bcu: goto label_40d7bc;
        case 0x40d7c0u: goto label_40d7c0;
        case 0x40d7c4u: goto label_40d7c4;
        case 0x40d7c8u: goto label_40d7c8;
        case 0x40d7ccu: goto label_40d7cc;
        case 0x40d7d0u: goto label_40d7d0;
        case 0x40d7d4u: goto label_40d7d4;
        case 0x40d7d8u: goto label_40d7d8;
        case 0x40d7dcu: goto label_40d7dc;
        case 0x40d7e0u: goto label_40d7e0;
        case 0x40d7e4u: goto label_40d7e4;
        case 0x40d7e8u: goto label_40d7e8;
        case 0x40d7ecu: goto label_40d7ec;
        case 0x40d7f0u: goto label_40d7f0;
        case 0x40d7f4u: goto label_40d7f4;
        case 0x40d7f8u: goto label_40d7f8;
        case 0x40d7fcu: goto label_40d7fc;
        case 0x40d800u: goto label_40d800;
        case 0x40d804u: goto label_40d804;
        case 0x40d808u: goto label_40d808;
        case 0x40d80cu: goto label_40d80c;
        case 0x40d810u: goto label_40d810;
        case 0x40d814u: goto label_40d814;
        case 0x40d818u: goto label_40d818;
        case 0x40d81cu: goto label_40d81c;
        case 0x40d820u: goto label_40d820;
        case 0x40d824u: goto label_40d824;
        case 0x40d828u: goto label_40d828;
        case 0x40d82cu: goto label_40d82c;
        case 0x40d830u: goto label_40d830;
        case 0x40d834u: goto label_40d834;
        case 0x40d838u: goto label_40d838;
        case 0x40d83cu: goto label_40d83c;
        case 0x40d840u: goto label_40d840;
        case 0x40d844u: goto label_40d844;
        case 0x40d848u: goto label_40d848;
        case 0x40d84cu: goto label_40d84c;
        case 0x40d850u: goto label_40d850;
        case 0x40d854u: goto label_40d854;
        case 0x40d858u: goto label_40d858;
        case 0x40d85cu: goto label_40d85c;
        case 0x40d860u: goto label_40d860;
        case 0x40d864u: goto label_40d864;
        case 0x40d868u: goto label_40d868;
        case 0x40d86cu: goto label_40d86c;
        case 0x40d870u: goto label_40d870;
        case 0x40d874u: goto label_40d874;
        case 0x40d878u: goto label_40d878;
        case 0x40d87cu: goto label_40d87c;
        case 0x40d880u: goto label_40d880;
        case 0x40d884u: goto label_40d884;
        case 0x40d888u: goto label_40d888;
        case 0x40d88cu: goto label_40d88c;
        case 0x40d890u: goto label_40d890;
        case 0x40d894u: goto label_40d894;
        case 0x40d898u: goto label_40d898;
        case 0x40d89cu: goto label_40d89c;
        case 0x40d8a0u: goto label_40d8a0;
        case 0x40d8a4u: goto label_40d8a4;
        case 0x40d8a8u: goto label_40d8a8;
        case 0x40d8acu: goto label_40d8ac;
        case 0x40d8b0u: goto label_40d8b0;
        case 0x40d8b4u: goto label_40d8b4;
        case 0x40d8b8u: goto label_40d8b8;
        case 0x40d8bcu: goto label_40d8bc;
        case 0x40d8c0u: goto label_40d8c0;
        case 0x40d8c4u: goto label_40d8c4;
        case 0x40d8c8u: goto label_40d8c8;
        case 0x40d8ccu: goto label_40d8cc;
        case 0x40d8d0u: goto label_40d8d0;
        case 0x40d8d4u: goto label_40d8d4;
        case 0x40d8d8u: goto label_40d8d8;
        case 0x40d8dcu: goto label_40d8dc;
        case 0x40d8e0u: goto label_40d8e0;
        case 0x40d8e4u: goto label_40d8e4;
        case 0x40d8e8u: goto label_40d8e8;
        case 0x40d8ecu: goto label_40d8ec;
        case 0x40d8f0u: goto label_40d8f0;
        case 0x40d8f4u: goto label_40d8f4;
        case 0x40d8f8u: goto label_40d8f8;
        case 0x40d8fcu: goto label_40d8fc;
        default: break;
    }

    ctx->pc = 0x40d688u;

label_40d688:
    // 0x40d688: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x40d688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_40d68c:
    // 0x40d68c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x40d68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_40d690:
    // 0x40d690: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x40d690u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_40d694:
    // 0x40d694: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x40d694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_40d698:
    // 0x40d698: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x40d698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_40d69c:
    // 0x40d69c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x40d69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_40d6a0:
    // 0x40d6a0: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x40d6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_40d6a4:
    // 0x40d6a4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x40d6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_40d6a8:
    // 0x40d6a8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x40d6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_40d6ac:
    // 0x40d6ac: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x40d6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_40d6b0:
    // 0x40d6b0: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x40d6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_40d6b4:
    // 0x40d6b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40d6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_40d6b8:
    // 0x40d6b8: 0x8ea427e4  lw          $a0, 0x27E4($s5)
    ctx->pc = 0x40d6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_40d6bc:
    // 0x40d6bc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x40d6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_40d6c0:
    // 0x40d6c0: 0x8c940008  lw          $s4, 0x8($a0)
    ctx->pc = 0x40d6c0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_40d6c4:
    // 0x40d6c4: 0x844300b8  lh          $v1, 0xB8($v0)
    ctx->pc = 0x40d6c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_40d6c8:
    // 0x40d6c8: 0x8c4600bc  lw          $a2, 0xBC($v0)
    ctx->pc = 0x40d6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_40d6cc:
    // 0x40d6cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x40d6ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_40d6d0:
    // 0x40d6d0: 0xc0f809  jalr        $a2
label_40d6d4:
    if (ctx->pc == 0x40D6D4u) {
        ctx->pc = 0x40D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D6D0u;
        // 0x40d6d4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D6D8u;
        goto label_40d6d8;
    }
    ctx->pc = 0x40D6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x40D6D8u);
        ctx->pc = 0x40D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D6D0u;
        // 0x40d6d4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D6D0u, 0x40D6D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D6D8u;
label_40d6d8:
    // 0x40d6d8: 0x8ea527e4  lw          $a1, 0x27E4($s5)
    ctx->pc = 0x40d6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_40d6dc:
    // 0x40d6dc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x40d6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_40d6e0:
    // 0x40d6e0: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x40d6e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_40d6e4:
    // 0x40d6e4: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x40d6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_40d6e8:
    // 0x40d6e8: 0x40f809  jalr        $v0
label_40d6ec:
    if (ctx->pc == 0x40D6ECu) {
        ctx->pc = 0x40D6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D6E8u;
        // 0x40d6ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D6F0u;
        goto label_40d6f0;
    }
    ctx->pc = 0x40D6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40D6F0u);
        ctx->pc = 0x40D6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D6E8u;
        // 0x40d6ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D6E8u, 0x40D6F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D6F0u;
label_40d6f0:
    // 0x40d6f0: 0x8ea827e4  lw          $t0, 0x27E4($s5)
    ctx->pc = 0x40d6f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_40d6f4:
    // 0x40d6f4: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x40d6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_40d6f8:
    // 0x40d6f8: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x40d6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_40d6fc:
    // 0x40d6fc: 0x24778a10  addiu       $s7, $v1, -0x75F0
    ctx->pc = 0x40d6fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937104));
label_40d700:
    // 0x40d700: 0x24968a88  addiu       $s6, $a0, -0x7578
    ctx->pc = 0x40d700u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937224));
label_40d704:
    // 0x40d704: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x40d704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_40d708:
    // 0x40d708: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x40d708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
label_40d70c:
    // 0x40d70c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x40d70cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_40d710:
    // 0x40d710: 0x449821  addu        $s3, $v0, $a0
    ctx->pc = 0x40d710u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_40d714:
    // 0x40d714: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x40d714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_40d718:
    // 0x40d718: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x40d718u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_40d71c:
    // 0x40d71c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x40d71cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_40d720:
    // 0x40d720: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x40d720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_40d724:
    // 0x40d724: 0x24090079  addiu       $t1, $zero, 0x79
    ctx->pc = 0x40d724u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
label_40d728:
    // 0x40d728: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x40d728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_40d72c:
    // 0x40d72c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x40d72cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40d730:
    // 0x40d730: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x40d730u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_40d734:
    // 0x40d734: 0x40f809  jalr        $v0
label_40d738:
    if (ctx->pc == 0x40D738u) {
        ctx->pc = 0x40D738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D734u;
        // 0x40d738: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D73Cu;
        goto label_40d73c;
    }
    ctx->pc = 0x40D734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40D73Cu);
        ctx->pc = 0x40D738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D734u;
        // 0x40d738: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D734u, 0x40D73Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D73Cu;
label_40d73c:
    // 0x40d73c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x40d73cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40d740:
    // 0x40d740: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_40d744:
    if (ctx->pc == 0x40D744u) {
        ctx->pc = 0x40D744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D740u;
        // 0x40d744: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D748u;
        goto label_40d748;
    }
    ctx->pc = 0x40D740u;
    {
        const bool branch_taken_0x40d740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D740u;
        // 0x40d744: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d740) {
            ctx->pc = 0x40D754u;
            goto label_40d754;
        }
    }
    ctx->pc = 0x40D748u;
label_40d748:
    // 0x40d748: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x40d748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_40d74c:
    // 0x40d74c: 0x24424428  addiu       $v0, $v0, 0x4428
    ctx->pc = 0x40d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17448));
label_40d750:
    // 0x40d750: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x40d750u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_40d754:
    // 0x40d754: 0x3c110059  lui         $s1, 0x59
    ctx->pc = 0x40d754u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
label_40d758:
    // 0x40d758: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x40d758u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_40d75c:
    // 0x40d75c: 0x26318ac0  addiu       $s1, $s1, -0x7540
    ctx->pc = 0x40d75cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294937280));
label_40d760:
    // 0x40d760: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40d760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_40d764:
    // 0x40d764: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x40d764u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40d768:
    // 0x40d768: 0xc0ce268  jal         func_3389A0
label_40d76c:
    if (ctx->pc == 0x40D76Cu) {
        ctx->pc = 0x40D76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D768u;
        // 0x40d76c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D770u;
        goto label_40d770;
    }
    ctx->pc = 0x40D768u;
    SET_GPR_U32(ctx, 31, 0x40D770u);
    ctx->pc = 0x40D76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D768u;
    // 0x40d76c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389A0u, 0x40D768u, 0x40D770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D770u;
label_40d770:
    // 0x40d770: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x40d770u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_40d774:
    // 0x40d774: 0xae12b9c8  sw          $s2, -0x4638($s0)
    ctx->pc = 0x40d774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294949320), GPR_U32(ctx, 18));
label_40d778:
    // 0x40d778: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x40d778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40d77c:
    // 0x40d77c: 0x8ea827e4  lw          $t0, 0x27E4($s5)
    ctx->pc = 0x40d77cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_40d780:
    // 0x40d780: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x40d780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_40d784:
    // 0x40d784: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x40d784u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40d788:
    // 0x40d788: 0x261eb9c8  addiu       $fp, $s0, -0x4638
    ctx->pc = 0x40d788u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949320));
label_40d78c:
    // 0x40d78c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x40d78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_40d790:
    // 0x40d790: 0x846400d8  lh          $a0, 0xD8($v1)
    ctx->pc = 0x40d790u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 216)));
label_40d794:
    // 0x40d794: 0x8c6200dc  lw          $v0, 0xDC($v1)
    ctx->pc = 0x40d794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
label_40d798:
    // 0x40d798: 0x40f809  jalr        $v0
label_40d79c:
    if (ctx->pc == 0x40D79Cu) {
        ctx->pc = 0x40D79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D798u;
        // 0x40d79c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D7A0u;
        goto label_40d7a0;
    }
    ctx->pc = 0x40D798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40D7A0u);
        ctx->pc = 0x40D79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D798u;
        // 0x40d79c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D798u, 0x40D7A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D7A0u;
label_40d7a0:
    // 0x40d7a0: 0x8ea827e4  lw          $t0, 0x27E4($s5)
    ctx->pc = 0x40d7a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_40d7a4:
    // 0x40d7a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x40d7a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40d7a8:
    // 0x40d7a8: 0xae02b9c8  sw          $v0, -0x4638($s0)
    ctx->pc = 0x40d7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294949320), GPR_U32(ctx, 2));
label_40d7ac:
    // 0x40d7ac: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x40d7acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_40d7b0:
    // 0x40d7b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40d7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40d7b4:
    // 0x40d7b4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x40d7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_40d7b8:
    // 0x40d7b8: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x40d7b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_40d7bc:
    // 0x40d7bc: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x40d7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_40d7c0:
    // 0x40d7c0: 0x60f809  jalr        $v1
label_40d7c4:
    if (ctx->pc == 0x40D7C4u) {
        ctx->pc = 0x40D7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D7C0u;
        // 0x40d7c4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D7C8u;
        goto label_40d7c8;
    }
    ctx->pc = 0x40D7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40D7C8u);
        ctx->pc = 0x40D7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D7C0u;
        // 0x40d7c4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D7C0u, 0x40D7C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D7C8u;
label_40d7c8:
    // 0x40d7c8: 0x8ea627e4  lw          $a2, 0x27E4($s5)
    ctx->pc = 0x40d7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_40d7cc:
    // 0x40d7cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x40d7ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_40d7d0:
    // 0x40d7d0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x40d7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_40d7d4:
    // 0x40d7d4: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x40d7d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_40d7d8:
    // 0x40d7d8: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x40d7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_40d7dc:
    // 0x40d7dc: 0x60f809  jalr        $v1
label_40d7e0:
    if (ctx->pc == 0x40D7E0u) {
        ctx->pc = 0x40D7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D7DCu;
        // 0x40d7e0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D7E4u;
        goto label_40d7e4;
    }
    ctx->pc = 0x40D7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40D7E4u);
        ctx->pc = 0x40D7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D7DCu;
        // 0x40d7e0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D7DCu, 0x40D7E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D7E4u;
label_40d7e4:
    // 0x40d7e4: 0x8ea527e4  lw          $a1, 0x27E4($s5)
    ctx->pc = 0x40d7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_40d7e8:
    // 0x40d7e8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x40d7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_40d7ec:
    // 0x40d7ec: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x40d7ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_40d7f0:
    // 0x40d7f0: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x40d7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_40d7f4:
    // 0x40d7f4: 0x40f809  jalr        $v0
label_40d7f8:
    if (ctx->pc == 0x40D7F8u) {
        ctx->pc = 0x40D7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D7F4u;
        // 0x40d7f8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D7FCu;
        goto label_40d7fc;
    }
    ctx->pc = 0x40D7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40D7FCu);
        ctx->pc = 0x40D7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D7F4u;
        // 0x40d7f8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D7F4u, 0x40D7FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D7FCu;
label_40d7fc:
    // 0x40d7fc: 0x8ea727e4  lw          $a3, 0x27E4($s5)
    ctx->pc = 0x40d7fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_40d800:
    // 0x40d800: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x40d800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
label_40d804:
    // 0x40d804: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x40d804u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_40d808:
    // 0x40d808: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x40d808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_40d80c:
    // 0x40d80c: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x40d80cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_40d810:
    // 0x40d810: 0x24020fff  addiu       $v0, $zero, 0xFFF
    ctx->pc = 0x40d810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
label_40d814:
    // 0x40d814: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x40d814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_40d818:
    // 0x40d818: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x40d818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_40d81c:
    // 0x40d81c: 0x84c40050  lh          $a0, 0x50($a2)
    ctx->pc = 0x40d81cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 80)));
label_40d820:
    // 0x40d820: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x40d820u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_40d824:
    // 0x40d824: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x40d824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_40d828:
    // 0x40d828: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x40d828u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_40d82c:
    // 0x40d82c: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x40d82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_40d830:
    // 0x40d830: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x40d830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_40d834:
    // 0x40d834: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x40d834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_40d838:
    // 0x40d838: 0x24090086  addiu       $t1, $zero, 0x86
    ctx->pc = 0x40d838u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
label_40d83c:
    // 0x40d83c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x40d83cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40d840:
    // 0x40d840: 0x40f809  jalr        $v0
label_40d844:
    if (ctx->pc == 0x40D844u) {
        ctx->pc = 0x40D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D840u;
        // 0x40d844: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D848u;
        goto label_40d848;
    }
    ctx->pc = 0x40D840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40D848u);
        ctx->pc = 0x40D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D840u;
        // 0x40d844: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D840u, 0x40D848u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D848u;
label_40d848:
    // 0x40d848: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x40d848u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40d84c:
    // 0x40d84c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_40d850:
    if (ctx->pc == 0x40D850u) {
        ctx->pc = 0x40D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D84Cu;
        // 0x40d850: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D854u;
        goto label_40d854;
    }
    ctx->pc = 0x40D84Cu;
    {
        const bool branch_taken_0x40d84c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D84Cu;
        // 0x40d850: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d84c) {
            ctx->pc = 0x40D85Cu;
            goto label_40d85c;
        }
    }
    ctx->pc = 0x40D854u;
label_40d854:
    // 0x40d854: 0x24424428  addiu       $v0, $v0, 0x4428
    ctx->pc = 0x40d854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17448));
label_40d858:
    // 0x40d858: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x40d858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_40d85c:
    // 0x40d85c: 0x8ea227e4  lw          $v0, 0x27E4($s5)
    ctx->pc = 0x40d85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_40d860:
    // 0x40d860: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x40d860u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
label_40d864:
    // 0x40d864: 0x26108ad0  addiu       $s0, $s0, -0x7530
    ctx->pc = 0x40d864u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294937296));
label_40d868:
    // 0x40d868: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40d868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40d86c:
    // 0x40d86c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x40d86cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_40d870:
    // 0x40d870: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x40d870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_40d874:
    // 0x40d874: 0xc0ce268  jal         func_3389A0
label_40d878:
    if (ctx->pc == 0x40D878u) {
        ctx->pc = 0x40D878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D874u;
        // 0x40d878: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D87Cu;
        goto label_40d87c;
    }
    ctx->pc = 0x40D874u;
    SET_GPR_U32(ctx, 31, 0x40D87Cu);
    ctx->pc = 0x40D878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D874u;
    // 0x40d878: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389A0u, 0x40D874u, 0x40D87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D87Cu;
label_40d87c:
    // 0x40d87c: 0xafd10004  sw          $s1, 0x4($fp)
    ctx->pc = 0x40d87cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 17));
label_40d880:
    // 0x40d880: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40d880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40d884:
    // 0x40d884: 0x8ea827e4  lw          $t0, 0x27E4($s5)
    ctx->pc = 0x40d884u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_40d888:
    // 0x40d888: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x40d888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40d88c:
    // 0x40d88c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x40d88cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40d890:
    // 0x40d890: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x40d890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_40d894:
    // 0x40d894: 0x846400d8  lh          $a0, 0xD8($v1)
    ctx->pc = 0x40d894u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 216)));
label_40d898:
    // 0x40d898: 0x8c6200dc  lw          $v0, 0xDC($v1)
    ctx->pc = 0x40d898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
label_40d89c:
    // 0x40d89c: 0x40f809  jalr        $v0
label_40d8a0:
    if (ctx->pc == 0x40D8A0u) {
        ctx->pc = 0x40D8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D89Cu;
        // 0x40d8a0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D8A4u;
        goto label_40d8a4;
    }
    ctx->pc = 0x40D89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40D8A4u);
        ctx->pc = 0x40D8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D89Cu;
        // 0x40d8a0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D89Cu, 0x40D8A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D8A4u;
label_40d8a4:
    // 0x40d8a4: 0x8ea427e4  lw          $a0, 0x27E4($s5)
    ctx->pc = 0x40d8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10212)));
label_40d8a8:
    // 0x40d8a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x40d8a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40d8ac:
    // 0x40d8ac: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x40d8acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_40d8b0:
    // 0x40d8b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40d8b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40d8b4:
    // 0x40d8b4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x40d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_40d8b8:
    // 0x40d8b8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x40d8b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_40d8bc:
    // 0x40d8bc: 0x844300c8  lh          $v1, 0xC8($v0)
    ctx->pc = 0x40d8bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_40d8c0:
    // 0x40d8c0: 0x8c4800cc  lw          $t0, 0xCC($v0)
    ctx->pc = 0x40d8c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_40d8c4:
    // 0x40d8c4: 0x100f809  jalr        $t0
label_40d8c8:
    if (ctx->pc == 0x40D8C8u) {
        ctx->pc = 0x40D8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D8C4u;
        // 0x40d8c8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D8CCu;
        goto label_40d8cc;
    }
    ctx->pc = 0x40D8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x40D8CCu);
        ctx->pc = 0x40D8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D8C4u;
        // 0x40d8c8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D8C4u, 0x40D8CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D8CCu;
label_40d8cc:
    // 0x40d8cc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x40d8ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_40d8d0:
    // 0x40d8d0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x40d8d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_40d8d4:
    // 0x40d8d4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x40d8d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_40d8d8:
    // 0x40d8d8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x40d8d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_40d8dc:
    // 0x40d8dc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x40d8dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_40d8e0:
    // 0x40d8e0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x40d8e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_40d8e4:
    // 0x40d8e4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x40d8e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40d8e8:
    // 0x40d8e8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x40d8e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40d8ec:
    // 0x40d8ec: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x40d8ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40d8f0:
    // 0x40d8f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40d8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_40d8f4:
    // 0x40d8f4: 0x3e00008  jr          $ra
label_40d8f8:
    if (ctx->pc == 0x40D8F8u) {
        ctx->pc = 0x40D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D8F4u;
        // 0x40d8f8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D8FCu;
        goto label_40d8fc;
    }
    ctx->pc = 0x40D8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D8F4u;
        // 0x40d8f8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D8F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40D8FCu;
label_40d8fc:
    // 0x40d8fc: 0x0  nop
    ctx->pc = 0x40d8fcu;
    // NOP
    ctx->pc = 0x40d900u;
}
