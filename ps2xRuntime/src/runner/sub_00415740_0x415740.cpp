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

// Function: sub_00415740
// Address: 0x415740 - 0x415878
void sub_00415740_0x415740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00415740_0x415740");
#endif

    switch (ctx->pc) {
        case 0x415740u: goto label_415740;
        case 0x415744u: goto label_415744;
        case 0x415748u: goto label_415748;
        case 0x41574cu: goto label_41574c;
        case 0x415750u: goto label_415750;
        case 0x415754u: goto label_415754;
        case 0x415758u: goto label_415758;
        case 0x41575cu: goto label_41575c;
        case 0x415760u: goto label_415760;
        case 0x415764u: goto label_415764;
        case 0x415768u: goto label_415768;
        case 0x41576cu: goto label_41576c;
        case 0x415770u: goto label_415770;
        case 0x415774u: goto label_415774;
        case 0x415778u: goto label_415778;
        case 0x41577cu: goto label_41577c;
        case 0x415780u: goto label_415780;
        case 0x415784u: goto label_415784;
        case 0x415788u: goto label_415788;
        case 0x41578cu: goto label_41578c;
        case 0x415790u: goto label_415790;
        case 0x415794u: goto label_415794;
        case 0x415798u: goto label_415798;
        case 0x41579cu: goto label_41579c;
        case 0x4157a0u: goto label_4157a0;
        case 0x4157a4u: goto label_4157a4;
        case 0x4157a8u: goto label_4157a8;
        case 0x4157acu: goto label_4157ac;
        case 0x4157b0u: goto label_4157b0;
        case 0x4157b4u: goto label_4157b4;
        case 0x4157b8u: goto label_4157b8;
        case 0x4157bcu: goto label_4157bc;
        case 0x4157c0u: goto label_4157c0;
        case 0x4157c4u: goto label_4157c4;
        case 0x4157c8u: goto label_4157c8;
        case 0x4157ccu: goto label_4157cc;
        case 0x4157d0u: goto label_4157d0;
        case 0x4157d4u: goto label_4157d4;
        case 0x4157d8u: goto label_4157d8;
        case 0x4157dcu: goto label_4157dc;
        case 0x4157e0u: goto label_4157e0;
        case 0x4157e4u: goto label_4157e4;
        case 0x4157e8u: goto label_4157e8;
        case 0x4157ecu: goto label_4157ec;
        case 0x4157f0u: goto label_4157f0;
        case 0x4157f4u: goto label_4157f4;
        case 0x4157f8u: goto label_4157f8;
        case 0x4157fcu: goto label_4157fc;
        case 0x415800u: goto label_415800;
        case 0x415804u: goto label_415804;
        case 0x415808u: goto label_415808;
        case 0x41580cu: goto label_41580c;
        case 0x415810u: goto label_415810;
        case 0x415814u: goto label_415814;
        case 0x415818u: goto label_415818;
        case 0x41581cu: goto label_41581c;
        case 0x415820u: goto label_415820;
        case 0x415824u: goto label_415824;
        case 0x415828u: goto label_415828;
        case 0x41582cu: goto label_41582c;
        case 0x415830u: goto label_415830;
        case 0x415834u: goto label_415834;
        case 0x415838u: goto label_415838;
        case 0x41583cu: goto label_41583c;
        case 0x415840u: goto label_415840;
        case 0x415844u: goto label_415844;
        case 0x415848u: goto label_415848;
        case 0x41584cu: goto label_41584c;
        case 0x415850u: goto label_415850;
        case 0x415854u: goto label_415854;
        case 0x415858u: goto label_415858;
        case 0x41585cu: goto label_41585c;
        case 0x415860u: goto label_415860;
        case 0x415864u: goto label_415864;
        case 0x415868u: goto label_415868;
        case 0x41586cu: goto label_41586c;
        case 0x415870u: goto label_415870;
        case 0x415874u: goto label_415874;
        default: break;
    }

    ctx->pc = 0x415740u;

label_415740:
    // 0x415740: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x415740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_415744:
    // 0x415744: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x415744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_415748:
    // 0x415748: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x415748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_41574c:
    // 0x41574c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x41574cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_415750:
    // 0x415750: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x415750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_415754:
    // 0x415754: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x415754u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_415758:
    // 0x415758: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x415758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_41575c:
    // 0x41575c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x41575cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_415760:
    // 0x415760: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x415760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_415764:
    // 0x415764: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x415764u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_415768:
    // 0x415768: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x415768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_41576c:
    // 0x41576c: 0x2454d870  addiu       $s4, $v0, -0x2790
    ctx->pc = 0x41576cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957168));
