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

// Function: sub_0048BDB0
// Address: 0x48bdb0 - 0x48c090
void sub_0048BDB0_0x48bdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048BDB0_0x48bdb0");
#endif

    switch (ctx->pc) {
        case 0x48beb0u: goto label_48beb0;
        case 0x48beccu: goto label_48becc;
        case 0x48c058u: goto label_48c058;
        default: break;
    }

    ctx->pc = 0x48bdb0u;

    // 0x48bdb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x48bdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x48bdb4: 0x27828a14  addiu       $v0, $gp, -0x75EC
    ctx->pc = 0x48bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937108));
    // 0x48bdb8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x48bdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x48bdbc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x48bdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x48bdc0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x48bdc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x48bdc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48bdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48bdc8: 0x39c9024  and         $s2, $gp, $gp
    ctx->pc = 0x48bdc8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 28) & GPR_U64(ctx, 28));
    // 0x48bdcc: 0x8c5c0000  lw          $gp, 0x0($v0)
    ctx->pc = 0x48bdccu;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48bdd0: 0x8f8386a8  lw          $v1, -0x7958($gp)
    ctx->pc = 0x48bdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936232)));
    // 0x48bdd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48bdd8: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x48BDD8u;
    {
        const bool branch_taken_0x48bdd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x48BDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BDD8u;
        // 0x48bddc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48bdd8) {
            ctx->pc = 0x48BE18u;
            goto label_48be18;
        }
    }
    ctx->pc = 0x48BDE0u;
    // 0x48bde0: 0x93858a09  lbu         $a1, -0x75F7($gp)
    ctx->pc = 0x48bde0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937097)));
    // 0x48bde4: 0x93838680  lbu         $v1, -0x7980($gp)
    ctx->pc = 0x48bde4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936192)));
    // 0x48bde8: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x48bde8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x48bdec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x48BDECu;
    {
        const bool branch_taken_0x48bdec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BDECu;
        // 0x48bdf0: 0x2c6200ff  sltiu       $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x48bdec) {
            ctx->pc = 0x48BE14u;
            goto label_48be14;
        }
    }
    ctx->pc = 0x48BDF4u;
    // 0x48bdf4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x48BDF4u;
    {
        const bool branch_taken_0x48bdf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BDF4u;
        // 0x48bdf8: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48bdf4) {
            ctx->pc = 0x48BE00u;
            goto label_48be00;
        }
    }
    ctx->pc = 0x48BDFCu;
    // 0x48bdfc: 0xa3828a09  sb          $v0, -0x75F7($gp)
    ctx->pc = 0x48bdfcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937097), (uint8_t)GPR_U32(ctx, 2));
label_48be00:
    // 0x48be00: 0x252e024  and         $gp, $s2, $s2
    ctx->pc = 0x48be00u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 18) & GPR_U64(ctx, 18));
    // 0x48be04: 0xf  sync
    ctx->pc = 0x48be04u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x48be08: 0x42000038  ei
    ctx->pc = 0x48be08u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x48be0c: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x48BE0Cu;
    {
        const bool branch_taken_0x48be0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BE0Cu;
        // 0x48be10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48be0c) {
            ctx->pc = 0x48C078u;
            goto label_48c078;
        }
    }
    ctx->pc = 0x48BE14u;
