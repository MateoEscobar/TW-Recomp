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

// Function: sub_00331730
// Address: 0x331730 - 0x331a58
void sub_00331730_0x331730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331730_0x331730");
#endif

    switch (ctx->pc) {
        case 0x331764u: goto label_331764;
        case 0x331774u: goto label_331774;
        case 0x331780u: goto label_331780;
        case 0x3317c0u: goto label_3317c0;
        case 0x331828u: goto label_331828;
        case 0x331850u: goto label_331850;
        case 0x331890u: goto label_331890;
        case 0x3318a8u: goto label_3318a8;
        case 0x331900u: goto label_331900;
        case 0x331908u: goto label_331908;
        case 0x331924u: goto label_331924;
        case 0x33192cu: goto label_33192c;
        case 0x33193cu: goto label_33193c;
        case 0x331958u: goto label_331958;
        case 0x331968u: goto label_331968;
        case 0x331980u: goto label_331980;
        case 0x331998u: goto label_331998;
        case 0x3319c4u: goto label_3319c4;
        case 0x3319ccu: goto label_3319cc;
        case 0x3319e4u: goto label_3319e4;
        case 0x3319fcu: goto label_3319fc;
        case 0x331a08u: goto label_331a08;
        case 0x331a18u: goto label_331a18;
        case 0x331a2cu: goto label_331a2c;
        default: break;
    }

    ctx->pc = 0x331730u;

    // 0x331730: 0x27bdf840  addiu       $sp, $sp, -0x7C0
    ctx->pc = 0x331730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965312));
    // 0x331734: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x331734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331738: 0x7fb30780  sq          $s3, 0x780($sp)
    ctx->pc = 0x331738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1920), GPR_VEC(ctx, 19));
    // 0x33173c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33173cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331740: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x331740u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331744: 0x7fb20790  sq          $s2, 0x790($sp)
    ctx->pc = 0x331744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1936), GPR_VEC(ctx, 18));
    // 0x331748: 0x7fb50760  sq          $s5, 0x760($sp)
    ctx->pc = 0x331748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1888), GPR_VEC(ctx, 21));
    // 0x33174c: 0x7fb007b0  sq          $s0, 0x7B0($sp)
    ctx->pc = 0x33174cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1968), GPR_VEC(ctx, 16));
    // 0x331750: 0x7fb107a0  sq          $s1, 0x7A0($sp)
    ctx->pc = 0x331750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1952), GPR_VEC(ctx, 17));
    // 0x331754: 0x7fb40770  sq          $s4, 0x770($sp)
    ctx->pc = 0x331754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1904), GPR_VEC(ctx, 20));
    // 0x331758: 0xffbf0750  sd          $ra, 0x750($sp)
    ctx->pc = 0x331758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1872), GPR_U64(ctx, 31));
    // 0x33175c: 0xc0c9192  jal         func_324648
    ctx->pc = 0x33175Cu;
    SET_GPR_U32(ctx, 31, 0x331764u);
    ctx->pc = 0x331760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33175Cu;
    // 0x331760: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324648u, 0x33175Cu, 0x331764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331764u;
label_331764:
    // 0x331764: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x331764u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331768: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x331768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33176c: 0xc0c930c  jal         func_324C30
    ctx->pc = 0x33176Cu;
    SET_GPR_U32(ctx, 31, 0x331774u);
    ctx->pc = 0x331770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33176Cu;
    // 0x331770: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324C30u, 0x33176Cu, 0x331774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331774u;
label_331774:
    // 0x331774: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x331774u;
    {
        const bool branch_taken_0x331774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331774u;
        // 0x331778: 0x82420000  lb          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331774) {
            ctx->pc = 0x331A1Cu;
            goto label_331a1c;
        }
    }
    ctx->pc = 0x33177Cu;
    // 0x33177c: 0x0  nop
    ctx->pc = 0x33177cu;
    // NOP
