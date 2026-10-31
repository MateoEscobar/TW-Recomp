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

// Function: sub_00148920
// Address: 0x148920 - 0x148a50
void sub_00148920_0x148920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148920_0x148920");
#endif

    switch (ctx->pc) {
        case 0x148920u: goto label_148920;
        case 0x148924u: goto label_148924;
        case 0x148928u: goto label_148928;
        case 0x14892cu: goto label_14892c;
        case 0x148930u: goto label_148930;
        case 0x148934u: goto label_148934;
        case 0x148938u: goto label_148938;
        case 0x14893cu: goto label_14893c;
        case 0x148940u: goto label_148940;
        case 0x148944u: goto label_148944;
        case 0x148948u: goto label_148948;
        case 0x14894cu: goto label_14894c;
        case 0x148950u: goto label_148950;
        case 0x148954u: goto label_148954;
        case 0x148958u: goto label_148958;
        case 0x14895cu: goto label_14895c;
        case 0x148960u: goto label_148960;
        case 0x148964u: goto label_148964;
        case 0x148968u: goto label_148968;
        case 0x14896cu: goto label_14896c;
        case 0x148970u: goto label_148970;
        case 0x148974u: goto label_148974;
        case 0x148978u: goto label_148978;
        case 0x14897cu: goto label_14897c;
        case 0x148980u: goto label_148980;
        case 0x148984u: goto label_148984;
        case 0x148988u: goto label_148988;
        case 0x14898cu: goto label_14898c;
        case 0x148990u: goto label_148990;
        case 0x148994u: goto label_148994;
        case 0x148998u: goto label_148998;
        case 0x14899cu: goto label_14899c;
        case 0x1489a0u: goto label_1489a0;
        case 0x1489a4u: goto label_1489a4;
        case 0x1489a8u: goto label_1489a8;
        case 0x1489acu: goto label_1489ac;
        case 0x1489b0u: goto label_1489b0;
        case 0x1489b4u: goto label_1489b4;
        case 0x1489b8u: goto label_1489b8;
        case 0x1489bcu: goto label_1489bc;
        case 0x1489c0u: goto label_1489c0;
        case 0x1489c4u: goto label_1489c4;
        case 0x1489c8u: goto label_1489c8;
        case 0x1489ccu: goto label_1489cc;
        case 0x1489d0u: goto label_1489d0;
        case 0x1489d4u: goto label_1489d4;
        case 0x1489d8u: goto label_1489d8;
        case 0x1489dcu: goto label_1489dc;
        case 0x1489e0u: goto label_1489e0;
        case 0x1489e4u: goto label_1489e4;
        case 0x1489e8u: goto label_1489e8;
        case 0x1489ecu: goto label_1489ec;
        case 0x1489f0u: goto label_1489f0;
        case 0x1489f4u: goto label_1489f4;
        case 0x1489f8u: goto label_1489f8;
        case 0x1489fcu: goto label_1489fc;
        case 0x148a00u: goto label_148a00;
        case 0x148a04u: goto label_148a04;
        case 0x148a08u: goto label_148a08;
        case 0x148a0cu: goto label_148a0c;
        case 0x148a10u: goto label_148a10;
        case 0x148a14u: goto label_148a14;
        case 0x148a18u: goto label_148a18;
        case 0x148a1cu: goto label_148a1c;
        case 0x148a20u: goto label_148a20;
        case 0x148a24u: goto label_148a24;
        case 0x148a28u: goto label_148a28;
        case 0x148a2cu: goto label_148a2c;
        case 0x148a30u: goto label_148a30;
        case 0x148a34u: goto label_148a34;
        case 0x148a38u: goto label_148a38;
        case 0x148a3cu: goto label_148a3c;
        case 0x148a40u: goto label_148a40;
        case 0x148a44u: goto label_148a44;
        case 0x148a48u: goto label_148a48;
        case 0x148a4cu: goto label_148a4c;
        default: break;
    }

    ctx->pc = 0x148920u;

label_148920:
    // 0x148920: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x148920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_148924:
    // 0x148924: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x148924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_148928:
    // 0x148928: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x148928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_14892c:
    // 0x14892c: 0x24427e18  addiu       $v0, $v0, 0x7E18
    ctx->pc = 0x14892cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32280));
label_148930:
    // 0x148930: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x148930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_148934:
    // 0x148934: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x148934u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_148938:
    // 0x148938: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x148938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_14893c:
    // 0x14893c: 0x3c100055  lui         $s0, 0x55
    ctx->pc = 0x14893cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
label_148940:
    // 0x148940: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x148940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_148944:
    // 0x148944: 0x3c110055  lui         $s1, 0x55
    ctx->pc = 0x148944u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)85 << 16));
label_148948:
    // 0x148948: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x148948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_14894c:
    // 0x14894c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x14894cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_148950:
    // 0x148950: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x148950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_148954:
    // 0x148954: 0x26930004  addiu       $s3, $s4, 0x4
    ctx->pc = 0x148954u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_148958:
    // 0x148958: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x148958u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_14895c:
    // 0x14895c: 0x2610a1e0  addiu       $s0, $s0, -0x5E20
    ctx->pc = 0x14895cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943200));
label_148960:
    // 0x148960: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x148960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_148964:
    // 0x148964: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x148964u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_148968:
    // 0x148968: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x148968u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_14896c:
    // 0x14896c: 0x2631a1e8  addiu       $s1, $s1, -0x5E18
    ctx->pc = 0x14896cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294943208));