label_48be14:
    // 0x48be14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x48be14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_48be18:
    // 0x48be18: 0x1482008f  bne         $a0, $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x48BE18u;
    {
        const bool branch_taken_0x48be18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x48be18) {
            ctx->pc = 0x48C058u;
            goto label_48c058;
        }
    }
    ctx->pc = 0x48BE20u;
    // 0x48be20: 0x9382899b  lbu         $v0, -0x7665($gp)
    ctx->pc = 0x48be20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936987)));
    // 0x48be24: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x48BE24u;
    {
        const bool branch_taken_0x48be24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BE24u;
        // 0x48be28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48be24) {
            ctx->pc = 0x48C058u;
            goto label_48c058;
        }
    }
    ctx->pc = 0x48BE2Cu;
    // 0x48be2c: 0x8f848988  lw          $a0, -0x7678($gp)
    ctx->pc = 0x48be2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936968)));
    // 0x48be30: 0x40054800  mfc0        $a1, Count
    ctx->pc = 0x48be30u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_count);
    // 0x48be34: 0xa3828a09  sb          $v0, -0x75F7($gp)
    ctx->pc = 0x48be34u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937097), (uint8_t)GPR_U32(ctx, 2));
    // 0x48be38: 0xa380899b  sb          $zero, -0x7665($gp)
    ctx->pc = 0x48be38u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936987), (uint8_t)GPR_U32(ctx, 0));
    // 0x48be3c: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x48be3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x48be40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48BE40u;
    {
        const bool branch_taken_0x48be40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BE40u;
        // 0x48be44: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48be40) {
            ctx->pc = 0x48BE54u;
            goto label_48be54;
        }
    }
    ctx->pc = 0x48BE48u;
    // 0x48be48: 0xdf838980  ld          $v1, -0x7680($gp)
    ctx->pc = 0x48be48u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936960)));
    // 0x48be4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x48BE4Cu;
    {
        const bool branch_taken_0x48be4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BE4Cu;
        // 0x48be50: 0x441023  subu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48be4c) {
            ctx->pc = 0x48BE5Cu;
            goto label_48be5c;
        }
    }
    ctx->pc = 0x48BE54u;
label_48be54:
    // 0x48be54: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x48be54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x48be58: 0xdf838980  ld          $v1, -0x7680($gp)
    ctx->pc = 0x48be58u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936960)));
label_48be5c:
    // 0x48be5c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x48be5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x48be60: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x48be60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x48be64: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x48be64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x48be68: 0xff838980  sd          $v1, -0x7680($gp)
    ctx->pc = 0x48be68u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936960), GPR_U64(ctx, 3));
    // 0x48be6c: 0xdf828980  ld          $v0, -0x7680($gp)
    ctx->pc = 0x48be6cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936960)));
    // 0x48be70: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x48be70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x48be74: 0xaf858988  sw          $a1, -0x7678($gp)
    ctx->pc = 0x48be74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936968), GPR_U32(ctx, 5));
    // 0x48be78: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x48be78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x48be7c: 0xff8286a0  sd          $v0, -0x7960($gp)
    ctx->pc = 0x48be7cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936224), GPR_U64(ctx, 2));
    // 0x48be80: 0x8f9089fc  lw          $s0, -0x7604($gp)
    ctx->pc = 0x48be80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937084)));
    // 0x48be84: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x48be84u;
    SET_GPR_U64(ctx, 2, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x48be88: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x48be88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x48be8c: 0x30510002  andi        $s1, $v0, 0x2
    ctx->pc = 0x48be8cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x48be90: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x48BE90u;
    {
        const bool branch_taken_0x48be90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BE90u;
        // 0x48be94: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48be90) {
            ctx->pc = 0x48BEB8u;
            goto label_48beb8;
        }
    }
    ctx->pc = 0x48BE98u;
    // 0x48be98: 0x9384899c  lbu         $a0, -0x7664($gp)
    ctx->pc = 0x48be98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936988)));
    // 0x48be9c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x48be9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x48bea0: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x48bea0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x48bea4: 0x24840350  addiu       $a0, $a0, 0x350
    ctx->pc = 0x48bea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 848));
    // 0x48bea8: 0xc12a9d2  jal         func_4AA748
    ctx->pc = 0x48BEA8u;
    SET_GPR_U32(ctx, 31, 0x48BEB0u);
    ctx->pc = 0x48BEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48BEA8u;
    // 0x48beac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA748u, 0x48BEA8u, 0x48BEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BEB0u;
label_48beb0:
    // 0x48beb0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x48BEB0u;
    {
        const bool branch_taken_0x48beb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BEB0u;
        // 0x48beb4: 0x9382899c  lbu         $v0, -0x7664($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936988)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48beb0) {
            ctx->pc = 0x48BED0u;
            goto label_48bed0;
        }
    }
    ctx->pc = 0x48BEB8u;