label_415770:
    // 0x415770: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x415770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_415774:
    // 0x415774: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x415774u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_415778:
    // 0x415778: 0x3c080059  lui         $t0, 0x59
    ctx->pc = 0x415778u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)89 << 16));
label_41577c:
    // 0x41577c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x41577cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_415780:
    // 0x415780: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x415780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_415784:
    // 0x415784: 0x0  nop
    ctx->pc = 0x415784u;
    // NOP
label_415788:
    // 0x415788: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x415788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_41578c:
    // 0x41578c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_415790:
    if (ctx->pc == 0x415790u) {
        ctx->pc = 0x415790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41578Cu;
        // 0x415790: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415794u;
        goto label_415794;
    }
    ctx->pc = 0x41578Cu;
    {
        const bool branch_taken_0x41578c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x415790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41578Cu;
        // 0x415790: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41578c) {
            ctx->pc = 0x41583Cu;
            goto label_41583c;
        }
    }
    ctx->pc = 0x415794u;
label_415794:
    // 0x415794: 0x8ccc27e4  lw          $t4, 0x27E4($a2)
    ctx->pc = 0x415794u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10212)));
label_415798:
    // 0x415798: 0x24a59348  addiu       $a1, $a1, -0x6CB8
    ctx->pc = 0x415798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939464));
label_41579c:
    // 0x41579c: 0x25089358  addiu       $t0, $t0, -0x6CA8
    ctx->pc = 0x41579cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294939480));
label_4157a0:
    // 0x4157a0: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x4157a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_4157a4:
    // 0x4157a4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4157a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_4157a8:
    // 0x4157a8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4157a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4157ac:
    // 0x4157ac: 0x2409003e  addiu       $t1, $zero, 0x3E
    ctx->pc = 0x4157acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
label_4157b0:
    // 0x4157b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4157b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4157b4:
    // 0x4157b4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4157b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4157b8:
    // 0x4157b8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4157b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4157bc:
    // 0x4157bc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4157bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4157c0:
    // 0x4157c0: 0x40f809  jalr        $v0
label_4157c4:
    if (ctx->pc == 0x4157C4u) {
        ctx->pc = 0x4157C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4157C0u;
        // 0x4157c4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4157C8u;
        goto label_4157c8;
    }
    ctx->pc = 0x4157C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4157C8u);
        ctx->pc = 0x4157C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4157C0u;
        // 0x4157c4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4157C0u, 0x4157C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4157C8u;
label_4157c8:
    // 0x4157c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4157c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4157cc:
    // 0x4157cc: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_4157d0:
    if (ctx->pc == 0x4157D0u) {
        ctx->pc = 0x4157D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4157CCu;
        // 0x4157d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4157D4u;
        goto label_4157d4;
    }
    ctx->pc = 0x4157CCu;
    {
        const bool branch_taken_0x4157cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4157D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4157CCu;
        // 0x4157d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4157cc) {
            ctx->pc = 0x4157E4u;
            goto label_4157e4;
        }
    }
    ctx->pc = 0x4157D4u;
label_4157d4:
    // 0x4157d4: 0xc1055a4  jal         func_415690
label_4157d8:
    if (ctx->pc == 0x4157D8u) {
        ctx->pc = 0x4157D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4157D4u;
        // 0x4157d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4157DCu;
        goto label_4157dc;
    }
    ctx->pc = 0x4157D4u;
    SET_GPR_U32(ctx, 31, 0x4157DCu);
    ctx->pc = 0x4157D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4157D4u;
    // 0x4157d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415690u, 0x4157D4u, 0x4157DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4157DCu;
label_4157dc:
    // 0x4157dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4157dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4157e0:
    // 0x4157e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4157e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4157e4:
    // 0x4157e4: 0xc1055be  jal         func_4156F8
label_4157e8:
    if (ctx->pc == 0x4157E8u) {
        ctx->pc = 0x4157E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4157E4u;
        // 0x4157e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4157ECu;
        goto label_4157ec;
    }
    ctx->pc = 0x4157E4u;
    SET_GPR_U32(ctx, 31, 0x4157ECu);
    ctx->pc = 0x4157E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4157E4u;
    // 0x4157e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4156F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4156F8u, 0x4157E4u, 0x4157ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4157ECu;
label_4157ec:
    // 0x4157ec: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x4157ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4157f0:
    // 0x4157f0: 0xa6120030  sh          $s2, 0x30($s0)
    ctx->pc = 0x4157f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 18));
label_4157f4:
    // 0x4157f4: 0x3c130001  lui         $s3, 0x1
    ctx->pc = 0x4157f4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)1 << 16));
