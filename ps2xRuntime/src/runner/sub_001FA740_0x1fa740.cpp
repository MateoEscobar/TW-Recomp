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

// Function: sub_001FA740
// Address: 0x1fa740 - 0x1fa9b0
void sub_001FA740_0x1fa740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA740_0x1fa740");
#endif

    switch (ctx->pc) {
        case 0x1fa740u: goto label_1fa740;
        case 0x1fa744u: goto label_1fa744;
        case 0x1fa748u: goto label_1fa748;
        case 0x1fa74cu: goto label_1fa74c;
        case 0x1fa750u: goto label_1fa750;
        case 0x1fa754u: goto label_1fa754;
        case 0x1fa758u: goto label_1fa758;
        case 0x1fa75cu: goto label_1fa75c;
        case 0x1fa760u: goto label_1fa760;
        case 0x1fa764u: goto label_1fa764;
        case 0x1fa768u: goto label_1fa768;
        case 0x1fa76cu: goto label_1fa76c;
        case 0x1fa770u: goto label_1fa770;
        case 0x1fa774u: goto label_1fa774;
        case 0x1fa778u: goto label_1fa778;
        case 0x1fa77cu: goto label_1fa77c;
        case 0x1fa780u: goto label_1fa780;
        case 0x1fa784u: goto label_1fa784;
        case 0x1fa788u: goto label_1fa788;
        case 0x1fa78cu: goto label_1fa78c;
        case 0x1fa790u: goto label_1fa790;
        case 0x1fa794u: goto label_1fa794;
        case 0x1fa798u: goto label_1fa798;
        case 0x1fa79cu: goto label_1fa79c;
        case 0x1fa7a0u: goto label_1fa7a0;
        case 0x1fa7a4u: goto label_1fa7a4;
        case 0x1fa7a8u: goto label_1fa7a8;
        case 0x1fa7acu: goto label_1fa7ac;
        case 0x1fa7b0u: goto label_1fa7b0;
        case 0x1fa7b4u: goto label_1fa7b4;
        case 0x1fa7b8u: goto label_1fa7b8;
        case 0x1fa7bcu: goto label_1fa7bc;
        case 0x1fa7c0u: goto label_1fa7c0;
        case 0x1fa7c4u: goto label_1fa7c4;
        case 0x1fa7c8u: goto label_1fa7c8;
        case 0x1fa7ccu: goto label_1fa7cc;
        case 0x1fa7d0u: goto label_1fa7d0;
        case 0x1fa7d4u: goto label_1fa7d4;
        case 0x1fa7d8u: goto label_1fa7d8;
        case 0x1fa7dcu: goto label_1fa7dc;
        case 0x1fa7e0u: goto label_1fa7e0;
        case 0x1fa7e4u: goto label_1fa7e4;
        case 0x1fa7e8u: goto label_1fa7e8;
        case 0x1fa7ecu: goto label_1fa7ec;
        case 0x1fa7f0u: goto label_1fa7f0;
        case 0x1fa7f4u: goto label_1fa7f4;
        case 0x1fa7f8u: goto label_1fa7f8;
        case 0x1fa7fcu: goto label_1fa7fc;
        case 0x1fa800u: goto label_1fa800;
        case 0x1fa804u: goto label_1fa804;
        case 0x1fa808u: goto label_1fa808;
        case 0x1fa80cu: goto label_1fa80c;
        case 0x1fa810u: goto label_1fa810;
        case 0x1fa814u: goto label_1fa814;
        case 0x1fa818u: goto label_1fa818;
        case 0x1fa81cu: goto label_1fa81c;
        case 0x1fa820u: goto label_1fa820;
        case 0x1fa824u: goto label_1fa824;
        case 0x1fa828u: goto label_1fa828;
        case 0x1fa82cu: goto label_1fa82c;
        case 0x1fa830u: goto label_1fa830;
        case 0x1fa834u: goto label_1fa834;
        case 0x1fa838u: goto label_1fa838;
        case 0x1fa83cu: goto label_1fa83c;
        case 0x1fa840u: goto label_1fa840;
        case 0x1fa844u: goto label_1fa844;
        case 0x1fa848u: goto label_1fa848;
        case 0x1fa84cu: goto label_1fa84c;
        case 0x1fa850u: goto label_1fa850;
        case 0x1fa854u: goto label_1fa854;
        case 0x1fa858u: goto label_1fa858;
        case 0x1fa85cu: goto label_1fa85c;
        case 0x1fa860u: goto label_1fa860;
        case 0x1fa864u: goto label_1fa864;
        case 0x1fa868u: goto label_1fa868;
        case 0x1fa86cu: goto label_1fa86c;
        case 0x1fa870u: goto label_1fa870;
        case 0x1fa874u: goto label_1fa874;
        case 0x1fa878u: goto label_1fa878;
        case 0x1fa87cu: goto label_1fa87c;
        case 0x1fa880u: goto label_1fa880;
        case 0x1fa884u: goto label_1fa884;
        case 0x1fa888u: goto label_1fa888;
        case 0x1fa88cu: goto label_1fa88c;
        case 0x1fa890u: goto label_1fa890;
        case 0x1fa894u: goto label_1fa894;
        case 0x1fa898u: goto label_1fa898;
        case 0x1fa89cu: goto label_1fa89c;
        case 0x1fa8a0u: goto label_1fa8a0;
        case 0x1fa8a4u: goto label_1fa8a4;
        case 0x1fa8a8u: goto label_1fa8a8;
        case 0x1fa8acu: goto label_1fa8ac;
        case 0x1fa8b0u: goto label_1fa8b0;
        case 0x1fa8b4u: goto label_1fa8b4;
        case 0x1fa8b8u: goto label_1fa8b8;
        case 0x1fa8bcu: goto label_1fa8bc;
        case 0x1fa8c0u: goto label_1fa8c0;
        case 0x1fa8c4u: goto label_1fa8c4;
        case 0x1fa8c8u: goto label_1fa8c8;
        case 0x1fa8ccu: goto label_1fa8cc;
        case 0x1fa8d0u: goto label_1fa8d0;
        case 0x1fa8d4u: goto label_1fa8d4;
        case 0x1fa8d8u: goto label_1fa8d8;
        case 0x1fa8dcu: goto label_1fa8dc;
        case 0x1fa8e0u: goto label_1fa8e0;
        case 0x1fa8e4u: goto label_1fa8e4;
        case 0x1fa8e8u: goto label_1fa8e8;
        case 0x1fa8ecu: goto label_1fa8ec;
        case 0x1fa8f0u: goto label_1fa8f0;
        case 0x1fa8f4u: goto label_1fa8f4;
        case 0x1fa8f8u: goto label_1fa8f8;
        case 0x1fa8fcu: goto label_1fa8fc;
        case 0x1fa900u: goto label_1fa900;
        case 0x1fa904u: goto label_1fa904;
        case 0x1fa908u: goto label_1fa908;
        case 0x1fa90cu: goto label_1fa90c;
        case 0x1fa910u: goto label_1fa910;
        case 0x1fa914u: goto label_1fa914;
        case 0x1fa918u: goto label_1fa918;
        case 0x1fa91cu: goto label_1fa91c;
        case 0x1fa920u: goto label_1fa920;
        case 0x1fa924u: goto label_1fa924;
        case 0x1fa928u: goto label_1fa928;
        case 0x1fa92cu: goto label_1fa92c;
        case 0x1fa930u: goto label_1fa930;
        case 0x1fa934u: goto label_1fa934;
        case 0x1fa938u: goto label_1fa938;
        case 0x1fa93cu: goto label_1fa93c;
        case 0x1fa940u: goto label_1fa940;
        case 0x1fa944u: goto label_1fa944;
        case 0x1fa948u: goto label_1fa948;
        case 0x1fa94cu: goto label_1fa94c;
        case 0x1fa950u: goto label_1fa950;
        case 0x1fa954u: goto label_1fa954;
        case 0x1fa958u: goto label_1fa958;
        case 0x1fa95cu: goto label_1fa95c;
        case 0x1fa960u: goto label_1fa960;
        case 0x1fa964u: goto label_1fa964;
        case 0x1fa968u: goto label_1fa968;
        case 0x1fa96cu: goto label_1fa96c;
        case 0x1fa970u: goto label_1fa970;
        case 0x1fa974u: goto label_1fa974;
        case 0x1fa978u: goto label_1fa978;
        case 0x1fa97cu: goto label_1fa97c;
        case 0x1fa980u: goto label_1fa980;
        case 0x1fa984u: goto label_1fa984;
        case 0x1fa988u: goto label_1fa988;
        case 0x1fa98cu: goto label_1fa98c;
        case 0x1fa990u: goto label_1fa990;
        case 0x1fa994u: goto label_1fa994;
        case 0x1fa998u: goto label_1fa998;
        case 0x1fa99cu: goto label_1fa99c;
        case 0x1fa9a0u: goto label_1fa9a0;
        case 0x1fa9a4u: goto label_1fa9a4;
        case 0x1fa9a8u: goto label_1fa9a8;
        case 0x1fa9acu: goto label_1fa9ac;
        default: break;
    }

    ctx->pc = 0x1fa740u;

