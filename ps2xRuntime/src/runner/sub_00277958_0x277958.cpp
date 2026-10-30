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

// Function: sub_00277958
// Address: 0x277958 - 0x277b20
void sub_00277958_0x277958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277958_0x277958");
#endif

    switch (ctx->pc) {
        case 0x277958u: goto label_277958;
        case 0x27795cu: goto label_27795c;
        case 0x277960u: goto label_277960;
        case 0x277964u: goto label_277964;
        case 0x277968u: goto label_277968;
        case 0x27796cu: goto label_27796c;
        case 0x277970u: goto label_277970;
        case 0x277974u: goto label_277974;
        case 0x277978u: goto label_277978;
        case 0x27797cu: goto label_27797c;
        case 0x277980u: goto label_277980;
        case 0x277984u: goto label_277984;
        case 0x277988u: goto label_277988;
        case 0x27798cu: goto label_27798c;
        case 0x277990u: goto label_277990;
        case 0x277994u: goto label_277994;
        case 0x277998u: goto label_277998;
        case 0x27799cu: goto label_27799c;
        case 0x2779a0u: goto label_2779a0;
        case 0x2779a4u: goto label_2779a4;
        case 0x2779a8u: goto label_2779a8;
        case 0x2779acu: goto label_2779ac;
        case 0x2779b0u: goto label_2779b0;
        case 0x2779b4u: goto label_2779b4;
        case 0x2779b8u: goto label_2779b8;
        case 0x2779bcu: goto label_2779bc;
        case 0x2779c0u: goto label_2779c0;
        case 0x2779c4u: goto label_2779c4;
        case 0x2779c8u: goto label_2779c8;
        case 0x2779ccu: goto label_2779cc;
        case 0x2779d0u: goto label_2779d0;
        case 0x2779d4u: goto label_2779d4;
        case 0x2779d8u: goto label_2779d8;
        case 0x2779dcu: goto label_2779dc;
        case 0x2779e0u: goto label_2779e0;
        case 0x2779e4u: goto label_2779e4;
        case 0x2779e8u: goto label_2779e8;
        case 0x2779ecu: goto label_2779ec;
        case 0x2779f0u: goto label_2779f0;
        case 0x2779f4u: goto label_2779f4;
        case 0x2779f8u: goto label_2779f8;
        case 0x2779fcu: goto label_2779fc;
        case 0x277a00u: goto label_277a00;
        case 0x277a04u: goto label_277a04;
        case 0x277a08u: goto label_277a08;
        case 0x277a0cu: goto label_277a0c;
        case 0x277a10u: goto label_277a10;
        case 0x277a14u: goto label_277a14;
        case 0x277a18u: goto label_277a18;
        case 0x277a1cu: goto label_277a1c;
        case 0x277a20u: goto label_277a20;
        case 0x277a24u: goto label_277a24;
        case 0x277a28u: goto label_277a28;
        case 0x277a2cu: goto label_277a2c;
        case 0x277a30u: goto label_277a30;
        case 0x277a34u: goto label_277a34;
        case 0x277a38u: goto label_277a38;
        case 0x277a3cu: goto label_277a3c;
        case 0x277a40u: goto label_277a40;
        case 0x277a44u: goto label_277a44;
        case 0x277a48u: goto label_277a48;
        case 0x277a4cu: goto label_277a4c;
        case 0x277a50u: goto label_277a50;
        case 0x277a54u: goto label_277a54;
        case 0x277a58u: goto label_277a58;
        case 0x277a5cu: goto label_277a5c;
        case 0x277a60u: goto label_277a60;
        case 0x277a64u: goto label_277a64;
        case 0x277a68u: goto label_277a68;
        case 0x277a6cu: goto label_277a6c;
        case 0x277a70u: goto label_277a70;
        case 0x277a74u: goto label_277a74;
        case 0x277a78u: goto label_277a78;
        case 0x277a7cu: goto label_277a7c;
        case 0x277a80u: goto label_277a80;
        case 0x277a84u: goto label_277a84;
        case 0x277a88u: goto label_277a88;
        case 0x277a8cu: goto label_277a8c;
        case 0x277a90u: goto label_277a90;
        case 0x277a94u: goto label_277a94;
        case 0x277a98u: goto label_277a98;
        case 0x277a9cu: goto label_277a9c;
        case 0x277aa0u: goto label_277aa0;
        case 0x277aa4u: goto label_277aa4;
        case 0x277aa8u: goto label_277aa8;
        case 0x277aacu: goto label_277aac;
        case 0x277ab0u: goto label_277ab0;
        case 0x277ab4u: goto label_277ab4;
        case 0x277ab8u: goto label_277ab8;
        case 0x277abcu: goto label_277abc;
        case 0x277ac0u: goto label_277ac0;
        case 0x277ac4u: goto label_277ac4;
        case 0x277ac8u: goto label_277ac8;
        case 0x277accu: goto label_277acc;
        case 0x277ad0u: goto label_277ad0;
        case 0x277ad4u: goto label_277ad4;
        case 0x277ad8u: goto label_277ad8;
        case 0x277adcu: goto label_277adc;
        case 0x277ae0u: goto label_277ae0;
        case 0x277ae4u: goto label_277ae4;
        case 0x277ae8u: goto label_277ae8;
        case 0x277aecu: goto label_277aec;
        case 0x277af0u: goto label_277af0;
        case 0x277af4u: goto label_277af4;
        case 0x277af8u: goto label_277af8;
        case 0x277afcu: goto label_277afc;
        case 0x277b00u: goto label_277b00;
        case 0x277b04u: goto label_277b04;
        case 0x277b08u: goto label_277b08;
        case 0x277b0cu: goto label_277b0c;
        case 0x277b10u: goto label_277b10;
        case 0x277b14u: goto label_277b14;
        case 0x277b18u: goto label_277b18;
        case 0x277b1cu: goto label_277b1c;
        default: break;
    }

    ctx->pc = 0x277958u;