label_4157f8:
    // 0x4157f8: 0x3c120001  lui         $s2, 0x1
    ctx->pc = 0x4157f8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1 << 16));
label_4157fc:
    // 0x4157fc: 0x0  nop
    ctx->pc = 0x4157fcu;
    // NOP
label_415800:
    // 0x415800: 0xc0e40a2  jal         func_390288
label_415804:
    if (ctx->pc == 0x415804u) {
        ctx->pc = 0x415804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415800u;
        // 0x415804: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415808u;
        goto label_415808;
    }
    ctx->pc = 0x415800u;
    SET_GPR_U32(ctx, 31, 0x415808u);
    ctx->pc = 0x415804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415800u;
    // 0x415804: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x415800u, 0x415808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415808u;
label_415808:
    // 0x415808: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_41580c:
    if (ctx->pc == 0x41580Cu) {
        ctx->pc = 0x41580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415808u;
        // 0x41580c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415810u;
        goto label_415810;
    }
    ctx->pc = 0x415808u;
    {
        const bool branch_taken_0x415808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415808u;
        // 0x41580c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415808) {
            ctx->pc = 0x415818u;
            goto label_415818;
        }
    }
    ctx->pc = 0x415810u;
label_415810:
    // 0x415810: 0xc1055c8  jal         func_415720
label_415814:
    if (ctx->pc == 0x415814u) {
        ctx->pc = 0x415814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415810u;
        // 0x415814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415818u;
        goto label_415818;
    }
    ctx->pc = 0x415810u;
    SET_GPR_U32(ctx, 31, 0x415818u);
    ctx->pc = 0x415814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415810u;
    // 0x415814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415720u, 0x415810u, 0x415818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415818u;
label_415818:
    // 0x415818: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x415818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41581c:
    // 0x41581c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x41581cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_415820:
    // 0x415820: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x415820u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_415824:
    // 0x415824: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x415824u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_415828:
    // 0x415828: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_41582c:
    if (ctx->pc == 0x41582Cu) {
        ctx->pc = 0x41582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415828u;
        // 0x41582c: 0x2539021  addu        $s2, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415830u;
        goto label_415830;
    }
    ctx->pc = 0x415828u;
    {
        const bool branch_taken_0x415828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415828u;
        // 0x41582c: 0x2539021  addu        $s2, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415828) {
            ctx->pc = 0x415800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_415800;
        }
    }
    ctx->pc = 0x415830u;
label_415830:
    // 0x415830: 0xae900000  sw          $s0, 0x0($s4)
    ctx->pc = 0x415830u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
label_415834:
    // 0x415834: 0x10000007  b           . + 4 + (0x7 << 2)
label_415838:
    if (ctx->pc == 0x415838u) {
        ctx->pc = 0x415838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415834u;
        // 0x415838: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41583Cu;
        goto label_41583c;
    }
    ctx->pc = 0x415834u;
    {
        const bool branch_taken_0x415834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x415838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415834u;
        // 0x415838: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415834) {
            ctx->pc = 0x415854u;
            goto label_415854;
        }
    }
    ctx->pc = 0x41583Cu;
label_41583c:
    // 0x41583c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x41583cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_415840:
    // 0x415840: 0x29403  sra         $s2, $v0, 16
    ctx->pc = 0x415840u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 16));
label_415844:
    // 0x415844: 0x2a420020  slti        $v0, $s2, 0x20
    ctx->pc = 0x415844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
label_415848:
    // 0x415848: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
label_41584c:
    if (ctx->pc == 0x41584Cu) {
        ctx->pc = 0x41584Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415848u;
        // 0x41584c: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415850u;
        goto label_415850;
    }
    ctx->pc = 0x415848u;
    {
        const bool branch_taken_0x415848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41584Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415848u;
        // 0x41584c: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415848) {
            ctx->pc = 0x415788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_415788;
        }
    }
    ctx->pc = 0x415850u;
label_415850:
    // 0x415850: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x415850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_415854:
    // 0x415854: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x415854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_415858:
    // 0x415858: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x415858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41585c:
    // 0x41585c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x41585cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_415860:
    // 0x415860: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x415860u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_415864:
    // 0x415864: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x415864u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_415868:
    // 0x415868: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x415868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41586c:
    // 0x41586c: 0x3e00008  jr          $ra
label_415870:
    if (ctx->pc == 0x415870u) {
        ctx->pc = 0x415870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41586Cu;
        // 0x415870: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415874u;
        goto label_415874;
    }
    ctx->pc = 0x41586Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41586Cu;
        // 0x415870: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41586Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x415874u;
label_415874:
    // 0x415874: 0x0  nop
    ctx->pc = 0x415874u;
    // NOP
    ctx->pc = 0x415878u;
}