label_1fa740:
    // 0x1fa740: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fa740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1fa744:
    // 0x1fa744: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1fa744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1fa748:
    // 0x1fa748: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1fa748u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_1fa74c:
    // 0x1fa74c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1fa74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1fa750:
    // 0x1fa750: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fa750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1fa754:
    // 0x1fa754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fa754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fa758:
    // 0x1fa758: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fa758u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fa75c:
    // 0x1fa75c: 0x8e45b8b8  lw          $a1, -0x4748($s2)
    ctx->pc = 0x1fa75cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949048)));
label_1fa760:
    // 0x1fa760: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fa760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fa764:
    // 0x1fa764: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1fa764u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1fa768:
    // 0x1fa768: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1fa768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1fa76c:
    // 0x1fa76c: 0x40f809  jalr        $v0
label_1fa770:
    if (ctx->pc == 0x1FA770u) {
        ctx->pc = 0x1FA770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA76Cu;
        // 0x1fa770: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA774u;
        goto label_1fa774;
    }
    ctx->pc = 0x1FA76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FA774u);
        ctx->pc = 0x1FA770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA76Cu;
        // 0x1fa770: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA76Cu, 0x1FA774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FA774u;
label_1fa774:
    // 0x1fa774: 0x8e2300e8  lw          $v1, 0xE8($s1)
    ctx->pc = 0x1fa774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