label_331780:
    // 0x331780: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x331780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x331784: 0x24030025  addiu       $v1, $zero, 0x25
    ctx->pc = 0x331784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x331788: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x331788u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x33178c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33178Cu;
    {
        const bool branch_taken_0x33178c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x331790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33178Cu;
        // 0x331790: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33178c) {
            ctx->pc = 0x3317A8u;
            goto label_3317a8;
        }
    }
    ctx->pc = 0x331794u;
    // 0x331794: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x331794u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x331798: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x331798u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x33179c: 0x5444000f  bnel        $v0, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x33179Cu;
    {
        const bool branch_taken_0x33179c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x33179c) {
            ctx->pc = 0x3317A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33179Cu;
            // 0x3317a0: 0xa3a40520  sb          $a0, 0x520($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 1312), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3317DCu;
            goto label_3317dc;
        }
    }
    ctx->pc = 0x3317A4u;
    // 0x3317a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3317a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3317a8:
    // 0x3317a8: 0x27a3040c  addiu       $v1, $sp, 0x40C
    ctx->pc = 0x3317a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1036));
    // 0x3317ac: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3317acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3317b0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3317B0u;
    {
        const bool branch_taken_0x3317b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3317B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3317B0u;
        // 0x3317b4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3317b0) {
            ctx->pc = 0x3317C4u;
            goto label_3317c4;
        }
    }
    ctx->pc = 0x3317B8u;
    // 0x3317b8: 0xc0c928c  jal         func_324A30
    ctx->pc = 0x3317B8u;
    SET_GPR_U32(ctx, 31, 0x3317C0u);
    ctx->pc = 0x3317BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3317B8u;
    // 0x3317bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324A30u, 0x3317B8u, 0x3317C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3317C0u;
label_3317c0:
    // 0x3317c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3317c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3317c4:
    // 0x3317c4: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x3317c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3317c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3317c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3317cc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3317ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3317d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3317d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3317d4: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x3317D4u;
    {
        const bool branch_taken_0x3317d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3317D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3317D4u;
        // 0x3317d8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3317d4) {
            ctx->pc = 0x331A18u;
            goto label_331a18;
        }
    }
    ctx->pc = 0x3317DCu;
label_3317dc:
    // 0x3317dc: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x3317dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x3317e0: 0x2463c531  addiu       $v1, $v1, -0x3ACF
    ctx->pc = 0x3317e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952241));
    // 0x3317e4: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x3317e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3317e8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3317e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3317ec: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3317ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3317f0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3317f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3317f4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3317F4u;
    {
        const bool branch_taken_0x3317f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3317F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3317F4u;
        // 0x3317f8: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3317f4) {
            ctx->pc = 0x33181Cu;
            goto label_33181c;
        }
    }
    ctx->pc = 0x3317FCu;
    // 0x3317fc: 0x82430001  lb          $v1, 0x1($s2)
    ctx->pc = 0x3317fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x331800: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x331800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x331804: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x331804u;
    {
        const bool branch_taken_0x331804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x331804) {
            ctx->pc = 0x331808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331804u;
            // 0x331808: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331820u;
            goto label_331820;
        }
    }
    ctx->pc = 0x33180Cu;
    // 0x33180c: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x33180cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x331810: 0x26500002  addiu       $s0, $s2, 0x2
    ctx->pc = 0x331810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x331814: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x331814u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x331818: 0x2455ffd0  addiu       $s5, $v0, -0x30
    ctx->pc = 0x331818u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
label_33181c:
    // 0x33181c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33181cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_331820:
    // 0x331820: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x331820u;
    SET_GPR_U32(ctx, 31, 0x331828u);
    ctx->pc = 0x331824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331820u;
    // 0x331824: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x331820u, 0x331828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331828u;
label_331828:
    // 0x331828: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x331828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x33182c: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x33182cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
    // 0x331830: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x331830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x331834: 0x24c66138  addiu       $a2, $a2, 0x6138
    ctx->pc = 0x331834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24888));
    // 0x331838: 0xafa20410  sw          $v0, 0x410($sp)
    ctx->pc = 0x331838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1040), GPR_U32(ctx, 2));
    // 0x33183c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33183cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331840: 0xafa00414  sw          $zero, 0x414($sp)
    ctx->pc = 0x331840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1044), GPR_U32(ctx, 0));
    // 0x331844: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x331844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331848: 0xc0cc2f0  jal         func_330BC0
    ctx->pc = 0x331848u;
    SET_GPR_U32(ctx, 31, 0x331850u);
    ctx->pc = 0x33184Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331848u;
    // 0x33184c: 0x27a70410  addiu       $a3, $sp, 0x410 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330BC0u, 0x331848u, 0x331850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331850u;