label_277958:
    // 0x277958: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x277958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_27795c:
    // 0x27795c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x27795cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_277960:
    // 0x277960: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x277960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_277964:
    // 0x277964: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x277964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_277968:
    // 0x277968: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x277968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27796c:
    // 0x27796c: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x27796cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_277970:
    // 0x277970: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x277970u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_277974:
    // 0x277974: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x277974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_277978:
    // 0x277978: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x277978u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_27797c:
    // 0x27797c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x27797cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_277980:
    // 0x277980: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x277980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_277984:
    // 0x277984: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x277984u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_277988:
    // 0x277988: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x277988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_27798c:
    // 0x27798c: 0x40f809  jalr        $v0
label_277990:
    if (ctx->pc == 0x277990u) {
        ctx->pc = 0x277990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27798Cu;
        // 0x277990: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277994u;
        goto label_277994;
    }
    ctx->pc = 0x27798Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x277994u);
        ctx->pc = 0x277990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27798Cu;
        // 0x277990: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27798Cu, 0x277994u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x277994u;
label_277994:
    // 0x277994: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x277994u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_277998:
    // 0x277998: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x277998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_27799c:
    // 0x27799c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x27799cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2779a0:
    // 0x2779a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2779a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2779a4:
    // 0x2779a4: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2779a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_2779a8:
    // 0x2779a8: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2779a8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2779ac:
    // 0x2779ac: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2779acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2779b0:
    // 0x2779b0: 0x60f809  jalr        $v1
label_2779b4:
    if (ctx->pc == 0x2779B4u) {
        ctx->pc = 0x2779B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2779B0u;
        // 0x2779b4: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2779B8u;
        goto label_2779b8;
    }
    ctx->pc = 0x2779B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2779B8u);
        ctx->pc = 0x2779B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2779B0u;
        // 0x2779b4: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2779B0u, 0x2779B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2779B8u;
label_2779b8:
    // 0x2779b8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2779b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2779bc:
    // 0x2779bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2779bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2779c0:
    // 0x2779c0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2779c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2779c4:
    // 0x2779c4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2779c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2779c8:
    // 0x2779c8: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2779c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2779cc:
    // 0x2779cc: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2779ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2779d0:
    // 0x2779d0: 0x40f809  jalr        $v0
label_2779d4:
    if (ctx->pc == 0x2779D4u) {
        ctx->pc = 0x2779D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2779D0u;
        // 0x2779d4: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2779D8u;
        goto label_2779d8;
    }
    ctx->pc = 0x2779D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2779D8u);
        ctx->pc = 0x2779D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2779D0u;
        // 0x2779d4: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2779D0u, 0x2779D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2779D8u;
label_2779d8:
    // 0x2779d8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2779d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2779dc:
    // 0x2779dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2779dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2779e0:
    // 0x2779e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2779e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2779e4:
    // 0x2779e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2779e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2779e8:
    // 0x2779e8: 0xc095106  jal         func_254418
label_2779ec:
    if (ctx->pc == 0x2779ECu) {
        ctx->pc = 0x2779ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2779E8u;
        // 0x2779ec: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2779F0u;
        goto label_2779f0;
    }
    ctx->pc = 0x2779E8u;
    SET_GPR_U32(ctx, 31, 0x2779F0u);
    ctx->pc = 0x2779ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2779E8u;
    // 0x2779ec: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254418u, 0x2779E8u, 0x2779F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2779F0u;
label_2779f0:
    // 0x2779f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2779f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2779f4:
    // 0x2779f4: 0xc095128  jal         func_2544A0
label_2779f8:
    if (ctx->pc == 0x2779F8u) {
        ctx->pc = 0x2779F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2779F4u;
        // 0x2779f8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2779FCu;
        goto label_2779fc;
    }
    ctx->pc = 0x2779F4u;
    SET_GPR_U32(ctx, 31, 0x2779FCu);
    ctx->pc = 0x2779F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2779F4u;
    // 0x2779f8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x2779F4u, 0x2779FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2779FCu;