label_1fa778:
    // 0x1fa778: 0x8e2400ec  lw          $a0, 0xEC($s1)
    ctx->pc = 0x1fa778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
label_1fa77c:
    // 0x1fa77c: 0x14800078  bnez        $a0, . + 4 + (0x78 << 2)
label_1fa780:
    if (ctx->pc == 0x1FA780u) {
        ctx->pc = 0x1FA780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA77Cu;
        // 0x1fa780: 0x438023  subu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA784u;
        goto label_1fa784;
    }
    ctx->pc = 0x1FA77Cu;
    {
        const bool branch_taken_0x1fa77c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA77Cu;
        // 0x1fa780: 0x438023  subu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa77c) {
            ctx->pc = 0x1FA960u;
            goto label_1fa960;
        }
    }
    ctx->pc = 0x1FA784u;
label_1fa784:
    // 0x1fa784: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x1fa784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_1fa788:
    // 0x1fa788: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fa788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fa78c:
    // 0x1fa78c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fa78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1fa790:
    // 0x1fa790: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1fa790u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1fa794:
    // 0x1fa794: 0x8c460044  lw          $a2, 0x44($v0)
    ctx->pc = 0x1fa794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1fa798:
    // 0x1fa798: 0xc0f809  jalr        $a2
label_1fa79c:
    if (ctx->pc == 0x1FA79Cu) {
        ctx->pc = 0x1FA79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA798u;
        // 0x1fa79c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA7A0u;
        goto label_1fa7a0;
    }
    ctx->pc = 0x1FA798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1FA7A0u);
        ctx->pc = 0x1FA79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA798u;
        // 0x1fa79c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA798u, 0x1FA7A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FA7A0u;
