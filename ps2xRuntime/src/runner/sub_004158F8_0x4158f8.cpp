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

// Function: sub_004158F8
// Address: 0x4158f8 - 0x415a38
void sub_004158F8_0x4158f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004158F8_0x4158f8");
#endif

    switch (ctx->pc) {
        case 0x4158f8u: goto label_4158f8;
        case 0x4158fcu: goto label_4158fc;
        case 0x415900u: goto label_415900;
        case 0x415904u: goto label_415904;
        case 0x415908u: goto label_415908;
        case 0x41590cu: goto label_41590c;
        case 0x415910u: goto label_415910;
        case 0x415914u: goto label_415914;
        case 0x415918u: goto label_415918;
        case 0x41591cu: goto label_41591c;
        case 0x415920u: goto label_415920;
        case 0x415924u: goto label_415924;
        case 0x415928u: goto label_415928;
        case 0x41592cu: goto label_41592c;
        case 0x415930u: goto label_415930;
        case 0x415934u: goto label_415934;
        case 0x415938u: goto label_415938;
        case 0x41593cu: goto label_41593c;
        case 0x415940u: goto label_415940;
        case 0x415944u: goto label_415944;
        case 0x415948u: goto label_415948;
        case 0x41594cu: goto label_41594c;
        case 0x415950u: goto label_415950;
        case 0x415954u: goto label_415954;
        case 0x415958u: goto label_415958;
        case 0x41595cu: goto label_41595c;
        case 0x415960u: goto label_415960;
        case 0x415964u: goto label_415964;
        case 0x415968u: goto label_415968;
        case 0x41596cu: goto label_41596c;
        case 0x415970u: goto label_415970;
        case 0x415974u: goto label_415974;
        case 0x415978u: goto label_415978;
        case 0x41597cu: goto label_41597c;
        case 0x415980u: goto label_415980;
        case 0x415984u: goto label_415984;
        case 0x415988u: goto label_415988;
        case 0x41598cu: goto label_41598c;
        case 0x415990u: goto label_415990;
        case 0x415994u: goto label_415994;
        case 0x415998u: goto label_415998;
        case 0x41599cu: goto label_41599c;
        case 0x4159a0u: goto label_4159a0;
        case 0x4159a4u: goto label_4159a4;
        case 0x4159a8u: goto label_4159a8;
        case 0x4159acu: goto label_4159ac;
        case 0x4159b0u: goto label_4159b0;
        case 0x4159b4u: goto label_4159b4;
        case 0x4159b8u: goto label_4159b8;
        case 0x4159bcu: goto label_4159bc;
        case 0x4159c0u: goto label_4159c0;
        case 0x4159c4u: goto label_4159c4;
        case 0x4159c8u: goto label_4159c8;
        case 0x4159ccu: goto label_4159cc;
        case 0x4159d0u: goto label_4159d0;
        case 0x4159d4u: goto label_4159d4;
        case 0x4159d8u: goto label_4159d8;
        case 0x4159dcu: goto label_4159dc;
        case 0x4159e0u: goto label_4159e0;
        case 0x4159e4u: goto label_4159e4;
        case 0x4159e8u: goto label_4159e8;
        case 0x4159ecu: goto label_4159ec;
        case 0x4159f0u: goto label_4159f0;
        case 0x4159f4u: goto label_4159f4;
        case 0x4159f8u: goto label_4159f8;
        case 0x4159fcu: goto label_4159fc;
        case 0x415a00u: goto label_415a00;
        case 0x415a04u: goto label_415a04;
        case 0x415a08u: goto label_415a08;
        case 0x415a0cu: goto label_415a0c;
        case 0x415a10u: goto label_415a10;
        case 0x415a14u: goto label_415a14;
        case 0x415a18u: goto label_415a18;
        case 0x415a1cu: goto label_415a1c;
        case 0x415a20u: goto label_415a20;
        case 0x415a24u: goto label_415a24;
        case 0x415a28u: goto label_415a28;
        case 0x415a2cu: goto label_415a2c;
        case 0x415a30u: goto label_415a30;
        case 0x415a34u: goto label_415a34;
        default: break;
    }

    ctx->pc = 0x4158f8u;