label_331850:
    // 0x331850: 0x8fa3041c  lw          $v1, 0x41C($sp)
    ctx->pc = 0x331850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1052)));
    // 0x331854: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x331854u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x331858: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x331858u;
    {
        const bool branch_taken_0x331858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331858u;
        // 0x33185c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331858) {
            ctx->pc = 0x331880u;
            goto label_331880;
        }
    }
    ctx->pc = 0x331860u;
    // 0x331860: 0x8fa20424  lw          $v0, 0x424($sp)
    ctx->pc = 0x331860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1060)));
    // 0x331864: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x331864u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x331868: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x331868u;
    {
        const bool branch_taken_0x331868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331868u;
        // 0x33186c: 0x2501023  subu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331868) {
            ctx->pc = 0x331880u;
            goto label_331880;
        }
    }
    ctx->pc = 0x331870u;
    // 0x331870: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x331870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331874: 0x28420013  slti        $v0, $v0, 0x13
    ctx->pc = 0x331874u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x331878: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x331878u;
    {
        const bool branch_taken_0x331878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x331878) {
            ctx->pc = 0x33187Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331878u;
            // 0x33187c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331898u;
            goto label_331898;
        }
    }
    ctx->pc = 0x331880u;
label_331880:
    // 0x331880: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x331880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x331884: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x331884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331888: 0xc0ca46e  jal         func_3291B8
    ctx->pc = 0x331888u;
    SET_GPR_U32(ctx, 31, 0x331890u);
    ctx->pc = 0x33188Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331888u;
    // 0x33188c: 0x24a56150  addiu       $a1, $a1, 0x6150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x331888u, 0x331890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331890u;
label_331890:
    // 0x331890: 0x2508823  subu        $s1, $s2, $s0
    ctx->pc = 0x331890u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x331894: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x331894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_331898:
    // 0x331898: 0x27a40521  addiu       $a0, $sp, 0x521
    ctx->pc = 0x331898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1313));
    // 0x33189c: 0x27b00520  addiu       $s0, $sp, 0x520
    ctx->pc = 0x33189cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
    // 0x3318a0: 0xc10c4de  jal         func_431378
    ctx->pc = 0x3318A0u;
    SET_GPR_U32(ctx, 31, 0x3318A8u);
    ctx->pc = 0x3318A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3318A0u;
    // 0x3318a4: 0x26260001  addiu       $a2, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x3318A0u, 0x3318A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3318A8u;
label_3318a8:
    // 0x3318a8: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x3318a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3318ac: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x3318acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x3318b0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3318b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3318b4: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x3318b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3318b8: 0x2442ffbb  addiu       $v0, $v0, -0x45
    ctx->pc = 0x3318b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967227));
    // 0x3318bc: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3318bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3318c0: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x3318c0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x3318c4: 0x2c830034  sltiu       $v1, $a0, 0x34
    ctx->pc = 0x3318c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)52) ? 1 : 0);
    // 0x3318c8: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x3318C8u;
    {
        const bool branch_taken_0x3318c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3318CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3318C8u;
        // 0x3318cc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3318c8) {
            ctx->pc = 0x3319ECu;
            goto label_3319ec;
        }
    }
    ctx->pc = 0x3318D0u;
    // 0x3318d0: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x3318d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x3318d4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3318d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3318d8: 0x244261a0  addiu       $v0, $v0, 0x61A0
    ctx->pc = 0x3318d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24992));
    // 0x3318dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3318dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3318e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3318e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3318e4: 0x800008  jr          $a0
    ctx->pc = 0x3318E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3318ECu: goto label_3318ec;
            case 0x331910u: goto label_331910;
            case 0x331944u: goto label_331944;
            case 0x331970u: goto label_331970;
            case 0x331988u: goto label_331988;
            case 0x3319ECu: goto label_3319ec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3318E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3318ECu;
label_3318ec:
    // 0x3318ec: 0x27b00540  addiu       $s0, $sp, 0x540
    ctx->pc = 0x3318ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
    // 0x3318f0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3318f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3318f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3318f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3318f8: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x3318F8u;
    SET_GPR_U32(ctx, 31, 0x331900u);
    ctx->pc = 0x3318FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3318F8u;
    // 0x3318fc: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x3318F8u, 0x331900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331900u;
label_331900:
    // 0x331900: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x331900u;
    SET_GPR_U32(ctx, 31, 0x331908u);
    ctx->pc = 0x331904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331900u;
    // 0x331904: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x331900u, 0x331908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331908u;
label_331908:
    // 0x331908: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x331908u;
    {
        const bool branch_taken_0x331908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331908u;
        // 0x33190c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331908) {
            ctx->pc = 0x331930u;
            goto label_331930;
        }
    }
    ctx->pc = 0x331910u;
label_331910:
    // 0x331910: 0x27b00540  addiu       $s0, $sp, 0x540
    ctx->pc = 0x331910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
    // 0x331914: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x331914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331918: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x331918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33191c: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x33191Cu;
    SET_GPR_U32(ctx, 31, 0x331924u);
    ctx->pc = 0x331920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33191Cu;
    // 0x331920: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x33191Cu, 0x331924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331924u;