label_1fa7a0:
    // 0x1fa7a0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1fa7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1fa7a4:
    // 0x1fa7a4: 0x8c64f484  lw          $a0, -0xB7C($v1)
    ctx->pc = 0x1fa7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964356)));
label_1fa7a8:
    // 0x1fa7a8: 0x90102b  sltu        $v0, $a0, $s0
    ctx->pc = 0x1fa7a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1fa7ac:
    // 0x1fa7ac: 0x82800b  movn        $s0, $a0, $v0
    ctx->pc = 0x1fa7acu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_1fa7b0:
    // 0x1fa7b0: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
label_1fa7b4:
    if (ctx->pc == 0x1FA7B4u) {
        ctx->pc = 0x1FA7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA7B0u;
        // 0x1fa7b4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA7B8u;
        goto label_1fa7b8;
    }
    ctx->pc = 0x1FA7B0u;
    {
        const bool branch_taken_0x1fa7b0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1FA7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA7B0u;
        // 0x1fa7b4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa7b0) {
            ctx->pc = 0x1FA7CCu;
            goto label_1fa7cc;
        }
    }
    ctx->pc = 0x1FA7B8u;
label_1fa7b8:
    // 0x1fa7b8: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x1fa7b8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fa7bc:
    // 0x1fa7bc: 0x0  nop
    ctx->pc = 0x1fa7bcu;
    // NOP
label_1fa7c0:
    // 0x1fa7c0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1fa7c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1fa7c4:
    // 0x1fa7c4: 0x10000009  b           . + 4 + (0x9 << 2)
label_1fa7c8:
    if (ctx->pc == 0x1FA7C8u) {
        ctx->pc = 0x1FA7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA7C4u;
        // 0x1fa7c8: 0x8ca2f484  lw          $v0, -0xB7C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294964356)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA7CCu;
        goto label_1fa7cc;
    }
    ctx->pc = 0x1FA7C4u;
    {
        const bool branch_taken_0x1fa7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA7C4u;
        // 0x1fa7c8: 0x8ca2f484  lw          $v0, -0xB7C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294964356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa7c4) {
            ctx->pc = 0x1FA7ECu;
            goto label_1fa7ec;
        }
    }
    ctx->pc = 0x1FA7CCu;
label_1fa7cc:
    // 0x1fa7cc: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1fa7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_1fa7d0:
    // 0x1fa7d0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1fa7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_1fa7d4:
    // 0x1fa7d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1fa7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1fa7d8:
    // 0x1fa7d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1fa7d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1fa7dc:
    // 0x1fa7dc: 0x0  nop
    ctx->pc = 0x1fa7dcu;
    // NOP
label_1fa7e0:
    // 0x1fa7e0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1fa7e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1fa7e4:
    // 0x1fa7e4: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1fa7e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1fa7e8:
    // 0x1fa7e8: 0x8ca2f484  lw          $v0, -0xB7C($a1)
    ctx->pc = 0x1fa7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294964356)));
label_1fa7ec:
    // 0x1fa7ec: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1fa7f0:
    if (ctx->pc == 0x1FA7F0u) {
        ctx->pc = 0x1FA7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA7ECu;
        // 0x1fa7f0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA7F4u;
        goto label_1fa7f4;
    }
    ctx->pc = 0x1FA7ECu;
    {
        const bool branch_taken_0x1fa7ec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1FA7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA7ECu;
        // 0x1fa7f0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa7ec) {
            ctx->pc = 0x1FA808u;
            goto label_1fa808;
        }
    }
    ctx->pc = 0x1FA7F4u;
label_1fa7f4:
    // 0x1fa7f4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1fa7f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1fa7f8:
    // 0x1fa7f8: 0x0  nop
    ctx->pc = 0x1fa7f8u;
    // NOP
label_1fa7fc:
    // 0x1fa7fc: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x1fa7fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_1fa800:
    // 0x1fa800: 0x10000007  b           . + 4 + (0x7 << 2)
label_1fa804:
    if (ctx->pc == 0x1FA804u) {
        ctx->pc = 0x1FA808u;
        goto label_1fa808;
    }
    ctx->pc = 0x1FA800u;
    {
        const bool branch_taken_0x1fa800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa800) {
            ctx->pc = 0x1FA820u;
            goto label_1fa820;
        }
    }
    ctx->pc = 0x1FA808u;