label_4158f8:
    // 0x4158f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4158f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4158fc:
    // 0x4158fc: 0x248c0002  addiu       $t4, $a0, 0x2
    ctx->pc = 0x4158fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_415900:
    // 0x415900: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x415900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_415904:
    // 0x415904: 0x240600f0  addiu       $a2, $zero, 0xF0
    ctx->pc = 0x415904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_415908:
    // 0x415908: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x415908u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_41590c:
    // 0x41590c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x41590cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_415910:
    // 0x415910: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x415910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_415914:
    // 0x415914: 0x1860018  mult        $zero, $t4, $a2
    ctx->pc = 0x415914u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_415918:
    // 0x415918: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x415918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41591c:
    // 0x41591c: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x41591cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_415920:
    // 0x415920: 0x8e0827e4  lw          $t0, 0x27E4($s0)
    ctx->pc = 0x415920u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_415924:
    // 0x415924: 0x3c110059  lui         $s1, 0x59
    ctx->pc = 0x415924u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
label_415928:
    // 0x415928: 0x26319508  addiu       $s1, $s1, -0x6AF8
    ctx->pc = 0x415928u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294939912));
label_41592c:
    // 0x41592c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x41592cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_415930:
    // 0x415930: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x415930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_415934:
    // 0x415934: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x415934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_415938:
    // 0x415938: 0x3012  mflo        $a2
    ctx->pc = 0x415938u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_41593c:
    // 0x41593c: 0x24a594f8  addiu       $a1, $a1, -0x6B08
    ctx->pc = 0x41593cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939896));
label_415940:
    // 0x415940: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x415940u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_415944:
    // 0x415944: 0x24090148  addiu       $t1, $zero, 0x148
    ctx->pc = 0x415944u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
label_415948:
    // 0x415948: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x415948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_41594c:
    // 0x41594c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x41594cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_415950:
    // 0x415950: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x415950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_415954:
    // 0x415954: 0xace04858  sw          $zero, 0x4858($a3)
    ctx->pc = 0x415954u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 18520), GPR_U32(ctx, 0));
label_415958:
    // 0x415958: 0xae4c4854  sw          $t4, 0x4854($s2)
    ctx->pc = 0x415958u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 18516), GPR_U32(ctx, 12));
label_41595c:
    // 0x41595c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x41595cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_415960:
    // 0x415960: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x415960u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_415964:
    // 0x415964: 0x40f809  jalr        $v0
label_415968:
    if (ctx->pc == 0x415968u) {
        ctx->pc = 0x415968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415964u;
        // 0x415968: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41596Cu;
        goto label_41596c;
    }
    ctx->pc = 0x415964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41596Cu);
        ctx->pc = 0x415968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415964u;
        // 0x415968: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415964u, 0x41596Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41596Cu;
label_41596c:
    // 0x41596c: 0x8e0927e4  lw          $t1, 0x27E4($s0)
    ctx->pc = 0x41596cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_415970:
    // 0x415970: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x415970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_415974:
    // 0x415974: 0x8e504854  lw          $s0, 0x4854($s2)
    ctx->pc = 0x415974u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18516)));
label_415978:
    // 0x415978: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x415978u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_41597c:
    // 0x41597c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x41597cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_415980:
    // 0x415980: 0x24a59538  addiu       $a1, $a1, -0x6AC8
    ctx->pc = 0x415980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939960));
label_415984:
    // 0x415984: 0xac82485c  sw          $v0, 0x485C($a0)
    ctx->pc = 0x415984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 18524), GPR_U32(ctx, 2));
label_415988:
    // 0x415988: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x415988u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_41598c:
    // 0x41598c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x41598cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_415990:
    // 0x415990: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x415990u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_415994:
    // 0x415994: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x415994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_415998:
    // 0x415998: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x415998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41599c:
    // 0x41599c: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x41599cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_4159a0:
    // 0x4159a0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4159a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4159a4:
    // 0x4159a4: 0x2409014e  addiu       $t1, $zero, 0x14E
    ctx->pc = 0x4159a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
label_4159a8:
    // 0x4159a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4159a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4159ac:
    // 0x4159ac: 0x40f809  jalr        $v0
label_4159b0:
    if (ctx->pc == 0x4159B0u) {
        ctx->pc = 0x4159B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4159ACu;
        // 0x4159b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4159B4u;
        goto label_4159b4;
    }
    ctx->pc = 0x4159ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4159B4u);
        ctx->pc = 0x4159B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4159ACu;
        // 0x4159b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4159ACu, 0x4159B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4159B4u;