label_48beb8:
    // 0x48beb8: 0x9384899c  lbu         $a0, -0x7664($gp)
    ctx->pc = 0x48beb8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936988)));
    // 0x48bebc: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x48bebcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x48bec0: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x48bec0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x48bec4: 0xc12a9d2  jal         func_4AA748
    ctx->pc = 0x48BEC4u;
    SET_GPR_U32(ctx, 31, 0x48BECCu);
    ctx->pc = 0x48BEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48BEC4u;
    // 0x48bec8: 0x702021  addu        $a0, $v1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA748u, 0x48BEC4u, 0x48BECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BECCu;
label_48becc:
    // 0x48becc: 0x9382899c  lbu         $v0, -0x7664($gp)
    ctx->pc = 0x48beccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936988)));
label_48bed0:
    // 0x48bed0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x48BED0u;
    {
        const bool branch_taken_0x48bed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48bed0) {
            ctx->pc = 0x48BF18u;
            goto label_48bf18;
        }
    }
    ctx->pc = 0x48BED8u;
    // 0x48bed8: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x48BED8u;
    {
        const bool branch_taken_0x48bed8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BED8u;
        // 0x48bedc: 0x3c031200  lui         $v1, 0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48bed8) {
            ctx->pc = 0x48BEFCu;
            goto label_48befc;
        }
    }
    ctx->pc = 0x48BEE0u;
    // 0x48bee0: 0xde0403b0  ld          $a0, 0x3B0($s0)
    ctx->pc = 0x48bee0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 944)));
    // 0x48bee4: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x48bee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x48bee8: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x48bee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x48beec: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x48beecu;
    runtime->Store64(rdram, ctx, 0x12000070u, GPR_U64(ctx, 4));
    // 0x48bef0: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x48bef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x48bef4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x48BEF4u;
    {
        const bool branch_taken_0x48bef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BEF4u;
        // 0x48bef8: 0xde0203b8  ld          $v0, 0x3B8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48bef4) {
            ctx->pc = 0x48BF54u;
            goto label_48bf54;
        }
    }
    ctx->pc = 0x48BEFCu;
label_48befc:
    // 0x48befc: 0xde040340  ld          $a0, 0x340($s0)
    ctx->pc = 0x48befcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 832)));
    // 0x48bf00: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x48bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x48bf04: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x48bf04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x48bf08: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x48bf08u;
    runtime->Store64(rdram, ctx, 0x12000070u, GPR_U64(ctx, 4));
    // 0x48bf0c: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x48bf0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x48bf10: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x48BF10u;
    {
        const bool branch_taken_0x48bf10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BF10u;
        // 0x48bf14: 0xde020348  ld          $v0, 0x348($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48bf10) {
            ctx->pc = 0x48BF54u;
            goto label_48bf54;
        }
    }
    ctx->pc = 0x48BF18u;
label_48bf18:
    // 0x48bf18: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x48BF18u;
    {
        const bool branch_taken_0x48bf18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BF18u;
        // 0x48bf1c: 0x3c021200  lui         $v0, 0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48bf18) {
            ctx->pc = 0x48BF3Cu;
            goto label_48bf3c;
        }
    }
    ctx->pc = 0x48BF20u;
    // 0x48bf20: 0xde0403a0  ld          $a0, 0x3A0($s0)
    ctx->pc = 0x48bf20u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 928)));
    // 0x48bf24: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x48bf24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x48bf28: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x48bf28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x48bf2c: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x48bf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x48bf30: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x48bf30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x48bf34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x48BF34u;
    {
        const bool branch_taken_0x48bf34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BF34u;
        // 0x48bf38: 0xde0203a8  ld          $v0, 0x3A8($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48bf34) {
            ctx->pc = 0x48BF54u;
            goto label_48bf54;
        }
    }
    ctx->pc = 0x48BF3Cu;