label_1fa808:
    // 0x1fa808: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1fa808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1fa80c:
    // 0x1fa80c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1fa80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1fa810:
    // 0x1fa810: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1fa810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1fa814:
    // 0x1fa814: 0x0  nop
    ctx->pc = 0x1fa814u;
    // NOP
label_1fa818:
    // 0x1fa818: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x1fa818u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_1fa81c:
    // 0x1fa81c: 0x460e7380  add.s       $f14, $f14, $f14
    ctx->pc = 0x1fa81cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[14]);
label_1fa820:
    // 0x1fa820: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1fa820u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1fa824:
    // 0x1fa824: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1fa824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_1fa828:
    // 0x1fa828: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x1fa828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_1fa82c:
    // 0x1fa82c: 0xc0cdd5a  jal         func_337568
label_1fa830:
    if (ctx->pc == 0x1FA830u) {
        ctx->pc = 0x1FA830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA82Cu;
        // 0x1fa830: 0x46006bc6  mov.s       $f15, $f13 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA834u;
        goto label_1fa834;
    }
    ctx->pc = 0x1FA82Cu;
    SET_GPR_U32(ctx, 31, 0x1FA834u);
    ctx->pc = 0x1FA830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA82Cu;
    // 0x1fa830: 0x46006bc6  mov.s       $f15, $f13 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x337568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337568u, 0x1FA82Cu, 0x1FA834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA834u;
label_1fa834:
    // 0x1fa834: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fa834u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1fa838:
    // 0x1fa838: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x1fa838u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_1fa83c:
    // 0x1fa83c: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x1fa83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_1fa840:
    // 0x1fa840: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x1fa840u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1fa844:
    // 0x1fa844: 0xc073b26  jal         func_1CEC98
label_1fa848:
    if (ctx->pc == 0x1FA848u) {
        ctx->pc = 0x1FA848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA844u;
        // 0x1fa848: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA84Cu;
        goto label_1fa84c;
    }
    ctx->pc = 0x1FA844u;
    SET_GPR_U32(ctx, 31, 0x1FA84Cu);
    ctx->pc = 0x1FA848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA844u;
    // 0x1fa848: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC98u, 0x1FA844u, 0x1FA84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA84Cu;
label_1fa84c:
    // 0x1fa84c: 0x2e1000e6  sltiu       $s0, $s0, 0xE6
    ctx->pc = 0x1fa84cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)230) ? 1 : 0);
label_1fa850:
    // 0x1fa850: 0x5600000c  bnel        $s0, $zero, . + 4 + (0xC << 2)
label_1fa854:
    if (ctx->pc == 0x1FA854u) {
        ctx->pc = 0x1FA854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA850u;
        // 0x1fa854: 0x922200e4  lbu         $v0, 0xE4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA858u;
        goto label_1fa858;
    }
    ctx->pc = 0x1FA850u;
    {
        const bool branch_taken_0x1fa850 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa850) {
            ctx->pc = 0x1FA854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA850u;
            // 0x1fa854: 0x922200e4  lbu         $v0, 0xE4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA884u;
            goto label_1fa884;
        }
    }
    ctx->pc = 0x1FA858u;
label_1fa858:
    // 0x1fa858: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x1fa858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1fa85c:
    // 0x1fa85c: 0xc05181e  jal         func_146078
label_1fa860:
    if (ctx->pc == 0x1FA860u) {
        ctx->pc = 0x1FA860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA85Cu;
        // 0x1fa860: 0x26300040  addiu       $s0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA864u;
        goto label_1fa864;
    }
    ctx->pc = 0x1FA85Cu;
    SET_GPR_U32(ctx, 31, 0x1FA864u);
    ctx->pc = 0x1FA860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA85Cu;
    // 0x1fa860: 0x26300040  addiu       $s0, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146078u, 0x1FA85Cu, 0x1FA864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA864u;
label_1fa864:
    // 0x1fa864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fa868:
    // 0x1fa868: 0xc07a4f0  jal         func_1E93C0