label_148970:
    // 0x148970: 0x8e4a27e4  lw          $t2, 0x27E4($s2)
    ctx->pc = 0x148970u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_148974:
    // 0x148974: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x148974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_148978:
    // 0x148978: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x148978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14897c:
    // 0x14897c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x14897cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_148980:
    // 0x148980: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x148980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_148984:
    // 0x148984: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x148984u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_148988:
    // 0x148988: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x148988u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_14898c:
    // 0x14898c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x14898cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_148990:
    // 0x148990: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x148990u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_148994:
    // 0x148994: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x148994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_148998:
    // 0x148998: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x148998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_14899c:
    // 0x14899c: 0x40f809  jalr        $v0
label_1489a0:
    if (ctx->pc == 0x1489A0u) {
        ctx->pc = 0x1489A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14899Cu;
        // 0x1489a0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1489A4u;
        goto label_1489a4;
    }
    ctx->pc = 0x14899Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1489A4u);
        ctx->pc = 0x1489A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14899Cu;
        // 0x1489a0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14899Cu, 0x1489A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1489A4u;
label_1489a4:
    // 0x1489a4: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x1489a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_1489a8:
    // 0x1489a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1489a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1489ac:
    // 0x1489ac: 0x8e4c27e4  lw          $t4, 0x27E4($s2)
    ctx->pc = 0x1489acu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_1489b0:
    // 0x1489b0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1489b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1489b4:
    // 0x1489b4: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x1489b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1489b8:
    // 0x1489b8: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1489b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1489bc:
    // 0x1489bc: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1489bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1489c0:
    // 0x1489c0: 0x24090021  addiu       $t1, $zero, 0x21
    ctx->pc = 0x1489c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_1489c4:
    // 0x1489c4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1489c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1489c8:
    // 0x1489c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1489c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1489cc:
    // 0x1489cc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1489ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1489d0:
    // 0x1489d0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1489d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1489d4:
    // 0x1489d4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1489d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1489d8:
    // 0x1489d8: 0x40f809  jalr        $v0
label_1489dc:
    if (ctx->pc == 0x1489DCu) {
        ctx->pc = 0x1489DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1489D8u;
        // 0x1489dc: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1489E0u;
        goto label_1489e0;
    }
    ctx->pc = 0x1489D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1489E0u);
        ctx->pc = 0x1489DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1489D8u;
        // 0x1489dc: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1489D8u, 0x1489E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1489E0u;
label_1489e0:
    // 0x1489e0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1489e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1489e4:
    // 0x1489e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1489e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1489e8:
    // 0x1489e8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_1489ec:
    if (ctx->pc == 0x1489ECu) {
        ctx->pc = 0x1489ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1489E8u;
        // 0x1489ec: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1489F0u;
        goto label_1489f0;
    }
    ctx->pc = 0x1489E8u;
    {
        const bool branch_taken_0x1489e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1489ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1489E8u;
        // 0x1489ec: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1489e8) {
            ctx->pc = 0x148A24u;
            goto label_148a24;
        }
    }
    ctx->pc = 0x1489F0u;
label_1489f0:
    // 0x1489f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1489f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1489f4:
    // 0x1489f4: 0x0  nop
    ctx->pc = 0x1489f4u;
    // NOP
label_1489f8:
    // 0x1489f8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x1489f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1489fc:
    // 0x1489fc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1489fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_148a00:
    // 0x148a00: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x148a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_148a04:
    // 0x148a04: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x148a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_148a08:
    // 0x148a08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x148a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_148a0c:
    // 0x148a0c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x148a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_148a10:
    // 0x148a10: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x148a10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_148a14:
    // 0x148a14: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x148a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_148a18:
    // 0x148a18: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x148a18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_148a1c:
    // 0x148a1c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_148a20:
    if (ctx->pc == 0x148A20u) {
        ctx->pc = 0x148A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148A1Cu;
        // 0x148a20: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148A24u;
        goto label_148a24;
    }
    ctx->pc = 0x148A1Cu;
    {
        const bool branch_taken_0x148a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148A1Cu;
        // 0x148a20: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148a1c) {
            ctx->pc = 0x1489F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1489f8;
        }
    }
    ctx->pc = 0x148A24u;
label_148a24:
    // 0x148a24: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x148a24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_148a28:
    // 0x148a28: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x148a28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
label_148a2c:
    // 0x148a2c: 0xae800018  sw          $zero, 0x18($s4)
    ctx->pc = 0x148a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 0));
label_148a30:
    // 0x148a30: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x148a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_148a34:
    // 0x148a34: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x148a34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_148a38:
    // 0x148a38: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x148a38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_148a3c:
    // 0x148a3c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x148a3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_148a40:
    // 0x148a40: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x148a40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_148a44:
    // 0x148a44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x148a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_148a48:
    // 0x148a48: 0x3e00008  jr          $ra
label_148a4c:
    if (ctx->pc == 0x148A4Cu) {
        ctx->pc = 0x148A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148A48u;
        // 0x148a4c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148A50u;
        goto label_fallthrough_0x148a48;
    }
    ctx->pc = 0x148A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148A48u;
        // 0x148a4c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x148a48:
    ctx->pc = 0x148A50u;
}