label_48bf3c:
    // 0x48bf3c: 0xde040330  ld          $a0, 0x330($s0)
    ctx->pc = 0x48bf3cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x48bf40: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x48bf40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x48bf44: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x48bf44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x48bf48: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x48bf48u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x48bf4c: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x48bf4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x48bf50: 0xde020338  ld          $v0, 0x338($s0)
    ctx->pc = 0x48bf50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 824)));
label_48bf54:
    // 0x48bf54: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x48bf54u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x48bf58: 0x93828998  lbu         $v0, -0x7668($gp)
    ctx->pc = 0x48bf58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936984)));
    // 0x48bf5c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x48BF5Cu;
    {
        const bool branch_taken_0x48bf5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BF5Cu;
        // 0x48bf60: 0x9382899c  lbu         $v0, -0x7664($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936988)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48bf5c) {
            ctx->pc = 0x48BFE8u;
            goto label_48bfe8;
        }
    }
    ctx->pc = 0x48BF64u;
    // 0x48bf64: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x48BF64u;
    {
        const bool branch_taken_0x48bf64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BF64u;
        // 0x48bf68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48bf64) {
            ctx->pc = 0x48BF78u;
            goto label_48bf78;
        }
    }
    ctx->pc = 0x48BF6Cu;
    // 0x48bf6c: 0xa3808999  sb          $zero, -0x7667($gp)
    ctx->pc = 0x48bf6cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936985), (uint8_t)GPR_U32(ctx, 0));
    // 0x48bf70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x48BF70u;
    {
        const bool branch_taken_0x48bf70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BF70u;
        // 0x48bf74: 0x9382899c  lbu         $v0, -0x7664($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936988)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48bf70) {
            ctx->pc = 0x48BF80u;
            goto label_48bf80;
        }
    }
    ctx->pc = 0x48BF78u;
label_48bf78:
    // 0x48bf78: 0xa3828999  sb          $v0, -0x7667($gp)
    ctx->pc = 0x48bf78u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936985), (uint8_t)GPR_U32(ctx, 2));
    // 0x48bf7c: 0x9382899c  lbu         $v0, -0x7664($gp)
    ctx->pc = 0x48bf7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936988)));
label_48bf80:
    // 0x48bf80: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x48BF80u;
    {
        const bool branch_taken_0x48bf80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BF80u;
        // 0x48bf84: 0x3a230002  xori        $v1, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x48bf80) {
            ctx->pc = 0x48BFB8u;
            goto label_48bfb8;
        }
    }
    ctx->pc = 0x48BF88u;
    // 0x48bf88: 0x8e0501f4  lw          $a1, 0x1F4($s0)
    ctx->pc = 0x48bf88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x48bf8c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x48bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x48bf90: 0x8e040274  lw          $a0, 0x274($s0)
    ctx->pc = 0x48bf90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x48bf94: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x48bf94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x48bf98: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x48bf98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x48bf9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48bf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x48bfa0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x48bfa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x48bfa4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x48bfa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x48bfa8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x48bfa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x48bfac: 0xae0501f4  sw          $a1, 0x1F4($s0)
    ctx->pc = 0x48bfacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 5));
    // 0x48bfb0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x48BFB0u;
    {
        const bool branch_taken_0x48bfb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48BFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BFB0u;
        // 0x48bfb4: 0xae040274  sw          $a0, 0x274($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 628), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48bfb0) {
            ctx->pc = 0x48BFE4u;
            goto label_48bfe4;
        }
    }
    ctx->pc = 0x48BFB8u;
label_48bfb8:
    // 0x48bfb8: 0x8e050084  lw          $a1, 0x84($s0)
    ctx->pc = 0x48bfb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x48bfbc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x48bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x48bfc0: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x48bfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x48bfc4: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x48bfc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x48bfc8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x48bfc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x48bfcc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48bfccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x48bfd0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x48bfd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x48bfd4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x48bfd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x48bfd8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x48bfd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x48bfdc: 0xae050084  sw          $a1, 0x84($s0)
    ctx->pc = 0x48bfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 5));
    // 0x48bfe0: 0xae040104  sw          $a0, 0x104($s0)
    ctx->pc = 0x48bfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 4));