label_1fa86c:
    if (ctx->pc == 0x1FA86Cu) {
        ctx->pc = 0x1FA86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA868u;
        // 0x1fa86c: 0x3405f000  ori         $a1, $zero, 0xF000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA870u;
        goto label_1fa870;
    }
    ctx->pc = 0x1FA868u;
    SET_GPR_U32(ctx, 31, 0x1FA870u);
    ctx->pc = 0x1FA86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA868u;
    // 0x1fa86c: 0x3405f000  ori         $a1, $zero, 0xF000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E93C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E93C0u, 0x1FA868u, 0x1FA870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA870u;
label_1fa870:
    // 0x1fa870: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1fa870u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_1fa874:
    // 0x1fa874: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fa874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fa878:
    // 0x1fa878: 0xc07a51a  jal         func_1E9468
label_1fa87c:
    if (ctx->pc == 0x1FA87Cu) {
        ctx->pc = 0x1FA87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA878u;
        // 0x1fa87c: 0x34a50fff  ori         $a1, $a1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA880u;
        goto label_1fa880;
    }
    ctx->pc = 0x1FA878u;
    SET_GPR_U32(ctx, 31, 0x1FA880u);
    ctx->pc = 0x1FA87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA878u;
    // 0x1fa87c: 0x34a50fff  ori         $a1, $a1, 0xFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4095);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9468u, 0x1FA878u, 0x1FA880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA880u;
label_1fa880:
    // 0x1fa880: 0x922200e4  lbu         $v0, 0xE4($s1)
    ctx->pc = 0x1fa880u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 228)));
label_1fa884:
    // 0x1fa884: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1fa884u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1fa888:
    // 0x1fa888: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
label_1fa88c:
    if (ctx->pc == 0x1FA88Cu) {
        ctx->pc = 0x1FA88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA888u;
        // 0x1fa88c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA890u;
        goto label_1fa890;
    }
    ctx->pc = 0x1FA888u;
    {
        const bool branch_taken_0x1fa888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA888u;
        // 0x1fa88c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa888) {
            ctx->pc = 0x1FA998u;
            goto label_1fa998;
        }
    }
    ctx->pc = 0x1FA890u;
label_1fa890:
    // 0x1fa890: 0x922200e5  lbu         $v0, 0xE5($s1)
    ctx->pc = 0x1fa890u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 229)));
label_1fa894:
    // 0x1fa894: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1fa898:
    if (ctx->pc == 0x1FA898u) {
        ctx->pc = 0x1FA898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA894u;
        // 0x1fa898: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA89Cu;
        goto label_1fa89c;
    }
    ctx->pc = 0x1FA894u;
    {
        const bool branch_taken_0x1fa894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA894u;
        // 0x1fa898: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa894) {
            ctx->pc = 0x1FA8E0u;
            goto label_1fa8e0;
        }
    }
    ctx->pc = 0x1FA89Cu;
label_1fa89c:
    // 0x1fa89c: 0x26320090  addiu       $s2, $s1, 0x90
    ctx->pc = 0x1fa89cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_1fa8a0:
    // 0x1fa8a0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1fa8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1fa8a4:
    // 0x1fa8a4: 0x0  nop
    ctx->pc = 0x1fa8a4u;
    // NOP
label_1fa8a8:
    // 0x1fa8a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fa8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fa8ac:
    // 0x1fa8ac: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1fa8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1fa8b0:
    // 0x1fa8b0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1fa8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fa8b4:
    // 0x1fa8b4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1fa8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1fa8b8:
    // 0x1fa8b8: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x1fa8b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_1fa8bc:
    // 0x1fa8bc: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1fa8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_1fa8c0:
    // 0x1fa8c0: 0x40f809  jalr        $v0
label_1fa8c4:
    if (ctx->pc == 0x1FA8C4u) {
        ctx->pc = 0x1FA8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA8C0u;
        // 0x1fa8c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA8C8u;
        goto label_1fa8c8;
    }
    ctx->pc = 0x1FA8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FA8C8u);
        ctx->pc = 0x1FA8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA8C0u;
        // 0x1fa8c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA8C0u, 0x1FA8C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FA8C8u;