label_331924:
    // 0x331924: 0xc10b108  jal         func_42C420
    ctx->pc = 0x331924u;
    SET_GPR_U32(ctx, 31, 0x33192Cu);
    ctx->pc = 0x331928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331924u;
    // 0x331928: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x331924u, 0x33192Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33192Cu;
label_33192c:
    // 0x33192c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x33192cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_331930:
    // 0x331930: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x331930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331934: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x331934u;
    SET_GPR_U32(ctx, 31, 0x33193Cu);
    ctx->pc = 0x331938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331934u;
    // 0x331938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x331934u, 0x33193Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33193Cu;
label_33193c:
    // 0x33193c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x33193Cu;
    {
        const bool branch_taken_0x33193c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33193c) {
            ctx->pc = 0x331A00u;
            goto label_331a00;
        }
    }
    ctx->pc = 0x331944u;
label_331944:
    // 0x331944: 0x27b00540  addiu       $s0, $sp, 0x540
    ctx->pc = 0x331944u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
    // 0x331948: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x331948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33194c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x33194cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331950: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x331950u;
    SET_GPR_U32(ctx, 31, 0x331958u);
    ctx->pc = 0x331954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331950u;
    // 0x331954: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x331950u, 0x331958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331958u;
label_331958:
    // 0x331958: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x331958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33195c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x33195cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331960: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x331960u;
    SET_GPR_U32(ctx, 31, 0x331968u);
    ctx->pc = 0x331964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331960u;
    // 0x331964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x331960u, 0x331968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331968u;
label_331968:
    // 0x331968: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x331968u;
    {
        const bool branch_taken_0x331968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331968) {
            ctx->pc = 0x331A00u;
            goto label_331a00;
        }
    }
    ctx->pc = 0x331970u;
label_331970:
    // 0x331970: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x331970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331974: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x331974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331978: 0xc0cc55e  jal         func_331578
    ctx->pc = 0x331978u;
    SET_GPR_U32(ctx, 31, 0x331980u);
    ctx->pc = 0x33197Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331978u;
    // 0x33197c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331578u, 0x331978u, 0x331980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331980u;
label_331980:
    // 0x331980: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x331980u;
    {
        const bool branch_taken_0x331980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331980u;
        // 0x331984: 0x82420000  lb          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331980) {
            ctx->pc = 0x331A1Cu;
            goto label_331a1c;
        }
    }
    ctx->pc = 0x331988u;
label_331988:
    // 0x331988: 0x27a60740  addiu       $a2, $sp, 0x740
    ctx->pc = 0x331988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1856));
    // 0x33198c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33198cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331990: 0xc0c9192  jal         func_324648
    ctx->pc = 0x331990u;
    SET_GPR_U32(ctx, 31, 0x331998u);
    ctx->pc = 0x331994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331990u;
    // 0x331994: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324648u, 0x331990u, 0x331998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331998u;
label_331998:
    // 0x331998: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x331998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33199c: 0x8fa20424  lw          $v0, 0x424($sp)
    ctx->pc = 0x33199cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1060)));
    // 0x3319a0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3319A0u;
    {
        const bool branch_taken_0x3319a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3319A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3319A0u;
        // 0x3319a4: 0x27b00540  addiu       $s0, $sp, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3319a0) {
            ctx->pc = 0x3319D4u;
            goto label_3319d4;
        }
    }
    ctx->pc = 0x3319A8u;
    // 0x3319a8: 0x8fa20740  lw          $v0, 0x740($sp)
    ctx->pc = 0x3319a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1856)));
    // 0x3319ac: 0x2c420064  sltiu       $v0, $v0, 0x64
    ctx->pc = 0x3319acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x3319b0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3319B0u;
    {
        const bool branch_taken_0x3319b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3319B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3319B0u;
        // 0x3319b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3319b0) {
            ctx->pc = 0x3319D8u;
            goto label_3319d8;
        }
    }
    ctx->pc = 0x3319B8u;
    // 0x3319b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3319b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3319bc: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x3319BCu;
    SET_GPR_U32(ctx, 31, 0x3319C4u);
    ctx->pc = 0x3319C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3319BCu;
    // 0x3319c0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x3319BCu, 0x3319C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3319C4u;