label_48bfe4:
    // 0x48bfe4: 0x9382899c  lbu         $v0, -0x7664($gp)
    ctx->pc = 0x48bfe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936988)));
label_48bfe8:
    // 0x48bfe8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x48bfe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x48bfec: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x48bfecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x48bff0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48bff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x48bff4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x48bff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x48bff8: 0x8c4303c0  lw          $v1, 0x3C0($v0)
    ctx->pc = 0x48bff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 960)));
    // 0x48bffc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x48BFFCu;
    {
        const bool branch_taken_0x48bffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48BFFCu;
        // 0x48c000: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48bffc) {
            ctx->pc = 0x48C040u;
            goto label_48c040;
        }
    }
    ctx->pc = 0x48C004u;
    // 0x48c004: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x48c004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x48c008: 0x3442a030  ori         $v0, $v0, 0xA030
    ctx->pc = 0x48c008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41008);
    // 0x48c00c: 0x3484a020  ori         $a0, $a0, 0xA020
    ctx->pc = 0x48c00cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)40992);
    // 0x48c010: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x48c010u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x48c014: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x48c014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x48c018: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x48c018u;
    runtime->Store32(rdram, ctx, 0x1000A020u, GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x48c01c: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x48c01cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x48c020: 0x24020104  addiu       $v0, $zero, 0x104
    ctx->pc = 0x48c020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x48c024: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x48c024u;
    runtime->Store32(rdram, ctx, 0x1000A000u, GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x48c028: 0xf  sync
    ctx->pc = 0x48c028u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x48c02c: 0x938289f8  lbu         $v0, -0x7608($gp)
    ctx->pc = 0x48c02cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937080)));
    // 0x48c030: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x48c030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x48c034: 0xa38289f8  sb          $v0, -0x7608($gp)
    ctx->pc = 0x48c034u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937080), (uint8_t)GPR_U32(ctx, 2));
    // 0x48c038: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x48C038u;
    {
        const bool branch_taken_0x48c038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c038) {
            ctx->pc = 0x48C058u;
            goto label_48c058;
        }
    }
    ctx->pc = 0x48C040u;
label_48c040:
    // 0x48c040: 0x8f8386a8  lw          $v1, -0x7958($gp)
    ctx->pc = 0x48c040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936232)));
    // 0x48c044: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48c044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48c048: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x48C048u;
    {
        const bool branch_taken_0x48c048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x48c048) {
            ctx->pc = 0x48C058u;
            goto label_48c058;
        }
    }
    ctx->pc = 0x48C050u;
    // 0x48c050: 0xc122dc2  jal         func_48B708
    ctx->pc = 0x48C050u;
    SET_GPR_U32(ctx, 31, 0x48C058u);
    ctx->pc = 0x48C054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48C050u;
    // 0x48c054: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B708u, 0x48C050u, 0x48C058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C058u;
label_48c058:
    // 0x48c058: 0x252e024  and         $gp, $s2, $s2
    ctx->pc = 0x48c058u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 18) & GPR_U64(ctx, 18));
    // 0x48c05c: 0x8f8386a8  lw          $v1, -0x7958($gp)
    ctx->pc = 0x48c05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936232)));
    // 0x48c060: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48c060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48c064: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48C064u;
    {
        const bool branch_taken_0x48c064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x48C068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C064u;
        // 0x48c068: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c064) {
            ctx->pc = 0x48C078u;
            goto label_48c078;
        }
    }
    ctx->pc = 0x48C06Cu;
    // 0x48c06c: 0xf  sync
    ctx->pc = 0x48c06cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x48c070: 0x42000038  ei
    ctx->pc = 0x48c070u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x48c074: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x48c074u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48c078:
    // 0x48c078: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x48c078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48c07c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x48c07cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48c080: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x48c080u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48c084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48c084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48c088: 0x3e00008  jr          $ra
    ctx->pc = 0x48C088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48C08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C088u;
        // 0x48c08c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48C088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48C090u;
}