label_1fa8c8:
    // 0x1fa8c8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1fa8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1fa8cc:
    // 0x1fa8cc: 0x922200e5  lbu         $v0, 0xE5($s1)
    ctx->pc = 0x1fa8ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 229)));
label_1fa8d0:
    // 0x1fa8d0: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1fa8d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1fa8d4:
    // 0x1fa8d4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1fa8d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1fa8d8:
    // 0x1fa8d8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1fa8dc:
    if (ctx->pc == 0x1FA8DCu) {
        ctx->pc = 0x1FA8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA8D8u;
        // 0x1fa8dc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA8E0u;
        goto label_1fa8e0;
    }
    ctx->pc = 0x1FA8D8u;
    {
        const bool branch_taken_0x1fa8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA8D8u;
        // 0x1fa8dc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa8d8) {
            ctx->pc = 0x1FA8A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa8a8;
        }
    }
    ctx->pc = 0x1FA8E0u;
label_1fa8e0:
    // 0x1fa8e0: 0x922300e5  lbu         $v1, 0xE5($s1)
    ctx->pc = 0x1fa8e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 229)));
label_1fa8e4:
    // 0x1fa8e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fa8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fa8e8:
    // 0x1fa8e8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1fa8e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1fa8ec:
    // 0x1fa8ec: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1fa8f0:
    if (ctx->pc == 0x1FA8F0u) {
        ctx->pc = 0x1FA8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA8ECu;
        // 0x1fa8f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA8F4u;
        goto label_1fa8f4;
    }
    ctx->pc = 0x1FA8ECu;
    {
        const bool branch_taken_0x1fa8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA8ECu;
        // 0x1fa8f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa8ec) {
            ctx->pc = 0x1FA93Cu;
            goto label_1fa93c;
        }
    }
    ctx->pc = 0x1FA8F4u;
label_1fa8f4:
    // 0x1fa8f4: 0x263200b8  addiu       $s2, $s1, 0xB8
    ctx->pc = 0x1fa8f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
label_1fa8f8:
    // 0x1fa8f8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1fa8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1fa8fc:
    // 0x1fa8fc: 0x0  nop
    ctx->pc = 0x1fa8fcu;
    // NOP
label_1fa900:
    // 0x1fa900: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fa900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fa904:
    // 0x1fa904: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1fa904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1fa908:
    // 0x1fa908: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1fa908u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fa90c:
    // 0x1fa90c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1fa90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1fa910:
    // 0x1fa910: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x1fa910u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_1fa914:
    // 0x1fa914: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1fa914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_1fa918:
    // 0x1fa918: 0x40f809  jalr        $v0
label_1fa91c:
    if (ctx->pc == 0x1FA91Cu) {
        ctx->pc = 0x1FA91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA918u;
        // 0x1fa91c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA920u;
        goto label_1fa920;
    }
    ctx->pc = 0x1FA918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FA920u);
        ctx->pc = 0x1FA91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA918u;
        // 0x1fa91c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA918u, 0x1FA920u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FA920u;
label_1fa920:
    // 0x1fa920: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1fa920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1fa924:
    // 0x1fa924: 0x922400e5  lbu         $a0, 0xE5($s1)
    ctx->pc = 0x1fa924u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 229)));
label_1fa928:
    // 0x1fa928: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1fa928u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1fa92c:
    // 0x1fa92c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1fa92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1fa930:
    // 0x1fa930: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1fa930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1fa934:
    // 0x1fa934: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_1fa938:
    if (ctx->pc == 0x1FA938u) {
        ctx->pc = 0x1FA938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA934u;
        // 0x1fa938: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA93Cu;
        goto label_1fa93c;
    }
    ctx->pc = 0x1FA934u;
    {
        const bool branch_taken_0x1fa934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA934u;
        // 0x1fa938: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa934) {
            ctx->pc = 0x1FA900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa900;
        }
    }
    ctx->pc = 0x1FA93Cu;