label_2779fc:
    // 0x2779fc: 0x7ba60000  lq          $a2, 0x0($sp)
    ctx->pc = 0x2779fcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_277a00:
    // 0x277a00: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x277a00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_277a04:
    // 0x277a04: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x277a04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_277a08:
    // 0x277a08: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x277a08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_277a0c:
    // 0x277a0c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x277a0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_277a10:
    // 0x277a10: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x277a10u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_277a14:
    // 0x277a14: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x277a14u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_277a18:
    // 0x277a18: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x277a18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_277a1c:
    // 0x277a1c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x277a1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_277a20:
    // 0x277a20: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x277a20u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_277a24:
    // 0x277a24: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x277a24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_277a28:
    // 0x277a28: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x277a28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_277a2c:
    // 0x277a2c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x277a2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_277a30:
    // 0x277a30: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x277a30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_277a34:
    // 0x277a34: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x277a34u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_277a38:
    // 0x277a38: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x277a38u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_277a3c:
    // 0x277a3c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x277a3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_277a40:
    // 0x277a40: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x277a40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_277a44:
    // 0x277a44: 0x48262800  qmfc2.ni    $a2, $vf5
    ctx->pc = 0x277a44u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[5]));
label_277a48:
    // 0x277a48: 0x86450092  lh          $a1, 0x92($s2)
    ctx->pc = 0x277a48u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_277a4c:
    // 0x277a4c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x277a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_277a50:
    // 0x277a50: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x277a50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_277a54:
    // 0x277a54: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x277a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_277a58:
    // 0x277a58: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x277a58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_277a5c:
    // 0x277a5c: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x277a5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_277a60:
    // 0x277a60: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x277a60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_277a64:
    // 0x277a64: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x277a64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_277a68:
    // 0x277a68: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x277a68u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
label_277a6c:
    // 0x277a6c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x277a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_277a70:
    // 0x277a70: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x277a70u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_277a74:
    // 0x277a74: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x277a74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_277a78:
    // 0x277a78: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x277a78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_277a7c:
    // 0x277a7c: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x277a7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_277a80:
    // 0x277a80: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x277a80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_277a84:
    // 0x277a84: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x277a84u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_277a88:
    // 0x277a88: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x277a88u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_277a8c:
    // 0x277a8c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x277a8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_277a90:
    // 0x277a90: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x277a90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_277a94:
    // 0x277a94: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x277a94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_277a98:
    // 0x277a98: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x277a98u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_277a9c:
    // 0x277a9c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x277a9cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_277aa0:
    // 0x277aa0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x277aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_277aa4:
    // 0x277aa4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x277aa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_277aa8:
    // 0x277aa8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x277aa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_277aac:
    // 0x277aac: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x277aacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_277ab0:
    // 0x277ab0: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x277ab0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_277ab4:
    // 0x277ab4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x277ab4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_277ab8:
    // 0x277ab8: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x277ab8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_277abc:
    // 0x277abc: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x277abcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_277ac0:
    // 0x277ac0: 0x4a0003bf  vwaitq
    ctx->pc = 0x277ac0u;
    // VWAITQ (Q already resolved in this runtime)
label_277ac4:
    // 0x277ac4: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x277ac4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_277ac8:
    // 0x277ac8: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x277ac8u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_277acc:
    // 0x277acc: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x277accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
label_277ad0:
    // 0x277ad0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x277ad0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277ad4:
    // 0x277ad4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x277ad4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_277ad8:
    // 0x277ad8: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x277ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_277adc:
    // 0x277adc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x277adcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277ae0:
    // 0x277ae0: 0x7fa40060  sq          $a0, 0x60($sp)
    ctx->pc = 0x277ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
label_277ae4:
    // 0x277ae4: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x277ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
label_277ae8:
    // 0x277ae8: 0x7fa70050  sq          $a3, 0x50($sp)
    ctx->pc = 0x277ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 7));
label_277aec:
    // 0x277aec: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x277aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
label_277af0:
    // 0x277af0: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x277af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_277af4:
    // 0x277af4: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x277af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_277af8:
    // 0x277af8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_277afc:
    if (ctx->pc == 0x277AFCu) {
        ctx->pc = 0x277AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277AF8u;
        // 0x277afc: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277B00u;
        goto label_277b00;
    }
    ctx->pc = 0x277AF8u;
    {
        const bool branch_taken_0x277af8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x277AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277AF8u;
        // 0x277afc: 0x7fa30060  sq          $v1, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277af8) {
            ctx->pc = 0x277B04u;
            goto label_277b04;
        }
    }
    ctx->pc = 0x277B00u;
label_277b00:
    // 0x277b00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x277b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_277b04:
    // 0x277b04: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x277b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_277b08:
    // 0x277b08: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x277b08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_277b0c:
    // 0x277b0c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x277b0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_277b10:
    // 0x277b10: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x277b10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_277b14:
    // 0x277b14: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x277b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_277b18:
    // 0x277b18: 0x3e00008  jr          $ra
label_277b1c:
    if (ctx->pc == 0x277B1Cu) {
        ctx->pc = 0x277B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B18u;
        // 0x277b1c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277B20u;
        goto label_fallthrough_0x277b18;
    }
    ctx->pc = 0x277B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B18u;
        // 0x277b1c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x277b18:
    ctx->pc = 0x277B20u;
}