label_3319c4:
    // 0x3319c4: 0xc0c92d8  jal         func_324B60
    ctx->pc = 0x3319C4u;
    SET_GPR_U32(ctx, 31, 0x3319CCu);
    ctx->pc = 0x3319C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3319C4u;
    // 0x3319c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324B60u, 0x3319C4u, 0x3319CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3319CCu;
label_3319cc:
    // 0x3319cc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3319CCu;
    {
        const bool branch_taken_0x3319cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3319D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3319CCu;
        // 0x3319d0: 0x82420000  lb          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3319cc) {
            ctx->pc = 0x331A1Cu;
            goto label_331a1c;
        }
    }
    ctx->pc = 0x3319D4u;
label_3319d4:
    // 0x3319d4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3319d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3319d8:
    // 0x3319d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3319d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3319dc: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x3319DCu;
    SET_GPR_U32(ctx, 31, 0x3319E4u);
    ctx->pc = 0x3319E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3319DCu;
    // 0x3319e0: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x3319DCu, 0x3319E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3319E4u;
label_3319e4:
    // 0x3319e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3319E4u;
    {
        const bool branch_taken_0x3319e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3319e4) {
            ctx->pc = 0x331A00u;
            goto label_331a00;
        }
    }
    ctx->pc = 0x3319ECu;
label_3319ec:
    // 0x3319ec: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x3319ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x3319f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3319f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3319f4: 0xc0ca46e  jal         func_3291B8
    ctx->pc = 0x3319F4u;
    SET_GPR_U32(ctx, 31, 0x3319FCu);
    ctx->pc = 0x3319F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3319F4u;
    // 0x3319f8: 0x24a56180  addiu       $a1, $a1, 0x6180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x3319F4u, 0x3319FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3319FCu;
label_3319fc:
    // 0x3319fc: 0x27b10540  addiu       $s1, $sp, 0x540
    ctx->pc = 0x3319fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
label_331a00:
    // 0x331a00: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x331A00u;
    SET_GPR_U32(ctx, 31, 0x331A08u);
    ctx->pc = 0x331A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331A00u;
    // 0x331a04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x331A00u, 0x331A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331A08u;
label_331a08:
    // 0x331a08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x331a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331a0c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x331a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331a10: 0xc0c929a  jal         func_324A68
    ctx->pc = 0x331A10u;
    SET_GPR_U32(ctx, 31, 0x331A18u);
    ctx->pc = 0x331A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331A10u;
    // 0x331a14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324A68u, 0x331A10u, 0x331A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331A18u;
label_331a18:
    // 0x331a18: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x331a18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_331a1c:
    // 0x331a1c: 0x1440ff58  bnez        $v0, . + 4 + (-0xA8 << 2)
    ctx->pc = 0x331A1Cu;
    {
        const bool branch_taken_0x331a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x331A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331A1Cu;
        // 0x331a20: 0x92430000  lbu         $v1, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331a1c) {
            ctx->pc = 0x331780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_331780;
        }
    }
    ctx->pc = 0x331A24u;
    // 0x331a24: 0xc0c92c0  jal         func_324B00
    ctx->pc = 0x331A24u;
    SET_GPR_U32(ctx, 31, 0x331A2Cu);
    ctx->pc = 0x331A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331A24u;
    // 0x331a28: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324B00u, 0x331A24u, 0x331A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331A2Cu;
label_331a2c:
    // 0x331a2c: 0x7bb007b0  lq          $s0, 0x7B0($sp)
    ctx->pc = 0x331a2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1968)));
    // 0x331a30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x331a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331a34: 0x7bb107a0  lq          $s1, 0x7A0($sp)
    ctx->pc = 0x331a34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1952)));
    // 0x331a38: 0x7bb20790  lq          $s2, 0x790($sp)
    ctx->pc = 0x331a38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1936)));
    // 0x331a3c: 0x7bb30780  lq          $s3, 0x780($sp)
    ctx->pc = 0x331a3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1920)));
    // 0x331a40: 0x7bb40770  lq          $s4, 0x770($sp)
    ctx->pc = 0x331a40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1904)));
    // 0x331a44: 0x7bb50760  lq          $s5, 0x760($sp)
    ctx->pc = 0x331a44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1888)));
    // 0x331a48: 0xdfbf0750  ld          $ra, 0x750($sp)
    ctx->pc = 0x331a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1872)));
    // 0x331a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x331A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331A4Cu;
        // 0x331a50: 0x27bd07c0  addiu       $sp, $sp, 0x7C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1984));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331A54u;
    // 0x331a54: 0x0  nop
    ctx->pc = 0x331a54u;
    // NOP
    ctx->pc = 0x331a58u;
}