label_1fa93c:
    // 0x1fa93c: 0x8e2600dc  lw          $a2, 0xDC($s1)
    ctx->pc = 0x1fa93cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_1fa940:
    // 0x1fa940: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fa940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fa944:
    // 0x1fa944: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1fa944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1fa948:
    // 0x1fa948: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1fa948u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1fa94c:
    // 0x1fa94c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1fa94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1fa950:
    // 0x1fa950: 0x60f809  jalr        $v1
label_1fa954:
    if (ctx->pc == 0x1FA954u) {
        ctx->pc = 0x1FA954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA950u;
        // 0x1fa954: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA958u;
        goto label_1fa958;
    }
    ctx->pc = 0x1FA950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FA958u);
        ctx->pc = 0x1FA954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA950u;
        // 0x1fa954: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA950u, 0x1FA958u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FA958u;
label_1fa958:
    // 0x1fa958: 0x1000000f  b           . + 4 + (0xF << 2)
label_1fa95c:
    if (ctx->pc == 0x1FA95Cu) {
        ctx->pc = 0x1FA95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA958u;
        // 0x1fa95c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA960u;
        goto label_1fa960;
    }
    ctx->pc = 0x1FA958u;
    {
        const bool branch_taken_0x1fa958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA958u;
        // 0x1fa95c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa958) {
            ctx->pc = 0x1FA998u;
            goto label_1fa998;
        }
    }
    ctx->pc = 0x1FA960u;
label_1fa960:
    // 0x1fa960: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1fa960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1fa964:
    // 0x1fa964: 0x8c62f480  lw          $v0, -0xB80($v1)
    ctx->pc = 0x1fa964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964352)));
label_1fa968:
    // 0x1fa968: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1fa968u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1fa96c:
    // 0x1fa96c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1fa970:
    if (ctx->pc == 0x1FA970u) {
        ctx->pc = 0x1FA970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA96Cu;
        // 0x1fa970: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA974u;
        goto label_1fa974;
    }
    ctx->pc = 0x1FA96Cu;
    {
        const bool branch_taken_0x1fa96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA96Cu;
        // 0x1fa970: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa96c) {
            ctx->pc = 0x1FA998u;
            goto label_1fa998;
        }
    }
    ctx->pc = 0x1FA974u;
label_1fa974:
    // 0x1fa974: 0x8e45b8b8  lw          $a1, -0x4748($s2)
    ctx->pc = 0x1fa974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949048)));
label_1fa978:
    // 0x1fa978: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fa978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fa97c:
    // 0x1fa97c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1fa97cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1fa980:
    // 0x1fa980: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1fa980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1fa984:
    // 0x1fa984: 0x40f809  jalr        $v0
label_1fa988:
    if (ctx->pc == 0x1FA988u) {
        ctx->pc = 0x1FA988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA984u;
        // 0x1fa988: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA98Cu;
        goto label_1fa98c;
    }
    ctx->pc = 0x1FA984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FA98Cu);
        ctx->pc = 0x1FA988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA984u;
        // 0x1fa988: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA984u, 0x1FA98Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FA98Cu;
label_1fa98c:
    // 0x1fa98c: 0xae2200e8  sw          $v0, 0xE8($s1)
    ctx->pc = 0x1fa98cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 2));
label_1fa990:
    // 0x1fa990: 0xae2000ec  sw          $zero, 0xEC($s1)
    ctx->pc = 0x1fa990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 0));
label_1fa994:
    // 0x1fa994: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1fa994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fa998:
    // 0x1fa998: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fa998u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fa99c:
    // 0x1fa99c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1fa99cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fa9a0:
    // 0x1fa9a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fa9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fa9a4:
    // 0x1fa9a4: 0x3e00008  jr          $ra
label_1fa9a8:
    if (ctx->pc == 0x1FA9A8u) {
        ctx->pc = 0x1FA9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA9A4u;
        // 0x1fa9a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FA9ACu;
        goto label_1fa9ac;
    }
    ctx->pc = 0x1FA9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA9A4u;
        // 0x1fa9a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA9ACu;
label_1fa9ac:
    // 0x1fa9ac: 0x0  nop
    ctx->pc = 0x1fa9acu;
    // NOP
    ctx->pc = 0x1fa9b0u;
}