label_4159b4:
    // 0x4159b4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x4159b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_4159b8:
    // 0x4159b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4159b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4159bc:
    // 0x4159bc: 0xac624860  sw          $v0, 0x4860($v1)
    ctx->pc = 0x4159bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18528), GPR_U32(ctx, 2));
label_4159c0:
    // 0x4159c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4159c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4159c4:
    // 0x4159c4: 0xc10c1fa  jal         func_4307E8
label_4159c8:
    if (ctx->pc == 0x4159C8u) {
        ctx->pc = 0x4159C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4159C4u;
        // 0x4159c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4159CCu;
        goto label_4159cc;
    }
    ctx->pc = 0x4159C4u;
    SET_GPR_U32(ctx, 31, 0x4159CCu);
    ctx->pc = 0x4159C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4159C4u;
    // 0x4159c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x4159C4u, 0x4159CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4159CCu;
label_4159cc:
    // 0x4159cc: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x4159ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_4159d0:
    // 0x4159d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4159d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4159d4:
    // 0x4159d4: 0x2463d870  addiu       $v1, $v1, -0x2790
    ctx->pc = 0x4159d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957168));
label_4159d8:
    // 0x4159d8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4159d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_4159dc:
    // 0x4159dc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4159dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4159e0:
    // 0x4159e0: 0x2c820020  sltiu       $v0, $a0, 0x20
    ctx->pc = 0x4159e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_4159e4:
    // 0x4159e4: 0x0  nop
    ctx->pc = 0x4159e4u;
    // NOP
label_4159e8:
    // 0x4159e8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_4159ec:
    if (ctx->pc == 0x4159ECu) {
        ctx->pc = 0x4159ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4159E8u;
        // 0x4159ec: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4159F0u;
        goto label_4159f0;
    }
    ctx->pc = 0x4159E8u;
    {
        const bool branch_taken_0x4159e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4159ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4159E8u;
        // 0x4159ec: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4159e8) {
            ctx->pc = 0x4159D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4159d8;
        }
    }
    ctx->pc = 0x4159F0u;
label_4159f0:
    // 0x4159f0: 0xc105b18  jal         func_416C60
label_4159f4:
    if (ctx->pc == 0x4159F4u) {
        ctx->pc = 0x4159F8u;
        goto label_4159f8;
    }
    ctx->pc = 0x4159F0u;
    SET_GPR_U32(ctx, 31, 0x4159F8u);
    ctx->pc = 0x416C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416C60u, 0x4159F0u, 0x4159F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4159F8u;
label_4159f8:
    // 0x4159f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4159f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4159fc:
    // 0x4159fc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x4159fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_415a00:
    // 0x415a00: 0x8c45bd30  lw          $a1, -0x42D0($v0)
    ctx->pc = 0x415a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_415a04:
    // 0x415a04: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x415a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_415a08:
    // 0x415a08: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x415a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_415a0c:
    // 0x415a0c: 0xac45d8f0  sw          $a1, -0x2710($v0)
    ctx->pc = 0x415a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957296), GPR_U32(ctx, 5));
label_415a10:
    // 0x415a10: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x415a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_415a14:
    // 0x415a14: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x415a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_415a18:
    // 0x415a18: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x415a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_415a1c:
    // 0x415a1c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x415a1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_415a20:
    // 0x415a20: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x415a20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_415a24:
    // 0x415a24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x415a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_415a28:
    // 0x415a28: 0xac43484c  sw          $v1, 0x484C($v0)
    ctx->pc = 0x415a28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18508), GPR_U32(ctx, 3));
label_415a2c:
    // 0x415a2c: 0x3e00008  jr          $ra
label_415a30:
    if (ctx->pc == 0x415A30u) {
        ctx->pc = 0x415A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415A2Cu;
        // 0x415a30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415A34u;
        goto label_415a34;
    }
    ctx->pc = 0x415A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415A2Cu;
        // 0x415a30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x415A34u;
label_415a34:
    // 0x415a34: 0x0  nop
    ctx->pc = 0x415a34u;
    // NOP
    ctx->pc = 0x415a38u;
}
